#include <iostream>

using namespace std;

int main()
{
	int length = 10;
	int width = 5;
	char character = '*';

	for (int i = 0; i < length; i++) {
		cout << character;
	}
	cout << "\n";

	for (int i = 0; i < width - 2; i++) {
		cout << character;

		for (int j = 0; j < length - 2; j++) {
			cout << " ";
		}

		cout << character << "\n";
	}

	for (int i = 0; i < length; i++) {
		cout << character;
	}
	cout << "\n";

	return 0;
}
