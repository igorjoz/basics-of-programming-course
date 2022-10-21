#include <iostream>

using namespace std;

int main()
{
    unsigned char character = 16;
    unsigned char character2 = 16;
    unsigned char character3 = 16 * 16;
    unsigned char character4 = 16 / 4;

    character *= character;

    cout << (int)character << "\n";
    cout << (int)(character2 * character2) << "\n";

    character3 /= 4;
    character4 *= 16;

    cout << (int)character3 << " " << character3 << "\n";
    cout << (int)character4 << " " << character4 << "\n";

    unsigned char character5 = 2;
    unsigned char character6 = 3;
    unsigned int num1 = 2;
    unsigned int num2 = 3;

    cout << character5 - character6 << "\n";
    cout << num1 - num2 << "\n\n";

    unsigned char character7 = 7;
    cout << character7 / 2 << "\n";
    cout << character7 / 2.0 << "\n";
    cout << (double)character7 / 2.0 << "\n";
    cout << (double)character7 / 2 << "\n";

    return 0;
}
