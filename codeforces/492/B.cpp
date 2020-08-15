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

    ll n,l;
    cin>>n>>l;
    double a[n],m;
    ain(a,n);
    sort(a,a+n);
    if(n>1)
    {   m=a[1]-a[0];
        f(2,n)
        {
        	if(a[i]-a[i-1]>m)
        		m=a[i]-a[i-1];
        }
    
       double b=(double)a[0]-0;
       double c=(double)l-a[n-1];
        cout<<fixed<<setprecision(10)<<max((double)m/2,max(b,c));
   }
       else{
       	m=(double)l;
       	double t=(double)a[0]-0;
       	double u=(double)l-a[0];
       cout<<fixed<<setprecision(10)<<max((double)m/2,max(t,u));}
       
}