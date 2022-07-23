#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(void){
    double x1,y1,x2,y2,d;
    while(cin>>x1>>y1>>x2>>y2){
        d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
        cout<<setiosflags(ios::fixed)<<setprecision(2)<<d<<endl;
	}
}
