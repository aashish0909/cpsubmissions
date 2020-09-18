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
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        map<ll, ll> cnt;
        set<ll> in;
        rep(i, 0, s1.length())
        {
            cnt[s1[i] - 'A']++;
            in.insert(s1[i] - 'A');
        }
        rep(i, 0, s2.length())
        {
            cnt[s2[i] - 'A']++;
            in.insert(s2[i] - 'A');
        }

        map<ll, ll> cnt2;
        rep(i, 0, s3.length())
        {
            cnt2[s3[i] - 'A']++;
        }
        int flag = 1;
        if(s1.length() + s2.length() != s3.length())
        {
            flag = 0;
        }
        else
        {
            for(auto it : in)
            {
                if(cnt[it] != cnt2[it])
                    flag = 0;
            }
        }

        if(flag)
            cout << "YES";
        else
            cout << "NO";

    }

}
