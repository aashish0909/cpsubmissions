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
        ll n, k;
        cin >> n >> k;
        ll a[n];
        ain(a, n);
        int flag = 1, f = 0;
        f(n)
        {
            if(a[i] == k)
            {
                flag = 0;
            }
            if(a[i] != k)
            {
                f = 1;
            }
        }
        if(f == 0)
        {
            cout << "0" << endl;
            continue;
        }
        else if(flag == 0)
            cout << "1" << endl;
        else
        {
            ll sum = 0;
            rep(i, 0, n)
            {
                sum += a[i];
            }
            if(sum - (n * k) == 0)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }

}
