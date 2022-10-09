#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Type a, b, c dimensions: ";
    cin >> a >> b >> c;

    if (a + b > c and a + c > b and b + c > a) {
        cout << "You COULD create a triangle using these dimensions";
    }
    else {
        cout << "It's NOT POSSIBLE to create a triangle using these dimensions";
    }
    cout << "\n";

    return 0;
}
