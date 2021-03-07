#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long s = 0, s1 = 0;
    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        s = s + a[i];
    }
    s1 = 1ll*(n - 1) * (a[n - 1] * a[n - 1]);
    for (i = 0; i < n - 1; i++)
    {
        s = s - 1ll*a[i];
        s1 = s1 + (1ll*(n - 1) * a[i] * a[i]) - (1ll*2 * a[i] * s);
    }

    cout << s1;
}