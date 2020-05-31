#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    long long int t, sx, sy, ex, ey, time = 0;;
    cin >> t >> sx >> sy >> ex >> ey;
    string str;
    cin >> str;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(sx == ex && sy == ey)
        {
            break;
        }
        if(str[i] == 'N' && ey > sy)
        {
            sy++;
        }
        if(str[i] == 'S' && ey < sy)
        {
            sy--;
        }
        if(str[i] == 'E' && ex > sx)
        {
            sx++;
        }
        if(str[i] == 'W' && ex < sx)
        {   
            sx--;
        }
        time++;
    }
    if(sx == ex && sy == ey)
    {
        cout << time;
    }
    else
    {
        cout << -1;
    }
    
    return 0;
}
