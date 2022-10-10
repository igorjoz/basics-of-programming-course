#include <iostream>

using namespace std;

int main()
{
	int size = 13;
	char character = 'X';

	for (int i = 0; i < size / 2; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		cout << character;

		for (int j = 0; j < size - (i * 2) - 2; j++) {
			cout << " ";
		}
		cout << character << "\n";
	}

	if (size % 2 == 1) {
		for (int i = 0; i < size / 2; i++) {
			cout << " ";
		}
		cout << character << "\n";
	}

	for (int i = 0; i < size / 2; i++) {
		for (int j = 0; j < size / 2 - i - 1; j++) {
			cout << " ";
		}
		cout << character;

		for (int j = 0; j < (i * 2) + (size % 2); j++) {
			cout << " ";
		}
		cout << character << "\n";
	}
}
