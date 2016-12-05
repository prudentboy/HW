#include <iostream>
using namespace std;
//bool IsPrime(unsigned long a)
//{
//	for(int i = 2; i <= sqrt((double)a); ++i)
//		if(a % i == 0)
//			return false;
//	return true;
//}
void Printfactor(unsigned long a)
{
	for(unsigned long i = 2; ; ++i)
	{
		while(/*IsPrime(i) &&*/ a % i == 0)
		{
			cout << i << ' ';
			a /= i;
		}
		if(a == 1)
			break;
	}
	//cout << endl;
	return;
}
int main()
{
	unsigned long ipt;
	while(cin >> ipt)
	{
		Printfactor(ipt);
	}
	return 0;
}