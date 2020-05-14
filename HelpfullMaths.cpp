#include <iostream>
using namespace std;
int main()
{
    int one=0, two=0, three=0, j=0;
    string s;
    cin >> s;
    for(int i=0; ;)
    {
        if(s[i] == 49)
            one++;
        else if(s[i] == 50)
            two++;
        else
            three++;
        i++;
        if(s[i] == '\0')
            break;
        else i++;
    }
    for(int i=0; i<one; i++)
    {
        s[j] = '1';
        j+=2;
    }
    for(int i=0; i<two; i++)
    {
        s[j] = '2';
        j+=2;
    }
    for(int i=0; i<three; i++)
    {
        s[j] = '3';
        j+=2;
    }

    cout << s;

}
