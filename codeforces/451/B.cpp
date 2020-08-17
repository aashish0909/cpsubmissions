#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using pll = pair<ll, ll>;
#define f(a,n) for(ll i=a;i<n;i++)
#define fe(a,n) for(ll i=a;i<=n;i++)
#define ain(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space
#define endl "\n"
#define space " "
#define TLE_na_ho ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE 400
#define push_back pb
#define first fi
#define second se

int main()
{
    time_t start, end;
    time(&start);
    TLE_na_ho;
    ll n;
    cin >> n;
    ll a[n];
    ain(a, n);
    ll x,y;
    x=0;y=1;
    f(1, n)
    {
        if(a[i - 1] > a[i])
        {
            x = i-1;
            while(a[i] < a[i - 1] and  i < n)
            {
                i++;

            }
            y = i;
            sort(a + x, a + y);
            break;
        }
    }
     //cout<<x<<space<<y<<endl;
     //aout(a,n);
     //cout<<endl;
    int flag = 0;
    f(1, n)
    {
        if(a[i] < a[i - 1]){
            flag = 1;
        break;
        }
    }

    if(flag == 1)
        cout << "no";
    else
        cout << "yes" << endl << x + 1 << space << y;







}
