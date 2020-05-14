#include <iostream>
using namespace std;
int main()
{
    int n, max=0, min=100, maxindex=0, minindex=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if(max<x)
        {
            max = x;
            maxindex = i;
        }
        if(min>=x)
        {
            min = x;
            minindex = i;
        }
    }
    if(maxindex>minindex)
    {
        cout << (maxindex-1) + (n-minindex) - 1;
    }
    else
    {
        cout << (maxindex-1) + (n-minindex);
    }
}
