#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int ipt;
	while(cin >> ipt)
	{
		vector<string> opt;
		while(ipt)
		{
			string str;
			cin >> str;
			opt.push_back(str);
			--ipt;
		}
		sort(opt.begin(), opt.end());
		for(auto i = opt.begin(); i != opt.end(); ++i)
		{
			cout << *i << endl;
		}
	}
	return 0;
}