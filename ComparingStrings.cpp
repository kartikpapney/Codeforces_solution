 #include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
 
int main()
{
    int count = 0, index1 = -1, index2 = -1, index3 = -1, index4 = -1;
    string str1, str2;
    cin >> str1 >> str2;
    if(str1.length() != str2.length())
    {
        cout << "NO";
    }
    else
    {
        for(int i=0; i<str1.length(); i++)
        {
            if(str1[i] != str2[i])
            {
                if(index1 == -1 && index2 == -1)
                {
                    index1 = str1[i];
                    index2 = str2[i];
                }
                else if(index3 == -1 && index4 == -1)
                {
                    index3 = str1[i];
                    index4 = str2[i];
                }
                count++;
            }
            if(count > 2)
            {
                cout << "NO";
                return 0;
            }
        }
        if(index1 == index4 && index2 == index3)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    
    return 0;
}
