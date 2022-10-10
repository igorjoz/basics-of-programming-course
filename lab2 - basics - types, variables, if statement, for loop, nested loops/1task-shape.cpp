#include <iostream>

using namespace std;

int main()
{
    int size, vertical, horizontal;
    char internalCharacter, externalCharacter;

    cin >> size >> vertical >> horizontal >> internalCharacter >> externalCharacter;

    for (int verticalIterator = 0; verticalIterator < vertical; verticalIterator++) {
        // top part
        for (int horizontalIterator = 0; horizontalIterator < horizontal; horizontalIterator++) {
            for (int i = 0; i < size / 2; i++) {
                for (int j = i; j < size / 2; j++) {
                    cout << externalCharacter;
                }

                for (int j = 0; j < i * 2 + 1; j++) {
                    cout << internalCharacter;
                }

                for (int j = i; j < size / 2; j++) {
                    cout << externalCharacter;
                }

                if (horizontal == 1) {
                    cout << "\n";
                }
            }
        }
        if (horizontal > 1) {
            cout << "\n";
        }
        
        // mid part
        for (int horizontalIterator = 0; horizontalIterator < horizontal; horizontalIterator++) {
            for (int i = 0; i < size; i++) {
                cout << internalCharacter;
            }

            if (horizontal == 1) {
                cout << "\n";
            }
        }
        if (horizontal > 1) {
            cout << "\n";
        }

        // bottom part
        for (int horizontalIterator = 0; horizontalIterator < horizontal; horizontalIterator++) {
            for (int i = 0; i < size / 2; i++) {
                for (int j = 0; j < i + 1; j++) {
                    cout << externalCharacter;
                }

                for (int j = 0; j < size - (i * 2 + 2); j++) {
                    cout << internalCharacter;
                }

                for (int j = 0; j < i + 1; j++) {
                    cout << externalCharacter;
                }

                if (horizontal == 1) {
                    cout << "\n";
                }
            }
        }
        if (horizontal > 1) {
            cout << "\n";
        }
    }
    
    return 0;
}
