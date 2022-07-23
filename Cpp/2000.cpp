#include<iostream>
using namespace std;
void swap(char &a, char &b){
	char o;
	o = a; a = b; b = o;
}
int main(){
	char a, b, c;
	while(cin >> a >> b>> c){
		if(a > b) swap(a,b);
		if(a > c) swap(a,c);
		if(b > c) swap(b,c);
		cout << a << " " << b << " " << c << endl; 
	}
	return 0;
}
