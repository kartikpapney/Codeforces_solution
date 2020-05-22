#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int remove_zeroes(int x)
{
	int a, i=1;
	int sum = 0;
	while(x)
	{
		a = x%10;
		if(a)
		{
			sum = i*a+sum;
			i*=10;
		}
		x=x/10;

	}
	return sum;
}
int main() 
{
	int a, b;
	cin >> a >> b;
	int c = a+b;
	a = remove_zeroes(a);
	b = remove_zeroes(b);
	c = remove_zeroes(c);
	if(a+b == c)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	
	return 0;
}
