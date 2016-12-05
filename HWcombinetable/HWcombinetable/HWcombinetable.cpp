#include <iostream>
#define N 65535
using namespace std;

int main()
{
	int num;
	int hash[N] = {0};
	while(cin >> num)
	{
		int n = num;
		while(n)
		{	
			int key, value;
			cin >> key >> value;
			hash[key] += value;
			--n;
		}
		for(int i = 0, j = 0; i < N && j <= num; ++i)
		{
			if(hash[i])
			{
				++j;
				cout<< i << ' ' << hash[i] << endl;
				hash[i] = 0;
			}					
		}
	}
	return 0;
}