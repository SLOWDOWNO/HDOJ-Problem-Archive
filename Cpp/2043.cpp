#include<iostream>
#include<string>
using namespace std;
int main()
{
	int M;
	cin >> M;
	int len;
	int count;
	int flag1,flag2,flag3,flag4;
	char c[7] = {'~','!','@','#','%','$','^'};		
	while(M--)
	{
		string code;
		cin >> code;
		len = code.length();
		count = 0;
		flag1=0,flag2=0,flag3=0,flag4=0;
		for(int i=0; i<len; i++)
		{
			if(code[i]>='A' && code[i]<='Z')
			{
				flag1 = 1;
				continue;
			}
			if(code[i]>='a' && code[i]<='z')
			{
				flag2 = 1;
				continue;
			}
			if(code[i]>='0' && code[i]<='9')
			{
				flag3 = 1;
				continue;
			}
			for(int j=0; j<7; j++)
			{
				if(code[i] == c[j])
				{
					flag4 = 1;
					break;
				}
			}
		}
		count = flag1 + flag2 + flag3 + flag4;
		if(count>=3 && len>=8 && len<=16)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

