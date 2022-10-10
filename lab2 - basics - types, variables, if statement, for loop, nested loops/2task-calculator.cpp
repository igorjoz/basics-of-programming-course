#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int numsQuantity;
        double result = 1, num;
        char character;

        cin >> character >> numsQuantity;
        if (character == '+') {
            result = 0.0;
        }
        else {
            result = 1.0;
        }

        for (int j = 0; j < numsQuantity; j++) {
            cin >> num;

            if (character == '+') {
                result += num;
            }
            else {
                result *= num;
            }
        }

        cout << result << "\n";
    }

    return 0;
}
