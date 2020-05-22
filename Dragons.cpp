#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	int s, n;
	cin >> s >> n;
	multimap<int, int> value;
	for(int i=0; i<n; i++)
	{
		int x, y;
		cin >> x >> y;
		value.insert(pair<int, int>(x, y));
	}
	multimap<int, int>::iterator itr;
	for(itr = value.begin(); itr!=value.end(); itr++)
	{
		if(s > itr->first)
		{
			s+=(itr->second);
		}
		else
		{
			cout << "NO";
			return 0;
		}
		
	}
	cout << "YES";

	return 0;
}
