#include <bits/stdc++.h>
using namespace std;

using ll =                   long long int;
using pll =                  pair<ll, ll>;
#define endl                 "\n"
#define space                " "
#define TLE_na_ho            ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE             1024
#define MOD                  1000000007
#define pb                   push_back
#define fi                   first
#define se                   second
#define f(a,n)               for(ll i=a;i<n;i++)
#define fe(a,n)              for(ll i=a;i<=n;i++)
#define fr(a,n)              for(ll i=a;i>=n;i--)
#define ain(arr,n)           for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n)          for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space


int main()
{
    TLE_na_ho;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        int count[n] = {0};
        f(0, n)
        {
            cin >> a[i];
            count[a[i] - 1]++;
        }

        if(n == 1)
        {
            cout << "0" << endl;
        }

        else
        {
            sort(a, a + n);
            bool f[n];
            memset(f,false,sizeof(f));
            int same = 0, diff = 0;
            f(0, n)
            {
                if(count[i] > 0)
                {
                	if(!f[i]){
                    diff++;
                    f[i]=true;
                }
                }
                if(count[i] > 1)
                    {
                    	if(same<count[i])
                    		same=count[i];
                    }
            }
            if(same==diff)
            	same--;
            int ans=min(same,diff);
            if(ans==0)
            	ans++;
            cout<<ans<<endl;
        }
    }

}
