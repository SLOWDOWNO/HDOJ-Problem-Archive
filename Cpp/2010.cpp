#include<iostream>
using namespace std;
bool isDfds(int num){
	int a = num / 100;
	int b = num / 10 % 10;
	int c = num % 10;
	if(num == a*a*a+b*b*b+c*c*c) return true;
	else return false;
}
int main(){
	int m, n;
	while(cin >> m >> n){
		bool flag = false;
		int format = 0;
		for(int i=m; i<=n; i++){
			if(isDfds(i)){
				format++;
				flag = true;
				if(format == 1)	cout << i;
				else cout << " " << i;
			}
		}
		if(!flag)	cout << "no";
		cout << endl;
	}
	return 0;
}
