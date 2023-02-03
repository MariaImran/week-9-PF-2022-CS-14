#include <iostream>
using namespace std;
main()
{
    int arrSize = 0 ;
    int sum = 0;
    int average = 0;
    cout << "Enter array size: ";
    cin >> arrSize;
    int number[arrSize] = {0};
    for(int i = 0 ; i < arrSize ; i++)
    {
        cout << "Enter values: ";
        cin >> number[i];
        
    }
    for(int i = 0 ; i < arrSize ; i++)
    {
       sum = sum + number[i];
       average = sum / arrSize;
    }
    cout << "sum is : " << sum << endl;
    cout << "Average is : " << average;
    
}