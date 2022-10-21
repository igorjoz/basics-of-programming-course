#include <iostream>

using namespace std;

void printNumIfGreaterEqualZeroInLoop() {
    int i;
    cin >> i;

    while (i > 0) {
        cout << i << "\n";
        cin >> i;
    }
}

void printNumIfNotEqualThePreviousInLoop() {
    int i, previous;
    cin >> i;

    do {
        cout << i << "\n";
        previous = i;
        cin >> i;
    } while (i != previous);
}

void forLoopPrint() {
    int n = 7;

    for (int i = 0; i < n; i++) {
        cout << "Hi For Loop!\n";
    }

    cout << "\n";
}

void forLoopDecrementingPrint() {
    for (int i = 7; i > 0; i--) {
        cout << "Hi For Loop Decrementing!\n";
    }

    cout << "\n";
}

void whileLoopPrint() {
    int i = 0, n = 7;

    while (i < n) {
        cout << "Hi While Loop!\n";
        i++;
    }

    cout << "\n";
}

void whileLoopDecrementingPrint() {
    int i = 7;

    while (i-- > 0) {
        cout << "Hi While Loop Decrementing!\n";
    }

    cout << "\n";
}

int main()
{
    printNumIfGreaterEqualZeroInLoop();
    printNumIfNotEqualThePreviousInLoop();

    forLoopPrint();
    forLoopDecrementingPrint();

    whileLoopPrint();
    whileLoopDecrementingPrint();

    return 0;
}
