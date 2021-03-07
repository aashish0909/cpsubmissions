#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long s = 0, s1 = 0;
    long long n, i;
    cin >> n;
    long long a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        s = s + a[i];
    }
    s1 = (n - 1) * (a[n - 1] * a[n - 1]);
    for (i = 0; i < n - 1; i++)
    {
        s = s - a[i];
        s1 = s1 + ((n - 1) * a[i] * a[i]) - (2 * a[i] * s);
    }

    cout << s1;
}