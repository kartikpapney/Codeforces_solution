#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>
#include <string>
#include <set>
using namespace std;

int main() 
{
    int n, dollar = 0, energy = 0;
    cin >> n;
    int arr[n+1];
    arr[0] = 0;
    for(int i=1; i<n+1; i++)
    {
        cin >> arr[i];
        energy += (arr[i-1] - arr[i]);
        if(energy < 0)
        {
            dollar+=(-1)*(energy);
            energy = 0;
        }
    }
    cout << dollar;
	return 0;
}
