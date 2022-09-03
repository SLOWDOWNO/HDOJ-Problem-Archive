#include<iostream>
#include<string>
using namespace std;

int main()
{
	string list;
	int n, count=0;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> list;
		for(int j=0; j<list.size(); j++)
		{
			if(list[j] >= '0' && list[j] <= '9')
				count++;
		}
		cout << count << endl;
		count = 0;
	}
	return 0;
}
