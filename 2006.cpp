#include<iostream>
using namespace std;
int main(){
	int cnt, nub;
	while(cin >> cnt){
		int pdt = 1;
		while(cnt--){
			cin >> nub;
			if(nub % 2 != 0) pdt *= nub;
		}
		cout << pdt << endl;
	}
}
