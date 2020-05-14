#include <iostream>
using namespace std;
int main()
{
    int count[26] = {0}, count_number=0;
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    for(int i=0; s1[i]!='\0'; i++)
    {
        count[s1[i]-65]++;
    }
    for(int i=0; s2[i]!='\0'; i++)
    {
        count[s2[i]-65]++;
    }
    for(int i=0; s3[i]!='\0'; i++)
    {
        count[s3[i]-65]--;
    }
    for(int i=0; i<26; i++)
    {
        if(count[i] != 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
