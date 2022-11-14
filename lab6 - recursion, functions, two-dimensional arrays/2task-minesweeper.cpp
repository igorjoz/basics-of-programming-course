#include <iostream>

using namespace std;

const int SIZE = 10; // quantity of lines and columns

bool isMine(char arr[SIZE][SIZE + 1], int line, int column) {
    return arr[line][column] == '*';
}

void change(char arr[SIZE][SIZE + 1]) {
    int i, j;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (arr[i][j] == '.') {
                int minesCounter = 0;

                // [i - 1][j - 1]
                if (i - 1 >= 0 and j - 1 >= 0 and isMine(arr, i - 1, j - 1)) {
                    minesCounter++;
                }

                // [i - 1][j + 1]
                if (i - 1 >= 0 and j + 1 < SIZE and isMine(arr, i - 1, j + 1)) {
                    minesCounter++;
                }

                // [i + 1][j - 1]
                if (i + 1 < SIZE and j - 1 >= 0 and isMine(arr, i + 1, j - 1)) {
                    minesCounter++;
                }

                // [i + 1][j + 1]
                if (i + 1 < SIZE and j + 1 < SIZE and isMine(arr, i + 1, j + 1)) {
                    minesCounter++;
                }

                // ---

                // [i + 1][j]
                if (i + 1 < SIZE and isMine(arr, i + 1, j)) {
                    minesCounter++;
                }

                // [i - 1][j]
                if (i - 1 >= 0 and isMine(arr, i - 1, j)) {
                    minesCounter++;
                }

                // [i][j + 1]
                if (j + 1 < SIZE and isMine(arr, i, j + 1)) {
                    minesCounter++;
                }

                // [i][j - 1]
                if (j - 1 >= 0 and isMine(arr, i, j - 1)) {
                    minesCounter++;
                }

                if (minesCounter == 0) {
                    arr[i][j] = '0';
                }
                if (minesCounter == 1) {
                    arr[i][j] = '1';
                }
                if (minesCounter == 2) {
                    arr[i][j] = '2';
                }
                if (minesCounter == 3) {
                    arr[i][j] = '3';
                }
                if (minesCounter == 4) {
                    arr[i][j] = '4';
                }
                if (minesCounter == 5) {
                    arr[i][j] = '5';
                }
                if (minesCounter == 6) {
                    arr[i][j] = '6';
                }
                if (minesCounter == 7) {
                    arr[i][j] = '7';
                }
                if (minesCounter == 8) {
                    arr[i][j] = '8';
                }
                if (minesCounter == 9) {
                    arr[i][j] = '9';
                }
            }
        }
    }
}

void print(const char arr[SIZE][SIZE + 1]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << arr[i][j];
        }
        cout << "\n";
    }
}

int main()
{
    char arr[SIZE][SIZE + 1];

    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }
    cout << "\n";

    print(arr);

    change(arr);

    print(arr);

    return 0;
}
