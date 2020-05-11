#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int i;
	vector<char> ans;
	string str;
	getline(cin, str);
	for(i=0; str[i] != '\0' && str[i+1]!='\0'; i++)
	{
		if(str[i] == '.')
			ans.push_back('0');
		else if(str[i] == '-' && str[i+1] == '.')
		{
			ans.push_back('1');
			i++;
		}	
		else
		{
			ans.push_back('2');
			i++;
		}	
	}
	if(str[i] == '.')
		ans.push_back('0');
	for(i=0; i<ans.size(); i++)
	{
		cout<< ans[i];
	}
	cout << endl;

}
