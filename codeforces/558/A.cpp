
/*

▀▀█▀▀ ▒█▀▀▀ ░█▀▀█ ▒█▀▄▀█ 　 ▒█▀▀▀█ ░█▀▀█ ▒█▄░▒█ ▀▀█▀▀ ▒█▀▀▀█ ▒█▀▀▀█ ▀█▀
░▒█░░ ▒█▀▀▀ ▒█▄▄█ ▒█▒█▒█ 　 ░▀▀▀▄▄ ▒█▄▄█ ▒█▒█▒█ ░▒█░░ ▒█░░▒█ ░▀▀▀▄▄ ▒█░
░▒█░░ ▒█▄▄▄ ▒█░▒█ ▒█░░▒█ 　 ▒█▄▄▄█ ▒█░▒█ ▒█░░▀█ ░▒█░░ ▒█▄▄▄█ ▒█▄▄▄█ ▄█▄

*/
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
#define ff          first
#define ss          second
#define all(v)      v.begin(),v.end()
#define f(n)        for(ll i=0;i<n;i++)
#define rep(i,a,n)  for(ll i=a;i<n;i++)
#define repe(i,a,n) for(ll i=a;i<=n;i++)
#define repr(i,a,n) for(ll i=a;i>=n;i--)
#define ain(arr,n)  for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1].ff<<space

ll testcases;

bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (abs(a.ff) < abs(b.ff));
}

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
        vector<pll> inp, pos, neg;
        ll pcnt = 0, ncnt = 0;
        f(n)
        {
            ll x, y;
            cin >> x >> y;
            if(x < 0)
                neg.pb({x, y});
            else
                pos.pb({x, y});
        }

        sort(all(neg),sortbysec);
        sort(all(pos),sortbysec);
        bool f = (neg.size() > pos.size()) ? 0 : 1;
        bool br = true;
        ll seekp = 0;
        ll seekn = 0;
        ll sum = 0;
        if(neg.size() == 0 || pos.size() == 0)
        {
            if(neg.size() == 0)
                sum += pos[seekp].ss;
            else
                sum += neg[seekn].ss;
        }
        else
        {
            while(br)
            {
                if(f)
                {
                    if(seekp < pos.size())
                    {
                        sum += pos[seekp].ss;
                        seekp++;
                        f = !f;
                    }
                    else
                        br = false;
                }
                else
                {
                    if(seekn < neg.size())
                    {
                        sum += neg[seekn].ss;
                        seekn++;
                        f = !f;
                    }
                    else
                        br = false;
                }


            }

        }
        cout << sum << endl;
    }
}

