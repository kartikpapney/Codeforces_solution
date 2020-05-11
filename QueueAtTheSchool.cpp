#include <iostream>
using namespace std;
int main()
{
	int n, t;
	char temp;
	cin >> n >> t;
	string str;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	getline(cin, str);
	while(t--)
	{
		for(int i=0; str[i+1]!='\0'; i+=1)
		{
			if(str[i] == 'B' && str[i+1] == 'G')
			{
				swap(str[i], str[i+1]);
				i++;
			}	
		}
	}
	cout << str << endl;
 }
