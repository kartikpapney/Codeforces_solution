#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n>21 || n<11)
    {
        cout << 0;
    }
    else if((n >=11 && n<=19) || n==21)
        cout << 4;
    else if(n==20)
        cout << 15;
    return 0;
}
