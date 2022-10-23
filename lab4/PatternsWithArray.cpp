#include <iostream>

#define SIZE 15

using namespace std;

void printPattern(char pattern[][SIZE + 1]) {
    for (int i = 0; i < 15; i++) {
        cout << pattern[i] << "\n";
    }
    cout << "\n";
}

int main()
{
    char pattern[SIZE][SIZE + 1];
    int i, j;

    // X pattern
    for (i = 0; i < SIZE; i++) {
        for (j = 0;  j < SIZE; j++) {
            pattern[i][j] = ((i == j) or (i + j == SIZE - 1)) ? '*' : ' ';
        }
        pattern[i][j] = '\0';
    }
    printPattern(pattern);

    // Rectangle pattern
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            pattern[i][j] = ((i == 0) or (i == SIZE - 1) or (j == 0) or (j == SIZE - 1)) ? '*' : ' ';
        }
        pattern[i][j] = '\0';
    }
    printPattern(pattern);

    // Chess board pattern
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            pattern[i][j] = (((i + j) % 2 == 0)) ? '*' : ' ';
        }
        pattern[i][j] = '\0';
    }
    printPattern(pattern);

    return 0;
}
