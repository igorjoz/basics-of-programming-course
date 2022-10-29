#include <iostream>
#include <cmath>

using namespace std;

void riddle(int setSize) {
    int subNum = 1 << setSize;

    for (int i = 0; i < subNum; i++) {
        cout << "{ ";

        for (int j = 1, el = 0; j < subNum; j *= 2, el++) {
            if (j and i) {
                cout << el << " ";
            }
        }

        cout << "}";
    }

    cout << "\n";
}

int main(int argc, char* argv[])
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        riddle(i);
    }

    return 0;
}
