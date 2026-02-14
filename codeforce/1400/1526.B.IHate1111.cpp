// link : https://codeforces.com/problemset/problem/1526/B
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

#define int ll

map<int, bool> mp;

vector<int> v11 = {
    11,
    111,
    1111,
    11111,
    111111,
    1111111,
    11111111,
    111111111,
    1111111111};

bool solve(int n)
{
    if (n == 0)
        return true;

    if (mp.count(n))
        return mp[n];

    bool check = false;
    for (int i = v11.size() - 1; i >= 0; i--)
    {
        if (v11[i] > n)
            continue;
        check = check || solve(n - v11[i]);
    }

    mp[n] = check;
    return check;
}

void program()
{
    int n;
    cin >> n;

    if (solve(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int32_t main()
{
    optimize();

    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}