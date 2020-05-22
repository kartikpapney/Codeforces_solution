#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>
#include <string>
using namespace std;

int main() 
{
	int n, k;
	cin >> n >> k;
	int segments[n*k];
	for(int i=0; i<n*k; i++)
	{
		segments[i] = i+1;
	}
	int arr[k];
	for(int i=0; i<k; i++)
	{
		cin >> arr[i];
		segments[arr[i]-1]=0;
	}
	int j=0, count=0;
	for(int i=0; i<k; i++)
	{
		cout << arr[i] << " ";
		for(j; count<n-1; j++)
		{
			if(segments[j]!=0)
			{
				cout << segments[j] << " ";
				count++;
			}
		}
		count = 0;
		cout << endl;
	}

	return 0;
}
