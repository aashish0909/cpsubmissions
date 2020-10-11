

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
        ll th, fi, se;
        bool found = 0;
        repe(i, 0, (n + 3) / 3)
        {
            repe(j, 0, (n + 5) / 5)
            {
                repe(k, 0, (n + 7) / 7)
                {
                    if(((3 * i) + (5 * j) + (7 * k)) == n)
                    {
                        found = 1;
                        th = i;
                        fi = j;
                        se = k;
                        break;

                    }
                }
                if(found)
                    break;
            }
            if(found)
                break;
        }
        if(found)
            cout << th << space << fi << space << se << endl;
        else
            cout << -1 << endl;
    }

}
