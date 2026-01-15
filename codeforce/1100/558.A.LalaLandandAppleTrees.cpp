// link : https://codeforces.com/problemset/problem/558/A
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

int takeSum(vector<pair<int, int>> neg, vector<pair<int, int>> pos, int dir)
{
    int sum = 0;
    while (true)
    {
        if (dir < 0)
        {
            if (neg.empty())
                break;
            sum += neg.back().second;
            neg.pop_back();
            dir *= -1;
            continue;
        }
        if (pos.empty())
            break;
        sum += pos.back().second;
        pos.pop_back();
        dir *= -1;
    }

    return sum;
}

void program()
{
    int n;
    cin >> n;
    vector<pair<int, int>> neg;
    vector<pair<int, int>> pos;
    neg.reserve(n);
    pos.reserve(n);

    for (int i = 0; i < n; i++)
    {
        int p, v;
        cin >> p >> v;

        if (p < 0)
            neg.push_back({p, v});
        else
            pos.push_back({p, v});
    }

    sort(pos.rbegin(), pos.rend());
    sort(neg.begin(), neg.end());

    int a1 = takeSum(neg, pos, -1);
    int a2 = takeSum(neg, pos, 1);

    int mx = max(a1, a2);
    cout << mx << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}