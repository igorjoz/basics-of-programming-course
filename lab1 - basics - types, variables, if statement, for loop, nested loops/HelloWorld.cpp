#include <iostream>
using namespace std;

int main()
{
    int lines;
    cout << "Podaj ilosc wierszy choinki: ";
    cin >> lines;

    char character;
    cout << "Podaj znak z ktorej zostanie zbudowana choinka: ";
    cin >> character;

    int spacesQuantity = lines - 2;
    int charsQuantity = 1;

    for (int i = 0; i < lines; i++)
    {
        for (int j = spacesQuantity; j >= 0; j--)
        {
            cout << " ";
        }

        for (int j = 0; j < charsQuantity; j++) {
            cout << character;
        }

        spacesQuantity--;
        charsQuantity += 2;
        cout << endl;
    }
    
    for (int i = 0; i < lines -1; i++)
    {
        cout << " ";
    }
    cout << character;

    return 0;
}
