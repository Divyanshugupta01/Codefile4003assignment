#include<iostream>
#include<cmath>
using namespace std;
int main() {
    long long n,dig,x=0,count=0;
    cin>>n;
    auto m=n;
    while(m>10)
{
    dig=m%10;

    dig=min(dig,9-dig);
    x=x+pow(10,count)*dig;

    m/=10;
    count++;
}

if(m==9)
x=x+pow(10,count)*m;
else 
{
    m=min(m,9-m);
    x=x+pow(10,count)*m;
}
cout<<x;
    return 0;
}