#include <iostream>
using namespace std;
main()
{
    int arrSize = 0;
    cout << "Enter array size: ";
    cin >> arrSize;
    int numbers[arrSize];
    

    for(int i = 0; i < arrSize ; i++)
    {
        cout << numbers[i];
    }
    cout << "Numbers in reverse order are : ";
    for(int i = arrSize - 1; i >= 0; i--)
    {
        cout << numbers[i] << "  ";
    }
    cout << endl;
}