#include<iostream>
using namespace std;

const int len = 100;
int array[len];

int main(){
	//����n,m
	int n, m;
	while(cin >> n >> m){
	//����n����ż������
	for(int i=0; i<n; i++)
		array[i] = 2*i + 2;
	for(int i=0; i<n; i++)
		cout << array[i] << " " ;
	//�Ƿ�n��m����&&m<n
	//y ���ƽ��ֵ����,len=m/n
	//n .....,len=m/n+1 
	}
	return 0; 
}
