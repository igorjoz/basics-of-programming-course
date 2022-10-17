#include <iostream>

using namespace std;

void question1() {
	char character1 = 7; // ok, converted to char representation
	char character2 = character1 - 9;
	unsigned char character3 = character2;

	cout << "character1: " << character1 << " " << (int)character1 << "\n";
	cout << "character2: " << character2 << " " << (int)character2 << "\n";
	cout << "character3: " << character3 << " " << (int)character3 << "\n";
	cout << "(int)(z * c): " << (int)(character2 * character3) << "\n";
	cout << "answer: " << (int)character3 << " " << (int)(character2 * character3) << "\n\n";
}


void oth1() {
	int a = -1;
	int b;

	cout << sizeof(int) << " " << sizeof(int) - 1 << "\n";

	for (b = 8 * sizeof(int) - 1; b >= 0; b--)
	{
		cout << ((a & (1U << b)) > 0);
	}
	cout << "\n";

	a = 13;
	for (b = 8 * sizeof(int) - 1; b >= 0; b--) {
		cout << ((a & (1U << b)) > 0);
	}
	cout << "\n";
}

void oth2() {
	double d = 1 / 3; // dzielenie całkowitoliczbowe!
	int i = 1 / 3;

	cout << i << endl;
	cout << d << endl;
	d = 1 / 3.0; // operandy zmiennoprzecinkowe
	cout << d << endl;
	d = (1.0F) / 3; // operandy zmiennoprzecinkowe
	cout << d << endl; // j.w.
	// Uwaga: dwa poniższe wyrażenia dają
	// inne wyniki. Powód: opracowywanie
	// wyrażenia "od lewej do prawej"
	d = 27 / 2 / 2.0; // IMPORTANT
	cout << d << endl;
	d = 27.0 / 2 / 2; // IMPORTANT
	cout << d << endl;
}

void question2() {
	int num;
	cin >> num;

	float floatingPointNum = num;

	while (floatingPointNum < (float)(num + 16)) {
		cout << floatingPointNum << " " << (float)(num + 16) << " " << (floatingPointNum < (float)(num + 16)) << "\n";
		cout << floatingPointNum << "\n";
		num++;
	}

	cout << "ENDLESS LOOP";
}

void question3() {
	cout << 3.0 / 2 << "\n";
	cout << 0x10 / 2 << "   " << 0x10 << "\n";
	//cout << (int)('b' - '0') << "\n";
	cout << (int)('b' - 'a') << "\n";
	cout << (int)('z' - 'a') << "\n";

	cout << "answer (b): 1.5 8 1" << "\n\n";
}

void question4() {
	int num1 = 2;
	int num2 = 6;

	int* pointer1 = &num1;
	int* pointer2 = &num2;

	int** pointerToPointer1 = &pointer1;
	int** pointerToPointer2 = &pointer2;

	*pointerToPointer2 = &num1;
	cout << (*pointer2) * num1 << "\n";

	num1++;

	cout << (*pointer1) * num1 << "\n";

	cout << "answer (b): 4 9" << "\n\n";
}

int main()
{
	//question1();
	//question2();
	//question3();
	question4();

    //oth1();
	//oth2();

	return 0;
}
