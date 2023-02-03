#include <iostream>
using namespace std;
main()
{
    int idx = 0;
    string word;
    char letter;
    cout << "Enter a word : ";
    cin >> word;
    for(int i = 0;word[i] != '\0';i++)
	{
		cout  <<  "word["  <<  i  <<  "]"  <<  " is the index of "  <<  word[i]   <<  endl;
	}
}