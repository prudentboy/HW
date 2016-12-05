#include <iostream>
using namespace std;
int main()
{
	int ipt;
	while(cin >> ipt)
	{
		if(!ipt)
		{
			cout << 0 << endl;
			continue;
		}
		int opt;
		while(ipt)
		{
			opt = ipt % 10;
			cout << opt;
			ipt /= 10;
		}
		cout << endl;
	}
	return 0;
}