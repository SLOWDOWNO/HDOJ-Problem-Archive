#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

const int len = 101;
int scoreList[len];

int main(){
	int n;
	while(cin >> n){
		for(int i=0; i<n; i++)
			cin >> scoreList[i];
			
		sort(scoreList,scoreList+n);
		
		double endScore = 0.0;
		for(int i=1; i<n-1; i++)
			endScore+=scoreList[i];
		endScore /= n-2;
		printf("%.2f",endScore);
		printf("\n");
	}
	return 0;
}
