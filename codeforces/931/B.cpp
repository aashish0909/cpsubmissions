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
	int n, a, b;
	cin >> n >> a >> b;
	vector<int> teams(n);
	for (int i = 0; i < n; i++) teams.push_back(i + 1);
	bool f = false;
	int round = 1;
	int ans;
	while (teams.size() > 2) {
		vector<int> qualified;
		sort(teams.begin(), teams.end());
		for (int i = 0; i < teams.size() - 1; i += 2) {
			if ((teams[i] == a && teams[i + 1] == b) || (teams[i] == b && teams[i + 1] == a)) {
				f = true, ans = round;
				break;
			}
			if (f)
				break;
			if (teams[i] == a || teams[i] == b)
				qualified.push_back(teams[i]);
			else if (teams[i + 1] == a || teams[i + 1] == b)
				qualified.push_back(teams[i + 1]);
			else qualified.push_back(teams[i]);
		}

		teams = qualified;
		if (f)
			break;
		++round;
	}

	if (pow(2, ans) == n)
		f = false;
	if (f) cout << ans;
	else cout << "Final!";
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