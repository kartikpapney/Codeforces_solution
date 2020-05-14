#include <iostream>
using namespace std;
int main()
{
    short int n, l=0, r=0, t=0;;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        bool li, ri;
        cin >> li;
        cin >> ri;
        l+=li;
        r+=ri;
    }
    if(n-l>l)
        t+=l;
    else
        t+=(n-l);
    if(n-r>r)
        t+=r;
    else
        t+=(n-r);
    cout << t;
}
