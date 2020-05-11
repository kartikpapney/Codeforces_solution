#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int lower = 0, upper = 0;
	string str;
	getline(cin, str);
	for(int i=0; str[i]!='\0'; i++)
	{
		if(str[i] >64 && str[i] < 91 )
			upper++;
		else
			lower++;
	}
	if(lower >= upper)
	{
		for(int i=0; str[i]!='\0'; i++)
		{
			if(str[i] >64 && str[i] < 91)
				str[i]+=32;

		}
	}
	else
	{
		for(int i=0; str[i]!='\0'; i++)
		{
			if(str[i] > 95 && str[i] < 123)
				str[i]-=32;

		}
	}
	for(int i=0; str[i]!='\0'; i++)
	{
		cout << str[i];
	}
	cout << endl;
	
}
