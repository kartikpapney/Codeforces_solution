#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

void recursive_function(int arr[], int x)
{
    if(x==0)
    {
        return;
    }
    else
    {
        
        swap(arr[x], arr[x-1]);
        recursive_function(arr, x-1);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=1; i<=n; i++)
    {
        arr[i-1] = i;
    }
    recursive_function(arr , n-1);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}
