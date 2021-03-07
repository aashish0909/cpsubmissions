#include<bits/stdc++.h>
using namespace std;

int main() 
{
long long s=0,s1=0;
int n,i;cin>>n;
vector<int>a(n);
   
   for(i=0;i<n;i++)
   {cin>>a[i];
   s=s+1ll*a[i];}
   for(i=0;i<n;i++)
   {
       s1=s1+1ll*(n-1)*a[i]*a[i]-1ll*2*a[i]*(s-a[i]);
       s=s-a[i];
   }
   
   cout<<s1;
}