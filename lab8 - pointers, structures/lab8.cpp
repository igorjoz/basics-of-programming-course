#include <iostream>

using namespace std;

struct Person {
    char name[1000];
    int keysQuantity = 0;

    void print() {
        cout << this->name << " " << this->keysQuantity << "\n";
    }
};

struct Room {
    int index = 0;
    Person* pointerToOwner = NULL;
};


int main()
{
    int roomsQuantity;
    char operationType;

    cin >> roomsQuantity;

    Room* rooms = new Room[roomsQuantity];

    for (int i = 0; i < roomsQuantity;  i++) {
        cin >> rooms[i].index;
    }

    while (cin >> operationType) {
        if (operationType == 'D') {
            int roomIndex;
            Person person;

            cin >> roomIndex >> person.name;
            person.keysQuantity++;

            if (rooms[roomIndex].pointerToOwner != NULL) {
                rooms[roomIndex].pointerToOwner->keysQuantity--;
            }

            rooms[roomIndex].pointerToOwner = &person;

            if (person.keysQuantity == 1) {
                cout << "#\n";
            }
            else {
                person.print();
            }
        }
        else if (operationType == 'B') {
            int ownedRoomIndex, newRoomIndex;
            bool roomExists = false;

            cin >> ownedRoomIndex >> newRoomIndex;

            for (int i = 0; i < roomsQuantity; i++) {
                if (rooms[i].index == newRoomIndex) {
                    roomExists = true;
                }
            }

            if (rooms[ownedRoomIndex].pointerToOwner == NULL) {
                cout << "#\n";
            }
            else if (!roomExists) {
                cout << "!\n";
            }
            else {
                rooms[ownedRoomIndex].pointerToOwner->keysQuantity--;

                if (rooms[ownedRoomIndex].pointerToOwner->keysQuantity == 0) {
                    // handle deleting every single user
                    //delete rooms[ownedRoomIndex].pointerToOwner;
                }

                rooms[newRoomIndex].pointerToOwner = rooms[ownedRoomIndex].pointerToOwner;
                rooms[newRoomIndex].pointerToOwner->keysQuantity++;

                rooms[newRoomIndex].pointerToOwner->print();
            }
        }
        else {
            delete[]rooms;

            return 0;
        }
    }

    return 0;
}
