#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, m, j;
    int count = 0;
    cin >> n >> m;
    for(int i=0; ; i++)
    {
        for(j=0;; j++)
        {
            if(i*i + j == n  && i+ j*j == m)
            {
                count++;
            }
            else if(i*i + j > n  || i+ j*j > m)
            {
                break;
            }
        }
        j=0;
        if(i*i + j > n  || i+ j*j > m)
        {
            break;
        }

    }
    cout << count;
}
