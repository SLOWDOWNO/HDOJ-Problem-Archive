#include<iostream>
using namespace std;
int main(){
	int line, cnt, input;
	while(cin >> line){
		for(int i=0; i<line; i++){
			cin >> cnt;
			int sum = 0;
			while(cnt--){
				cin >> input;
				sum += input;
			}
			cout << sum << endl;
		} 
	}
	return 0;
}
