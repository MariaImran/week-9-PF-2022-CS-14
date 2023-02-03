#include <iostream>
using namespace std;
main()
{
    int arrSize;
    cout << "Enter size: ";
    cin >> arrSize;
    int numbers[arrSize];
    for (int index = 0; index < arrSize; index++)
    {
        cout << "Enter numbers: ";
        cin >> numbers[index];
    }
    for (int index = 0; index < arrSize; index++)
    {
        cout << numbers[index] << endl;
    }
}