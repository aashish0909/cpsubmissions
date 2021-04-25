#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly

	double d;
	// double sum;
	cin >> d;
	double a1 = (double)(d + (double)sqrt((d * d) - (4 * d))) / 2.0;
	double a2 = (double)(d - (double)sqrt((d * d) - (4 * d))) / 2.0;
	double b1 = (double)(d / a1);
	double b2 = (double)(d / a2);
	cout << fixed << setprecision(9);
	// cout << a1 << " " << b1 << " " << a2 << " " << b2 << endl;
	if (d == 0) {
		a1 = 0, b1 = 0;
		cout << 'Y' << endl << a1 << " " << b1 << endl;
		return;
	}
	if ((a1 + b1 - (a1 * b1)) <= 0.000001)
		cout << 'Y' << endl << a1 << " " << b1 << endl;
	else if ((a2 + b2 - (a2 * b2)) <= 0.000001)
		cout << 'Y' << endl << a2 << " " << b2 << endl;
	else cout << 'N' << endl;
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