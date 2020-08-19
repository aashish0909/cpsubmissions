#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using pll = pair<ll, ll>;
#define endl "\n"
#define space " "
#define TLE_na_ho ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE 400
#define pb push_back
#define fi first
#define se second
#define f(a,n) for(ll i=a;i<n;i++)
#define fe(a,n) for(ll i=a;i>=n;i--)
#define ain(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space


int main()
{
    TLE_na_ho;
    string s;
    cin >> s;
    ll l = s.length(), max = 0, pos = -1;
    f(0,l)
    {
        if((s[i] - '0') % 2 == 0)
        {
            pos=i;
            if(s[l-1]>s[i])
            {
                swap(s[l-1],s[i]);
                cout<<s;
                return 0;
            }
        }
    }

    if(pos == -1)
        cout << "-1";
    else
    {
        swap(s[pos],s[l-1]);
        cout<<s;
        return 0;
    }

}
