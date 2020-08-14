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

int main()
{
    TLE_na_ho;

    ll r, c;
    cin >> r >> c;
    int f = 0;
    fe(1, r)
    {
        if(i % 2 != 0)
        {
            fe(1, c)
            cout << "#";
            cout << endl;
        }
        else
        {
            if(f == 0)
            {
                fe(1, c - 1)
                cout << ".";
                cout << "#" << endl;
                f = 1;
            }
            else
            {
                cout << "#";
                fe(2, c)
                cout << ".";
                cout << endl;
                f = 0;
            }
        }


    }
}