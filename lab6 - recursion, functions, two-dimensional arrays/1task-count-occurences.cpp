#include <iostream>

using namespace std;

int countOccurencesOfCharacter(char string[], int startIndex, char character, int occurencesCounterStart) {
    if (string[startIndex] == '\0') {
        return occurencesCounterStart;
    }

    if (string[startIndex] == character) {
        occurencesCounterStart++;
    }

    return countOccurencesOfCharacter(string, startIndex + 1, character, occurencesCounterStart);
}

int main()
{
    char string[50] = "abcdefgh abcd ab a"; // length == 18
    cout << "string: " << string << "\n";

    cout << "a: " << countOccurencesOfCharacter(string, 0, 'a', 0) << "\n";
    cout << "b: " << countOccurencesOfCharacter(string, 0, 'b', 0) << "\n";
    cout << "c: " << countOccurencesOfCharacter(string, 0, 'c', 0) << "\n";
    cout << "d: " << countOccurencesOfCharacter(string, 0, 'd', 0) << "\n";
    cout << "e: " << countOccurencesOfCharacter(string, 0, 'e', 0) << "\n";

    return 0;
}
