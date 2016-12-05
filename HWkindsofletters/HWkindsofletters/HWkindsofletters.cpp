#include<iostream>
#include<string>

using namespace std;

int main()
{
	int hash[128] = {0};
	string ipt;
	while(getline(cin,ipt))
	{
		int opt = 0;
		for(int i = 0; i != ipt.size(); ++i)
		{
			if(ipt[i] < 128)
				++hash[ipt[i]];
		}
		for(int i = 0, j = 0; i < 128 && j <= ipt.size(); ++i)
		{
			if(hash[i])
			{
				++opt;
				++j;
				hash[i] = 0;
			}
		}
		cout << opt << endl;
	}
	return 0;
}