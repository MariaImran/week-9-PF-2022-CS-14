#include <iostream>
using namespace std;
main()
{
    int arrSize;
    cout << "Enter the size: ";
    cin >> arrSize;
    int numbers[arrSize];


    for(int i = 0; i < arrSize; i++)
    {
        cin >> numbers[i];
    }


    cout << numbers[2] << endl;
    cout << numbers[4] << endl;
}