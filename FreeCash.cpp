#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;
 
int main()
{
    int n, x, y, max = 0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> x;
        cin >> y;
        arr[i] = x*60 + y;
    }
    sort(arr, arr+n);
    int count = 0;
    for(int i=0; i<n-1; i++)
    {
        if(arr[i] == arr[i+1])
        {
            count++;
        }
        else
        {
            if(count > max)
            {
                max = count;
            }
            count = 0;
        }
        
    }
    if(count > max)
    {
        max = count;
    }
    cout << max+1;

    return 0;
}
