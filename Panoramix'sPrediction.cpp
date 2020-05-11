#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n, m;
	int prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
	cin >> n >> m;
	for(int i=0; i<sizeof(prime)/sizeof(int); i++)
	{
		if(prime[i] == n && prime[i+1] == m)
		{
			cout << "YES";
			return 0;
		}	
	}
	cout << "NO";
	return 0;

}
