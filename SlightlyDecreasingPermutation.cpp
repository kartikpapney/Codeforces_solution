#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;
 
int main() {
	
	int n, k;
	cin >> n >> k;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		arr[i] = i+1;
	}
	for(int i=0; i<k; i++)
	{
		cout << arr[n-i-1] << " ";
	}
	for(int i=0; i<n-k; i++)
	{
		cout << arr[i] << " ";
	}
 
	return 0;
}
