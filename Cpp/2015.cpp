#include<iostream>
using namespace std;

const int len = 100;
int array[len];

int main(){
	//输入n,m
	int n, m;
	while(cin >> n >> m){
	//根据n生成偶数序列
	for(int i=0; i<n; i++)
		array[i] = 2*i + 2;
	for(int i=0; i<n; i++)
		cout << array[i] << " " ;
	//是否n被m整除&&m<n
	//y 输出平均值序列,len=m/n
	//n .....,len=m/n+1 
	}
	return 0; 
}
