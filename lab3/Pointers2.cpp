#include<iostream>

using namespace std;

void pointers1() {
	int num1 = 5;
	int* pointer = &num1;

	int num2 = num1;
	*pointer = 6;

	cout << "num1: " << num1 << "\n";
	cout << "num2: " << num2 << "\n---\n";
}

void pointers2() {
	int num1 = 5;
	int* pointer1 = &num1;
	int* pointer2 = &num1;

	cout << "*pointer1: " << *pointer1 << "\n";
	cout << "*pointer2: " << *pointer2 << "\n\n";

	num1 = 6;

	cout << "*pointer1: " << *pointer1 << "\n";
	cout << "*pointer2: " << *pointer2 << "\n---\n";
}

void pointers3() {
	int num1 = 5;
	int* pointer1 = &num1;
	int** pointer2 = &pointer1;
	int num2 = num1;

	*pointer2 = &num2;
	*pointer1 = 6;
	**pointer2 = 7;

	cout << "num1: " << num1 << "\n";
	cout << "num2: " << num2<< "\n---\n";
}

int main() {
	pointers1();
	
	pointers2();

	pointers3();

	return 0;
}
