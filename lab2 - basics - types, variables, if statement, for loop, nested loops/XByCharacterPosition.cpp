#include <iostream>

using namespace std;

int main()
{
	int size = 17;
	char character = '*';

	for (int line = 0; line < size; line++) {
		for (int column = 0; column < size; column++) {
			if ((line == column) or (line == size - column - 1)) {
				cout << character;
			}
			else {
				cout << " ";
			}
		}
		cout << "\n";
	}
}
