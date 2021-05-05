#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

vector<int> no;

void solve()
{
	//read the question properly
	int n;
	cin >> n;
	int cnt = 0;
	for (auto i : no) {
		if (i > n)
			break;
		++cnt;
	}

	cout << cnt << endl;
}

int32_t main()
{
	aashish_999;

	int testcases = 1;
	cin >> testcases;

	for (int i = 1; i <= 9; i++) {
		int sum = i;
		no.push_back(i);
		while ((sum * 10 + i) <= 1000000000)
		{
			sum *= 10;
			sum += i;
			no.push_back(sum);
		}
	}
	sort(no.begin(), no.end());
	while (testcases--)
	{
		solve();
	}
}