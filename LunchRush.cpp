#include <iostream>
using namespace std;
int main()
{
    long int n, k, joy, max = LONG_MIN;
    cin >> n >> k;
    while(n--)
    {
        long int fi, ti;
        cin >> fi >> ti;
        if(ti>k)
            joy = fi - (ti - k);
        else
            joy = fi;
        if (max < joy)
            max = joy;
    }
    cout << max;
}
