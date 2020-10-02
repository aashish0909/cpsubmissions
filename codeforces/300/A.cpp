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
    //cin>>testcases;
    while(testcases--)
    {
        ll n;
        cin >> n;
        vll pos, neg, z;
        f(n)
        {
            ll x;
            cin >> x;
            if(x > 0)
                pos.pb(x);
            else if(x < 0)
                neg.pb(x);
            else
                z.pb(x);
        }

        /*
        cout<<neg.size()<<space;
        for(auto i: neg)
        	cout<<i<<space;
        cout<<endl;
        cout<<pos.size()<<space;
        for(auto i: pos)
        	cout<<i<<space;
        cout<<endl;
        cout<<z.size()<<space;
        for(auto i: z)
        	cout<<i<<space;
        cout<<endl;
        */
        vll p0, pp, pn;
        p0 = z;
        pp = pos;
        sort(all(neg));
        if(neg.size() % 2 == 1)
        {
            pn.pb(neg[0]);
            rep(i, 1, neg.size())
            pp.pb(neg[i]);
        }
        else
        {
            pn.pb(neg[0]);
            rep(i, 1, neg.size() - 1)
            pp.pb(neg[i]);
            p0.pb(neg[neg.size() - 1]);
        }

        sort(all(pp));

        cout << pn.size() << space;
        for(auto i : pn)
            cout << i << space;
        cout << endl;
        cout << pp.size() << space;
        for(auto i : pp)
            cout << i << space;
        cout << endl;
        cout << p0.size() << space;
        for(auto i : p0)
            cout << i << space;
        cout << endl;
    }

}
