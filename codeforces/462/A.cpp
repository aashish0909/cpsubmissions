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
    ll n;
    cin >> n;
    char a[105][105];
    fe(1, n)
    {
        for(ll j = 1; j <= n; j++)
            cin >> a[i][j];
    }
 
    int f=1;
    fe(1, n)
    {
        for(ll j = 1; j <=n; j++)
        {
          ll count = 0;
            if(a[i][j - 1] == 'o'&&j>1)
                count++;
            if(a[i][j + 1] == 'o'&&j<n)
                count++;
            if(a[i - 1][j] == 'o'&&i>1)
                count++;
            if(a[i + 1][j] == 'o'&&i<n)
                count++;
                if(count==1||count==3)
                {f=0;break;}
        }
        if(f==0)
        break;
 
    }
 
    if(f)
        cout << "YES";
    else
        cout << "NO";
}