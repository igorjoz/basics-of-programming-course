#include <iostream>

using namespace std;

int length(char charactersArray[]) {
    int stringLength = 0;

    while (charactersArray[stringLength] != '\0') {
        stringLength++;
    }

    return stringLength;
}

int main(int argc, char* argv[])
{
    cout << "argc: " << argc << "\n";

    for (int i = 0; i < argc; i++) {
        int stringLength = length(argv[i]);
        cout << "argv[" << i << "]: " << argv[i] << "\t stringLength: " << stringLength << "\n";
    }
    
    return 0;
}
