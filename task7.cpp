#include <iostream>
using namespace std;
main()
{
    string word;
    char letter;
    bool found = false;
    cout << "Enter a word : ";
    cin >> word;
    int idx = 0;
    cout  <<  "Enter a single letter: ";
	cin  >>  letter;
	for(int i = 0;word[i] != '\0';i++)
	{
		if(word[i] ==  letter)
		{
			found = true;
			break;
		}
	}
	if(found == true)
	{
		cout  <<  letter  <<  " is found in "  <<  word  <<  ".";
	}
	else if(found == false)
	{
		cout  <<  letter  <<  " is not found in "  <<  word  <<  ".";
	}
    
}