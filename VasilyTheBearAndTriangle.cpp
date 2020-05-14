#include <iostream>
using namespace std;
int main()
{
    long int x1, y1, x, y;
    cin >> x1 >> y1;
    if((float)x1/y1 > 0)
    {
        x = x1 + y1;
        y = x1 + y1;
    }
    else
    {
        x = x1 - y1;
        y = y1 - x1;
    }
    
    if(x > 0)
    {
        cout << '0' << " " << y << " " << x << " " << '0' << endl;
    }
    else
    {
        cout << x << " " <<  '0' << " " << '0' << " " << y << endl;
    }
    
}
