#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using pll = pair<ll, ll>;
#define endl "\n"
#define space " "
#define TLE_na_ho ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE 1024
#define MOD 1000000007
#define pb push_back
#define fi first
#define se second
#define f(a,n) for(ll i=a;i<n;i++)
#define fe(a,n) for(ll i=a;i<=n;i++)
#define ain(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space


int main()
{
    TLE_na_ho;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin >> n>>k;
        if((n-k+1)%2==1 && (n-(k-1))>0)
        {
        	cout<<"YES"<<endl;
        	fe(1,k-1)
        	cout<<"1"<<space;
        	cout<<n-k+1<<endl;
        }
        else if((n-2*(k-1))%2==0 && (n-2*(k-1))>0)
        {
        	cout<<"YES"<<endl;
        	fe(1,k-1)
        	cout<<"2"<<space;
        	cout<<n-2*(k-1)<<endl;
        }
        else
        	cout<<"NO"<<endl;
    }

}
