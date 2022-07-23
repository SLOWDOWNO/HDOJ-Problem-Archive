#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

bool isPrime(int temp)
{
	if(temp<2)	return false;
	for( int i=2; i<sqrt(temp); i++)
		if(temp%i==0)	return false;
	return true;
}

int main()
{
	int x,y;
	while(cin >> x >> y)
	{
		if(x==0 && y==0)	break;
		else
		{
			bool flag = true;
			if(x>y)	swap(x,y);
			for(int i=x; i<=y; i++)
			{
				int f = i*i+i+41;
				if(isPrime(f)==false)
				{
					flag = false;
					break;
				}
			}
			if(flag)	cout << "OK" << endl;
			else	cout << "Sorry" << endl; 
		}
	}
	return 0;
}
