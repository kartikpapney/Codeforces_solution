#include <iostream>
using namespace std;
int main()
{
    int r, c, numberofrows=0, numberofcolumns = 0;
    cin >> r >> c;
    char evil[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin >> evil[i][j];

        }
    }
    for(int i=0; i<r; i++)
    {
        int count_r=0;
        for(int j=0; j<c; j++)
        {
            if(evil[i][j] == '.')
                count_r++;
        }
        if(count_r == c)
            numberofrows += 1;
    }
    for(int i=0; i<c; i++)
    {
        int count_c=0;
        for(int j=0; j<r; j++)
        {
            if(evil[j][i] == '.')
                count_c++;
        }
        if(count_c == r)
            numberofcolumns += 1;
    }

    cout << numberofcolumns*r + numberofrows*c - numberofrows*numberofcolumns;

    return 0;
}
