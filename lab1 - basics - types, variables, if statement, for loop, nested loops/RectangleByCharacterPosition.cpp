#include <iostream>

using namespace std;

int main()
{
	int length = 30;
	int width = 20;
	char character = '#';

	for (int line = 0; line < width; line++) {
		for (int column = 0; column < length; column++) {
			if (column == 0 or column == length - 1 or line == 0 or line == width - 1) {
				cout << character;
			}
			else {
				cout << " ";
			}
		}
		cout << "\n";
	}
}
