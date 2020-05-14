#include <iostream>
using namespace std;
int main()
{
    int n, m, sum = 0, i=1, previous_sum = 0, sum2;
    cin >> n >> m;
    while(sum <= m)
    {
        sum2 = sum;
        sum = previous_sum+(i*(i+1))/2;
        if(i<n)
            i++;
        else
        {
            i = 1;
            previous_sum = sum;
        }
           
    }
    cout << m - sum2;

    return 0;
}
