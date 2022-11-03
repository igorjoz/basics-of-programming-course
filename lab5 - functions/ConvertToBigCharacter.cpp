#include <iostream>

using namespace std;

char convertToBigChar(char character) {
    char convertedCharacter = (int)character - 32;
    
    return convertedCharacter;
}

int main(int argc, char* argv[])
{
    char characters[12] = "abcdefghijk";
    for (char character : characters) {
        cout << character << " -> " << convertToBigChar(character) << "\n";
    }

    return 0;
}
