#include <bits/stdc++.h>
using namespace std;

#define endl        "\n"
#define TLE_na_ho   ios_base::sync_with_stdio(false);cin.tie(NULL)

long long testcases;

int solve(long long n)
{
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            cout << n / i << " " << n - n / i << endl;
            return 0;
        }
    }

    cout << 1 << " " << n - 1 << endl;
    return 1;
}

int main()
{
    TLE_na_ho;
    //READ THE QUESTION PROPERLY!!
    //testcases=1;
    cin >> testcases;
    while(testcases--)
    {
        long long n;
        cin >> n;

        solve(n);
    }

}