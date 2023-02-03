#include <iostream>
using namespace std;
main()
{
    int idx = 0;
    string word;
    char letter;
    bool isPresent = false;
    cout << "Enter a word : ";
    cin >> word;
    cout << "Enter a letter : ";
    cin >> letter;
    
    while(word[idx] != '\0')
    {
        if (word[idx] == letter )
        {
            isPresent = true;
            break;
        }
        idx++;
        
    }
    if (isPresent == true)
        {
            cout << letter <<" exist in " << word;
        }
    if (isPresent == false)
        {
            cout << letter <<" doest not exist in " << word;
        }    

}