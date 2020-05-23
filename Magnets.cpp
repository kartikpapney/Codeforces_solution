#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>
#include <string>
#include <set>
using namespace std;

int main() 
{
    int n, groups = 0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]!=arr[i+1])
        {
            groups++;
        }
    }
    cout << groups+1 << endl;
	return 0;
}
