#include <iostream>
#include <cmath>
#include <queue>
using namespace std;
int main()
{
    int number_of_childrens, candies, last_person;
    cin >> number_of_childrens >> candies;
    double line, max=0;
    for(int i=1; i<=number_of_childrens; i++)
    {
        cin >> line;
        if(ceil(line/candies) >= max)
        {
            last_person = i;
            max = ceil(line/candies);
        }
    }
    cout << last_person << endl;
    return 0;

}
