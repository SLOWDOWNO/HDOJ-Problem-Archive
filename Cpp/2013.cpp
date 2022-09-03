#include<iostream>
using namespace std;

int sumPeach(int n){
	int sum;
	if(n==1)	sum = 1;
	else	sum = 2 * (sumPeach(n-1) + 1);
	return sum;
}
int main(){
	int n;
	while(cin >> n){
		cout << sumPeach(n) << endl; 
	}
	return 0;
}
