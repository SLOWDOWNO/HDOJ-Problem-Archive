#include<iostream>
using namespace std;
int main(){
	int cnt, input;
	while(cin >> cnt){
		if(cnt!=0){
			int sum = 0;
			while(cnt--){
				cin >> input;
				sum += input;
			}
		cout << sum << endl;
		}
		else return 0;
	}
}
