#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>
#include <string>
#include <set>
using namespace std;

int calculate(int a, int b)
{
    return max(3*a/10, a-(a/250)*b);
}

int main() 
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int misha = calculate(a, c);
    int vasya = calculate(b, d);
    if(misha > vasya)
    {
        cout << "Misha";
    }
    else if(misha < vasya)
    {
        cout << "Vasya";
    }
    else
    {
        cout << "Tie";
    }
    
	return 0;
}
