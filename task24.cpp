#include <iostream>
using namespace std;
main()
{
	string statement;
	cout  <<  "Enter any statement: ";
	cin >> statement;
	for(int i = 0 ; statement[i] != '\0' ; i++)
	{
		if(statement[i]  ==  'a'  ||  statement[i]  ==  'e'  ||  statement[i]  ==  'i'  ||  statement[i]  ==  'o'  ||  statement[i]  ==  'u')
		{
			continue;
		}
		cout  <<  statement[i];
	}
}