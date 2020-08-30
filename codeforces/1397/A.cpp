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
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        map<char, int>count;
        string s;
 
        bool e[26];
        memset(e, false, sizeof(e));
        for(int i = 0; i < n; i++)
        {
            cin >> s;
            
            int l = s.length();
            for(int j = 0; j < l; j++)
            {
                e[s[j] - 'a'] = true;
                count[s[j]]++;
            }
 
        }
        int f = 0;
        for(int i = 0; i < 26; i++)
        {
            if(e[i])
            {
                if((count[i + 'a'] % n) != 0)
                {
                    f = 1;
                    break;
                }
            }
        }
        if(!f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
             
    }
 
}
