// link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U
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

int n, w;
vector<pair<int, int>> v;

int mx = 0;
int knapsack(int i = 0, int curr = 0, int value = 0)
{
    if (i >= n)
    {
        if (curr > w)
            return 0;
        return value;
    }

    return max(knapsack(i + 1, curr, value), knapsack(i + 1, curr + v[i].first, value + v[i].second));
}

void program()
{
    cin >> n >> w;
    v = vector<pair<int, int>>(n);

    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;

    cout << knapsack() << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}