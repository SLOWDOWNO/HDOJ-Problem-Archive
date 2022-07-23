#include<iostream>
using namespace std;
bool isTriangle(double a, double b, double c){
	bool flag;
	if((a+b>c) && (b+c>a) && (a+c)>b)	flag = true;
	else flag = false;
	return flag;
}
int main(){
	int m;
	cin >> m;
	while(m--){ 
			double a, b, c;
			cin >> a >> b >> c;
			bool flag;
			flag = isTriangle(a,b,c);
			if(flag) cout << "YES" << endl;
			else cout << "NO" << endl;
	}
	return 0;
}
