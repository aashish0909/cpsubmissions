#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly
	int a, b, c;
	cin >> a >> b >> c;

	int num1 = 1;
	while (num1 < (int)pow(10, a - 1)) num1 *= 2;
	int num2 = num1;
	while (num2 < (int)pow(10, b - 1)) num2 *= 2;
	if (num2 < num1) swap(num1, num2);
	while (__gcd(num1, num2) > (int)pow(10, c))
		num2 = num2 / 2;
	while (num2 < (int)pow(10, b - 1)) num2 *= 3;
	if (a > b)
		cout << max(num1, num2) << " " << min(num1, num2) << endl;
	else cout << min(num1, num2) << " " << max(num1, num2) << endl;
}

int32_t main()
{
	aashish_999;

	int testcases = 1;
	cin >> testcases;
	while (testcases--)
	{
		solve();
	}
}