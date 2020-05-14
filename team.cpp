#include <iostream>
using namespace std;
int main()
{
    int n, isSure,  totalAnswer=0;
    cin >> n;
    while(n--)
    {
        int willtheyanswer = 0;
        for(int i=0; i<3; i++)
        {
            cin >> isSure;
            willtheyanswer+=isSure;
        }
        if(willtheyanswer>1)
            totalAnswer++;
    }
    cout << totalAnswer;
}
