#include<iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	int exponential = 0;
	int reminder = num;

	while (reminder % 2 == 0) {
		reminder >>= 1;
		exponential++;
	}

	if (exponential > 0) {
		cout << num << " = 2 ^ " << exponential;

		if (reminder > 1) {
			cout << " * " << reminder;
		}
	}
	else {
	cout << num << " is odd \n";
	}

	return 0;
}