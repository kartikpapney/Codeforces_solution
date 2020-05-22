#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>
#include <string>
using namespace std;

int find_sum(int n)
{
	int sum=0;
	while(n)
	{
		sum+=(n%10);
		n/=10;
	}
	return sum;
}
int main() 
{
	string str;
	int n=0, count=0;
	cin >> str;
	if(str.length() == 1)
	{
		cout << 0;
	}
	else
	{
		for(int i=0; str[i]!='\0'; i++)
		{
			n += (str[i]-48);
		}
		while(n && n/10!=0)
		{
			n = find_sum(n);
			count++;

		}
		cout << count+1;
	}
	
	return 0;
}
