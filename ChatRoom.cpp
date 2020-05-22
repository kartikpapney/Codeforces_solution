#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

int main() {

	int countl=0, j=0, pass=0;
	string str, result = "hello";
	cin >> str;
	for(int i=0; i<str.length(); i++)
	{
		if(str[i] == result[j])
		{
			pass++;
			j++;
		}
		if(pass == 5)
		{
			break;
		}
	}
	if(pass == 5)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}
