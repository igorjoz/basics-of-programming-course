#include <iostream>

using namespace std;

void printCombinations(string characters) {
    int size = characters.length();
    
    for (int i = 0; i < size; i++) {
        string currentCombination = "";
        currentCombination += characters[i];

        for (int j = i + 1; j < size; j++) {
            currentCombination += characters[j];
        }

        cout << currentCombination << "\n";
    }
}

void printPermutations(string characters) {

}

int main(int argc, char* argv[])
{
    string characters = "abcdefghijkl";

    printCombinations(characters);
    cout << "\n;";

    printPermutations(characters);
    cout << "\n";

    return 0;
}
