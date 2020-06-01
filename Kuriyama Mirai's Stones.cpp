#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;
 
int main()
{
    int n, type, l, r, times;
    unsigned long long int sum;
    cin >> n;
    unsigned long long int unsorted[n], sorted[n];
    for(int i=0; i<n; i++)
    {
        cin >> unsorted[i];
        sorted[i] = unsorted[i];
    }
    sort(sorted, sorted+n);
    for(int i=0; i<n-1; i++)
    {
        sorted[i+1]+= sorted[i];
        unsorted[i+1]+=unsorted[i];
    }
    cin >> times;
    while(times--)
    {
        sum = 0;
        cin >> type >> l >> r;
        if(type == 1)
        {  
            if(l == 1)
            {
                sum = unsorted[r-1];
            }
            else
            {
                sum = unsorted[r-1] - unsorted[l-2];
            }
            
        }
        else
        {
            if(l == 1)
            {
                sum = sorted[r-1];
            }
            else
            {
                sum = sorted[r-1] - sorted[l-2];
            }
            
        }
        cout << sum << endl;
        
    }
    return 0;
}
