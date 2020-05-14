#include <iostream>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np, drinks, lemon, salt;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    if(n>0 && n<1001 && k>0 && k<1001 && l>0 && l<1001 && c>0 && c<1001 && d>0 && d<1001 && p>0 && p<1001 && nl>0 && nl<1001 && np>0 && np<1001)
    {
        drinks = (k*l)/nl;
        lemon = c*d;
        salt = p/np;
        cout << min(drinks, min(lemon, salt))/n;
    }
    else
        cout << 0;
    return 0;
}
