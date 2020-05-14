#include <iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cin >> n;
    int no_of_cookies[n], sumof_evens=0, sumof_odds=0;
    for(int i=0; i<n; i++)
    {
        cin >> no_of_cookies[i];
        sum+=no_of_cookies[i];
        if(no_of_cookies[i]%2 == 0)
            sumof_evens++;
        else
            sumof_odds++;
    }
    if(sum%2==0)
    {
        cout << sumof_evens;
    }
    else
    {
        if(sumof_odds%2==0)
            cout << sumof_odds -1;
        else
            cout << sumof_odds;
    }
}
