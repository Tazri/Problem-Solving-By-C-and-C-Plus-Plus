#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

vector<int> di = {-1, -1, 0, +1, +1, +1, 0, -1};
vector<int> dj = {0, +1, +1, +1, 0, -1, -1, -1};

int n, m;

vector<vector<int>> grid;

void rotate(int pi, int pj)
{
    vector<int> nums;
    nums.reserve(8);
    for (int d = 0; d < 8; d++)
    {
        int ti = pi + di[d];
        int tj = pj + dj[d];

        nums.push_back(grid[ti][tj]);
    }

    vector<int> v;
    v.reserve(8);
    v.push_back(nums.back());
    nums.pop_back();

    for (int i = 0; i < nums.size(); i++)
    {
        v.push_back(nums[i]);
    }

    for (int d = 0; d < 8; d++)
    {
        int ti = pi + di[d];
        int tj = pj + dj[d];

        grid[ti][tj] = v[d];
    }
}

void print()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << grid[i][j] << " \n"[j == m - 1];
    }
}

void program()
{
    cin >> n >> m;
    grid = vector<vector<int>>(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int pi, pj;
        cin >> pi >> pj;
        rotate(pi, pj);

        print();
    }
}

int32_t main()
{
    optimize();
    program();
    return 0;
}