/*
Calculate rectangle surface
*/

#include <iostream>

using namespace std;

int main()
{
    int length, width;

    cout << "Rectangle length: ";
    cin >> length;

    cout << "Rectangle width: ";
    cin >> width;

    if (length > 0 and width > 0) {
        cout << "Rectangle surface equals: " << length * width;
    }
    else {
        cout << "Invalid input! Length or width is not positive";
    }
    cout << "\n";

    return 0;
}
