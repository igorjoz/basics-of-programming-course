#include <iostream>

using namespace std;

int main()
{
	int size = 4;

	for (int quantity = 0; quantity < size; quantity++) {
		for (int line = 0; line < 4; line++) {
			for (int column = 0; column < 4; column++) {
				if (column == line or line == size - column - 1) {
					cout << '.';
				}
				else if (column == line + 1 or line == column + 1) {
					cout << '/';
				}
				else {
					cout << '\\';
				}
			}
			cout << "\n";
		}
	}
}
