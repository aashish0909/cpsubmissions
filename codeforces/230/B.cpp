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
#define MOD 1000000007

int main(){
  ll n;
  cin>>n;
  ll a[n];
  ain(a,n);
  f(0,n){
    if(a[i]!=1){
    ll count=0;
    if(ceil(sqrt(a[i]))==floor(sqrt(a[i])))
    {
    ll ans=sqrt(a[i]);
    for(ll j=1;j*j<=ans;j++)
    {
      if(ans%j==0)
      count++;
      
    }
    }
    
    if(count==1)
    cout<<"YES"<<endl;
    else
cout<<"NO"<<endl;}
else
cout<<"NO"<< endl;
  }
}