#include <iostream>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    for(int i=0; s1[i]!='\0'; i++)
    {
        s1[i] = tolower(s1[i]);
    }
    for(int i=0; s2[i]!='\0'; i++)
    {
        s2[i] = tolower(s2[i]);
    }
    int i;
    for(i=0; s1[i]!='\0'; i++)
    {
        if(s2[i] == '\0' || (s2[i] < s1[i]))
        {
            cout << 1;
            return 0;
        }
        if(s2[i] > s1[i])
        {
            cout << -1;
            return 0;
        }    
    }
    if(s1[i] == s2[i])
        cout << 0;

}
