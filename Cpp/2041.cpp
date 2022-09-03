#include<iostream>
#include<cstring>
using namespace std;
int fei[50];
int f(int n)
{
	if(n<2)
		return n;
	if(fei[n]!=-1)
    {
        return fei[n];
    }
    else
    {
        fei[n] = f(n-1) + f(n-2);
        return fei[n];
    }
}
int main()
{
	int N;
	cin >> N;
	memset(fei, -1, sizeof(fei));
	while(N--)
	{
		int M;
		cin >> M;
		cout << f(M) << endl;
	}
	return 0;
}
