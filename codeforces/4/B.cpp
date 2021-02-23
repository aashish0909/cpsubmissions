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

	int d, sumtime;
	cin >> d >> sumtime;
	vector<int> mintime(d), maxtime(d);
	int maxstudy = 0;
	int minstudy = 0;
	for (int i = 0; i < d; i++)
		cin >> mintime[i] >> maxtime[i], minstudy += mintime[i], maxstudy += maxtime[i];
	if (maxstudy < sumtime || minstudy > sumtime) {
		cout << "NO";
		return;
	}
	cout << "YES" << endl;
	vector<int> study(d);
	int need = minstudy;
	for (int i = 0; i < d; i++) {
		study[i] = mintime[i];
	}

	for (int i = 0; i < d; i++) {
		if (need < sumtime) {
			int r = min(sumtime - need, maxtime[i] - study[i]);
			study[i] += r;
			need += r;
		}
	}

	for (auto i : study)
		cout << i << " ";

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