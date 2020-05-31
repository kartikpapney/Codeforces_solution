#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int count1 = 0;
    string str;
    cin >> str;
    int i;
    for(i=0; i<str.length()-1; i++)
    {
        if(str[i] != '0')
        {
            cout << str[i];
        }
        if(str[i] == '0')
        {
            break;
        }
    }
    for(int j=i+1; j<str.length(); j++)
    {
        cout << str[j];
    }
    return 0;
}
