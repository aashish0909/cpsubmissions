#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using vll = vector<ll>;
ll const mod = 1e9 + 7;
#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define f(n) for(ll i=0;i<n;i++)
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define repe(i,a,n) for(ll i=a;i<=n;i++)
#define repr(i,a,n) for(ll i=a;i>=n;i--)
#define ain(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<" "
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)


ll testcases;

int main()
{
    aashish_999;
    //READ THE QUESTION PROPERLY!!
    //testcases=1;
    cin >> testcases;
    while(testcases--)
    {
        ll n;
        cin >> n;
        ll a[n + 1] = {0};
        ll diff = 0;

        for(ll i = 1; i < n + 1; i++)
            cin >> a[i];

        map<ll, ll> s;
        rep(i, 1, n + 1)
        s[a[i]]++;

        for(auto i : s)
        {
            diff++;
        }

        if(diff == 1)
        {
            cout << 0 << endl;
            continue;
        }

        map<ll, ll> cnt;
        rep(i, 1, n + 1)
        {
            if(i != 1)
            {
                if(a[i] != a[i - 1])
                    cnt[a[i]]++;
            }
            else
                cnt[a[i]] = 0;
        }


        ll last = n;
        while(a[last] == a[last - 1])
            last--;
        //cout << last << "#" << endl;


        for(auto [key, val] : cnt)
        {
            if(a[last] != key)
                cnt[key]++;
        }


        ll mx = mod;
        for(auto i : cnt)
        {
            ll comp = i.second;
            mx = min(mx, comp);
        }
        //for(auto[key, val] : cnt)
        //  cout << "# " << key << " " << val << endl;
        cout << mx << endl;
    }

}