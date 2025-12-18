// link : https://codeforces.com/problemset/problem/2050/C
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

vector<int> v;
int n;

vector<vector<bool>> dp;
vector<vector<bool>> has;

bool solve(int i, int sum)
{
    if (i >= n)
    {
        if (sum % 9 == 0)
        {
            return true;
        }
        return false;
    }

    if (has[i][sum] != 0)
        return dp[i][sum];

    int res = solve(i + 1, (sum + v[i]) % 9) || solve(i + 1, sum);

    dp[i][sum] = res;
    has[i][sum] = true;
    return res;
}

void program()
{
    string s;
    cin >> s;
    int sum = 0;
    int sz = s.size();
    v.clear();
    v.reserve(sz);

    for (char ch : s)
    {
        int d = (int)ch - (int)'0';
        sum += d;

        if (d == 2)
            v.push_back(2);
        else if (d == 3)
            v.push_back(6);
    }
    n = v.size();

    if (sum % 9 == 0)
    {
        cout << "YES" << endl;
        dp.clear();
        has.clear();
        return;
    }

    if (n == 0)
    {
        cout << "NO" << endl;
        dp.clear();
        has.clear();
        return;
    }

    sort(v.begin(), v.end());

    sum %= 9;
    dp = vector<vector<bool>>(n, vector<bool>(9 + 12));
    has = vector<vector<bool>>(n, vector<bool>((9 + 12), false));

    if (solve(0, sum))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    dp.clear();
    has.clear();
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}