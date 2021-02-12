#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	// Understand the problem.
	// Devise a plan.
	// Carry out the plan.
	// Look back.
	int n;
	cin >> n;

	vector<int> a(n + 1);
	queue<int> posn[n + 1];

	for (int i = 0; i < n; i++)
		cin >> a[i], posn[a[i]].push(i);

	for (int i = 0; i <= n; i++) posn[i].push(n + 1);

	stack<int> a0, a1;
	a0.push(0), a1.push(0);


	for (int i = 0; i < n; i++) {

		if (a1.top() == a[i] && a0.top() == a[i])
			continue;

		if (a1.top() != a[i] && a0.top() != a[i]) {
			if (posn[a0.top()] > posn[a1.top()])
				a0.push(a[i]);
			else
				a1.push(a[i]);
		}

		posn[a[i]].pop();
	}

	cout << a0.size() + a1.size() - 2;
}

int32_t main()
{
	aashish_999;

	int testcases = 1;
	//cin >> testcases;
	while (testcases--)
	{
		solve();
	}
}