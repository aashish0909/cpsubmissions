#include <bits/stdc++.h>
using namespace std;

using   ll  =       long long int;
using   pll =       pair<ll, ll>;
using   vll =       vector<ll>;
#define endl        "\n"
#define space       " "
#define TLE_na_ho   ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE    1024
#define MOD         1000000007
#define pb          push_back
#define fi          first
#define se          second
#define all(v)      v.begin(),v.end()
#define f(n)        for(ll i=0;i<n;i++)
#define rep(i,a,n)  for(ll i=a;i<n;i++)
#define repe(i,a,n) for(ll i=a;i<=n;i++)
#define repr(i,a,n) for(ll i=a;i>=n;i--)
#define ain(arr,n)  for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space

ll testcases;

int main()
{
    TLE_na_ho;
    //READ THE QUESTION PROPERLY!!
    //testcases=1;
    cin >> testcases;
    while(testcases--)
    {
        ll n;
        cin >> n;
        string in;
        cin >> in;
        ll r1 = 0, r2 = 0, b1 = 0, b2 = 0;
        for(ll i=0;i<n;i+=2)
        {
        	ll tes=in[i]-'0';
        	if(tes%2==0)
        		r2++;
        	else
        		r1++;
        }
        for(ll i=1;i<n;i+=2)
        {
        	ll tes=in[i]-'0';
        	if(tes%2==0)
        		b2++;
        	else
        		b1++;
        }
        bool flag=1;
        rep(i,0,n-1)
        {
        	if(flag)
        	{
        		if(r2>0)
        			r2--;
        		else
        			r1--;
        		flag=!flag;
        	}
        	else
        	{
        		if(b1>0)
        			b1--;
        		else
        			b2--;
        		flag=!flag;
        	}
        }

        if(r1==1 || b1==1)
        	cout<<"1"<<endl;
        else
        	cout<<"2"<<endl;
    }

}
