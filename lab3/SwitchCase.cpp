#include <iostream>

using namespace std;

int main()
{
    int vowelsCount = 0;
    int consonantsCount = 0;
    int whiteCharactersCount = 0;
    int interpunctionCharactersCount = 0;
    int digitsCount = 0;
    int otherCharactersCount = 0;
    char character;

    while (cin >> noskipws >> character) {
        switch (character) {
            case 'a' : case 'e': case 'i' : case 'o' : case 'u' : case 'y':
            case 'A': case 'E': case 'I': case 'O': case 'U': case 'Y':
                vowelsCount++;
                break;
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                digitsCount++;
                break;
            case '.': case ',': case ':': case ';':
                interpunctionCharactersCount++;
                break;
            case ' ': case '\t': case '\n':
                whiteCharactersCount++;
                break;
            default :
                if (character >= '0' and character <= '9') {
                    digitsCount++;
                }
                else if ((character >= 'a' and character <= 'z') <= 'z' or (character >= 'A' and character <= 'Z')) {
                    consonantsCount++;
                }
                else {
                    otherCharactersCount++;
                }
        }
    }
    cout << "vowels count: " << vowelsCount << "\n";
    cout << "consonants count: " << consonantsCount << "\n";
    cout << "digits cout: " << digitsCount << "\n";
    cout << "interpunction characters count: " << interpunctionCharactersCount << "\n";
    cout << "white characters count: " << whiteCharactersCount << "\n";
    cout << "other characters count: " << otherCharactersCount << "\n";

    return 0;
}
