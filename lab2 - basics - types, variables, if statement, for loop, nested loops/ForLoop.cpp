#include<iostream>

using namespace std;

int main() {
	int num;

	while (true) {	
		cout << "Type number (0 to exit program): ";
		cin >> num;

		if (num == 0) {
			break;
		}

		if (num % 2 == 0) {
			cout << num << "\n";
		}
	}

	return 0;
}
