#include <bits/stdc++.h> 
using namespace std; 
 
#define f(a,n) for(ll i=a;i<n;i++)
#define fe(a,n) for(ll i=a;i<=n;i++)
#define ain(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]
#define ll long long int
#define endl "\n"
#define space " "
#define TLE_na_ho ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE 400
 
int main() 
{
           TLE_na_ho;
           ll n;
           cin>>n;
           
           ll a[2];
           ll x=n;
           if(n>=0){
               cout<<n;
           }
           else
           {f(0,2){
               a[i]=x%10;
               x/=10;

           }
           if(a[0]<=a[1])
           n=n/10;

           else if(a[1]<a[0]){
               n=n/100;
               n=n*10;
               n=n+a[0];
           }

           cout<<n;}
}