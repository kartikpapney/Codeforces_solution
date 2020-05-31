#include <iostream>
#include <string>
#include <math.h>
using namespace std;
 
int main()
{
    int n, twentyfive=0, fifty=0, hunderd=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 25)
        {
            twentyfive++;
        }
        else if(arr[i] == 50)
        {
            if(twentyfive > 0)
            {
                twentyfive--;
                fifty++;
            }
            else
            {
                cout << "NO";
                return 0;
            }
            
        }
        else
        {
            if(fifty > 0 && twentyfive > 0)
            {
                fifty--;
                twentyfive--;
                hunderd++;
            } 
            else if(twentyfive > 2)
            {
                twentyfive-=3;
                hunderd++;
            }
            else
            {
                cout << "NO";
                return 0;
            }
            
        }
        

    }
    cout << "YES";
    return 0;
}
