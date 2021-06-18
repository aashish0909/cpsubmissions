#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;

	string s1 = "";
	string ans;
	for (int i = 0; i < k; i++)
		s1 += s[i % s.size()];
	ans = s1;
	for (int i = 0; i < n; i++) {
		string temp = s.substr(0, i + 1);
		s1 = "";
		for (int i = 0; i < k; i++)
			s1 += temp[i % temp.size()];
		temp = s1;
		if (temp < ans)
			ans = temp;
	}

	cout << ans << endl;

}

int32_t main()
{
	aashish_999;

	int testcases = 1;
	// cin >> testcases;
	while (testcases--)
	{
		solve();
	}
}