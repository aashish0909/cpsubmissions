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
    testcases = 1;
    //    cin >> testcases;
    while(testcases--)
    {
        ll n;
        cin >> n;
        ll ice[n];
        ain(ice, n);
        sort(ice, ice + n);
        vll order;
        ll half = n / 2;
        ll ins = half;
        ll j = 0;
        bool flag = 1;
        while(n--)
        {
            if(flag)
            {
                order.pb(ice[ins]);
                ins++;
                flag = !flag;
            }
            else
            {
                order.pb(ice[j]);
                j++;
                flag = !flag;
            }
        }
        ll ans=0;
        for(ll i=1;i<order.size()-1;i++)
        {
        	if(order[i]<order[i-1] and order[i]<order[i+1])
        		ans++;
        }
        cout<<ans<<endl;
        for(auto itr : order)
            cout << itr << space;


    }

}
