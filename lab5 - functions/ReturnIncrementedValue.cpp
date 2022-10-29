#include <iostream>

using namespace std;

int returnIncrementedValue(int num) {
    return ++num;
}

int main(int argc, char* argv[])
{
    int num = 0;
#include <iostream>

using namespace std;

int returnPreincrementedValue(int num) {
    return ++num;
}

int main(int argc, char* argv[])
{
    int num = 0;

    cout << returnPreincrementedValue(num) << "\n";
    cout << num << "\n";
    cout << returnPreincrementedValue(returnPreincrementedValue(num)) << "\n";
    cout << num << "\n";
    cout << returnPreincrementedValue(returnPreincrementedValue(returnPreincrementedValue(num))) << "\n";

    return 0;
}
