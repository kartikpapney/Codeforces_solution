#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
    int n, max_same_element=1;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int count = 1;
    if(n==1)
    {
        cout << "YES";
        return 0;
    }
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
        }
        else
        {
            if(max_same_element < count)
            {
                max_same_element = count;
                count = 1;
            }
        }
    }
    if(max_same_element < count)
    {
        max_same_element = count;
    }
    if(max_same_element <= ceil((float)n/2))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
}
