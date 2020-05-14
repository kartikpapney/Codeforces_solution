#include <iostream>
using namespace std;
int main()
{
    short int n, x, count=-2, max = -1, min = 10001;
    cin >> n;
    while(n--)
    {
        cin >> x;
        if(max<x)
        {
            max = x;
            count++;
        }
        if(min>x)
        {
            min = x;
            count++;
        }
    }
    cout << count;
}
