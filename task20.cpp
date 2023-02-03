#include <iostream>
using namespace std;
main()
{
	int index = 0;
	float seriesRes = 0;
	cout  <<  "Enter any number for indexes: ";
	cin  >>  index;
	float resistance[index];
	for(int i = 0 ; i < index ; i++)
	{
		cout  <<  "Enter resistance's value: ";
		cin  >>  resistance[i];
	}
	for(int j = 0 ; j < index ; j++)
	{
		seriesRes = seriesRes + resistance[j];
	}
	cout  <<  "Value of resistance in series is "  <<  seriesRes <<  " ohms. "  <<  endl;
}