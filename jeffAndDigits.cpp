#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int count5=0, count0=0, n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        char x;
        cin >> x;
        if(x == '5')
            count5++;
        else
            count0++;
    }
    if(count5 >=9 && count0!=0)
    {
        int times = (count5/9)*9;
        while(times--)
            cout << '5';
        while(count0--)
            cout << '0';
    }
    else if(count0 != 0)
        cout << 0;
    else
        cout << -1;

}
    
