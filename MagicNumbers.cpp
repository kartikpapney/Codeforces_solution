#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int flag = 0;
    string s;
    cin >> s;
    if(s[0]!='1')
    {
        cout << "NO";
        return 0;
    }

    else
    {
        for(int i=0; s[i]!= '\0'; i++)
        {
            if(s[i]!='4' && s[i]!='1')
            {
                cout << "NO";
                return 0;
            }
            else if(s[i] == '4')
            {
                flag++;
                if(flag == 3)
                {
                    cout << "NO";
                    return 0;
                }
            }
            else
            {
                flag = 0;
            }
        }
    }
    cout << "YES";
    return 0;
    

}
    
