#include <iostream>
#include <cmath>
using namespace std;
int min(int a, int b)
{
    if(a<b)
        return a;
    return b;
}
int main()
{
    int n, minimum = INT_MAX, index1, index2;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(i == n-1)
        {
            if(minimum > abs(arr[i] - arr[0]))
            {
                index1 = i+1;
                index2 = 1;
            }
                
        }
        else
        {        
            if(minimum > abs(arr[i] - arr[i+1]))
            {
                index1 = i+1;
                index2 = i+2;
                minimum = abs(arr[i] - arr[i+1]);
            } 
        }
    }

    cout << index1 << " " << index2;
    return 0;
}
