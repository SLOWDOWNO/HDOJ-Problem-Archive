#include <iostream>  
using namespace std;  
int gcd(int a,int b)  
{  
    return (b?gcd(b,a%b):a);  
}  
int main()  
{  
    int m,n;  
    while(cin>>m>>n&&m+n!=-2)  
    {  
        if(gcd(m,n)==1)  cout<<"YES\n";  
        else cout<<"POOR Haha\n";  
    }  
    return 0;  
}  
