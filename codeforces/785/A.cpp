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

	map<string, int> ph;
	ph["Tetrahedron"] = 4;
	ph["Cube"] = 6;
	ph["Octahedron"] = 8;
	ph["Dodecahedron"] = 12;
	ph["Icosahedron"] = 20;
	int n;
	cin >> n;
	int sum = 0;
	while (n--) {
		string s;
		cin >> s;
		sum += ph[s];
	}

	cout << sum;
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