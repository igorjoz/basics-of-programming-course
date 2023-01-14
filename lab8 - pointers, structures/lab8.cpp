#include <iostream>

using namespace std;

int const MAX_LETTERS_IN_NAME = 1001;

struct Person
{
public:
    char name[MAX_LETTERS_IN_NAME];
    int keysQuantity = 0;

    void print()
    {
        cout << name << " " << keysQuantity << "\n";
    }

    Person()
    {
        name[0] = '\0';
        keysQuantity = 0;
    }

    Person(char *name, int keysQuantity)
    {
        strcpy_s(this->name, name);
        this->keysQuantity = keysQuantity;
    }
};

struct Room
{
public:
    int number;
    Person *owner;

    Room()
    {
        number = -1;
        owner = nullptr;
    }
};

void readRoomsData(Room *rooms, int roomsQuantity)
{
    for (int i = 0; i < roomsQuantity; i++)
    {
        cin >> rooms[i].number;
    }
}

int findRoomIndex(int roomNumber, Room *rooms, int roomsQuantity)
{
    for (int i = 0; i < roomsQuantity; i++)
    {
        if (rooms[i].number == roomNumber)
        {
            return i;
        }
    }

    return -1;
}

void deleteIfHasNoKeys(Person *previousOwner)
{
    if (previousOwner->keysQuantity == 0)
    {
        delete previousOwner;
    }
}

void handleAddingPerson(Room *rooms, int roomsQuantity)
{
    int roomIndex = -1;
    Person *person = new Person();
    Person *previousOwner = nullptr;
    Room *room = nullptr;

    cin >> roomIndex >> person->name;

    room = &rooms[roomIndex];
    previousOwner = room->owner;

    if (previousOwner)
    {
        if (previousOwner == person)
        {
            return;
        }

        previousOwner->print();
        previousOwner->keysQuantity--;

        deleteIfHasNoKeys(previousOwner);
    }
    else
    {
        cout << "#\n";
    }

    room->owner = person;
    person->keysQuantity++;
}

void handleKeyTransfer(Room *rooms, int roomsQuantity)
{
    int ownedRoomIndex = -1, newRoomNumber = -1;

    cin >> ownedRoomIndex >> newRoomNumber;

    Room *ownedRoom = &rooms[ownedRoomIndex];
    Room *newRoom = nullptr;

    int index = findRoomIndex(newRoomNumber, rooms, roomsQuantity);

    if (index != -1)
    {
        newRoom = &rooms[index];
    }

    Person *owner = nullptr;
    Person *previousOwner = nullptr;

    if (ownedRoom)
    {
        owner = ownedRoom->owner;
    }

    if (!owner)
    {
        cout << "#\n";
        return;
    }

    if (newRoom)
    {
        previousOwner = newRoom->owner;
    }
    else
    {
        cout << "!\n";
        return;
    }

    if (previousOwner)
    {
        if (previousOwner != owner)
        {
            previousOwner->keysQuantity--;
            deleteIfHasNoKeys(previousOwner);
        }
        else
        {
            owner->print();
            return;
        }
    }

    newRoom->owner = owner;
    owner->keysQuantity++;

    owner->print();
}

int main()
{
    int roomsQuantity;
    char operationType;

    cin >> roomsQuantity;

    Room *rooms = new Room[roomsQuantity];

    readRoomsData(rooms, roomsQuantity);

    while (cin >> operationType)
    {
        if (operationType == 'D')
        {
            handleAddingPerson(rooms, roomsQuantity);
        }
        else if (operationType == 'B')
        {
            handleKeyTransfer(rooms, roomsQuantity);
        }
        else if (operationType == 'Q')
        {
            break;
        }
    }

    delete[] rooms;

    return 0;
}
