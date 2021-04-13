#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

map<char, int> score;

int calcscore(string s) {
	if (score[s[0]] == 0)
		return -1;
	int sum = 0;
	for (auto i : s)
		sum = sum * 10 + score[i];
	return sum;
}

void solve()
{
	//read the question properly
	string a, b, c;
	cin >> a >> b >> c;
	// cout << a << b << c << endl;
	set<char> dis;
	for (auto i : a)
		dis.insert(i);
	for (auto i : b)
		dis.insert(i);
	for (auto i : c)
		dis.insert(i);

	if (dis.size() > 10) {
		cout << "UNSOLVABLE";
		return;
	}
	vector<int> digits;
	for (auto i = 0; i <= 9; ++i)
		digits.push_back(i);

	do {
		int it = 0;
		score.clear();
		for (auto i : dis) {
			if (it > 9)
				break;
			score[i] = digits[it], ++it;
		}
		int s1 = calcscore(a);
		int s2 = calcscore(b);
		int s3 = calcscore(c);
		if (s1 == -1 || s2 == -1 || s3 == -1)
			continue;
		if ( s1 && s2 && s3 && s1 + s2 == s3) {
			cout << s1 << endl << s2 << endl << s3;
			return;
		}
	} while (next_permutation(digits.begin(), digits.end()));

	cout << "UNSOLVABLE";
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