#include<iostream>
using namespace std;
int countdigit(int n)
{
int res=0;
while(n>0)
{
n=n/10;
res++;
}
return res;
}
int main()
{
int n;
cin>>n;
cout<<countdigit(n);
}