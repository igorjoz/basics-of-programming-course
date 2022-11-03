#include <iostream>

using namespace std;

void copyArrayCharacters(char destination[], char origin[]) {
    int size = sizeof(origin) / sizeof(origin[0]);

    for (int i = 0; i < size; i++) {
        destination[i] = origin[i];
    }
}

int main(int argc, char* argv[])
{
    char origin[10] = "abcde";
    char destination[10];

    cout << origin << "\n";
    cout << destination << "\n\n";

    copyArrayCharacters(destination, origin);

    cout << origin << "\n";
    cout << destination << "\n\n";

    return 0;
}
