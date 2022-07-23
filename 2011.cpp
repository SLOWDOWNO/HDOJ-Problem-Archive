#include<iostream>
#include<iomanip> 
using namespace std;
double Sum(int n){
	double sum = 0.0;
	int sign = -1;
	for(int i=1; i<=n; i++){
		sign = -sign;
		sum += (sign)*(1.0 / i);
	}
	return sum;
} 
int main(){
	int m,numb;
	while(cin >> m){//测试实例的个数 
		for(int i=1; i<=m; i++){
			cin >> numb;
			double sum = Sum(numb);
			cout.setf(ios::fixed);
			cout << setprecision(2) << sum;
			cout << endl;
		}
	}
	return 0;
}
