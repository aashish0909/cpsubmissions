#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

vector<string> maze;
bool visited[501][501];
int n, m, k, t;

void dfs(int i, int j) {
    if (visited[i][j] || t <= 0 || maze[i][j] == '#')
        return;
    visited[i][j] = 1;
    --t;
    if (i > 0)
        dfs(i - 1, j);
    if (j > 0)
        dfs(i, j - 1);
    if (i < n - 1)
        dfs(i + 1, j);
    if (j < m - 1)
        dfs(i, j + 1);
}

void solve()
{
    //read the question properly
    cin >> n >> m >> k;
    maze.resize(n);
    for (auto &i : maze)
        cin >> i;
    int posr = -1, posc = -1;
    t = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            visited[i][j] = 0;
            if (maze[i][j] == '.')
                ++t;
        }
    }
    t -= k;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (maze[i][j] == '.') {
                posc = j;
                posr = i;
                break;
            }
        }
        if (posr != -1)
            break;
    }

    dfs(posr, posc);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            if (visited[i][j])
                cout << maze[i][j];
            else if (maze[i][j] == '.') cout << 'X';
            else cout << maze[i][j];
        cout << endl;
    }
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