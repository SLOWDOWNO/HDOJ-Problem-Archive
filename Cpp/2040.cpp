#include<iostream>
using namespace std;

int sumZys(int n)
{
	int sum = 0;
	for (int i=1; i<=n/2; i++)
	{
		if(n % i == 0)
			sum += i;
	}
	cout << sum << endl;
	return sum;
}
int main()
{
	int Mline;
	cin >> Mline;
	while(Mline--)
	{
		int A, B;
		cin >> A >> B;
		if( A == sumZys(B) )
		{
			if( B == sumZys(A) )
				cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}
