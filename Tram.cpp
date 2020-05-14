#include <iostream>
using namespace std;
int main()
{
    int n, ai, bi, max=0, current_passengers=0;
    cin >> n;
    while(n--)
    {
        cin >> ai;
        cin >> bi;
        current_passengers += bi-ai;
        if(max < current_passengers)
        {
            max = current_passengers;
        }
        
    }
    cout << max;

}
