#include <iostream>

using namespace std;

void setEndOfStringCharacter(char characters[], int index) {
    characters[index] = '\0';
}

int main(int argc, char* argv[])
{
    char characters[15] = "funkcje";

    cout << sizeof characters << "\n";
    cout << characters << "\n";
    
    for (int i = 5; i >= 0; i--) {
        setEndOfStringCharacter(characters, i);
        cout << characters << "\n";
    }

    return 0;
}
