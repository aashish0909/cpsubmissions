#include <bits/stdc++.h>
using namespace std;

#define f(a,n) for(ll i=a;i<n;i++)
#define fe(a,n) for(ll i=a;i<=n;i++)
#define ain(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]
#define ll long long int
#define endl "\n"
#define space " "
#define TLE_na_ho ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE 400
#define pb push_back

int main()
{
    TLE_na_ho;
    ll n;
    cin >> n;
    ll a[n];
    ll count[3] = {0};
    vector<ll> vb1, vb2, vb3;
    f(0, n)
    {
        cin >> a[i];
        if(a[i] == 1)
        {
            count[0]++;
            vb1.pb(i);
        }
        else if(a[i] == 2)
        {
            count[1]++;
            vb2.pb(i);
        }
        else
        {
            count[2]++;
            vb3.pb(i);
        }
    }

    ll ans = *min_element(count, count + 3);

    /*f(0,vb1.size())
    cout<<vb1[i]<<space;
    cout<<endl;

    f(0,vb2.size())
    cout<<vb2[i]<<space;
    cout<<endl;

    f(0,vb3.size())
    cout<<vb3[i]<<space;
    cout<<endl;
    cout<<ans<<endl;
    */
    if(vb1.size() == 0 || vb2.size() == 0  || vb3.size() == 0)
        cout << "0" << endl;
    else
    {
        cout << ans << endl;
        f(0, ans)
        {
            cout << vb1[i] + 1 << space << vb2[i] + 1 << space << vb3[i] + 1 << endl;
        }
    }

}