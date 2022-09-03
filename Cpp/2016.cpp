#include<iostream>
#include<algorithm>
using namespace std;
const int len = 100;
int a[len];
int n;

int find(){
	//找到数组中最小值所在的下标 并返回 
	int min=32767;
	int p=0;
	for(int i=1; i<=n; i++){
		if(a[i] < min)
		{
			p = i;
			min = a[i];
		}
	}
	return p;
}

int main(){
	while(cin>>n){
		if(n==0)
			break;
		else{
			for(int i=1; i<=n; i++)
				cin >> a[i];
			int p = find();
			swap(a[1],a[p]);
			for(int i=1; i<=n-1; i++)
				cout << a[i] << " ";
			cout << a[n];
			cout << endl;
		}
	}
	return 0;
} 
