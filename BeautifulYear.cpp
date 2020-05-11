#include <iostream>
#include <vector>
using namespace std;
int main()
{
	short int n;
	cin >> n;
	while(true)
	{
		n++;
		short int a, b, c, d;
		a = n%10;
		b = (n/10)%10;
		c = (n/100)%10;
		d = n/1000;

		if(a!=b && a!=c && a !=d && b != c && b != d && c != d)
			break;
	}
	cout << n << endl;
}
