#include<iostream>
using namespace std;
int sumcow(int n)
{
	if(n>0 && n<=4)
		return n;
	else 
		return (sumcow(n-1) + sumcow(n-3));
}
int main()
{
	int n;
	while(cin >> n && n>0)
	{
		cout << sumcow(n) << endl;
	}
	return 0;
}
