#include<iostream>
using namespace std;
int main(){
	int m, n, num, sum1, sum2;
	while(cin >> m >> n){
		sum1 = sum2 = 0;
		if(m > n) {int o; o=m; m=n; n=o;}
		for(num=m; num<=n; num++){
			if(num % 2 == 0) sum1 += num * num;
			else sum2 += num * num * num;
		}
		cout << sum1 << " " << sum2 << endl;
	}
	return 0;
}
