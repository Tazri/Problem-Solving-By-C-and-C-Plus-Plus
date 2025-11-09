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

int n, x;
vector<int> cost;
vector<int> page;
set<int> black;

int solve(int x)
{
    if (x <= 0)
        return 0;

    int ans = 0;
    int ci = 0;
    int pi = 0;
    for (int i = 0; i < n; i++)
    {
        if (cost[i] > x)
            continue;

        if (black.count(i))
            continue;

        black.insert(i);
        int res = page[i] + solve(x - cost[i]);
        black.erase(i);
        ans = max(ans, res);
    }

    return ans;
}

void program()
{
    cin >> n >> x;

    cost = vector<int>(n);
    page = vector<int>(n);

    for (int &ci : cost)
        cin >> ci;

    for (int &pi : page)
        cin >> pi;

    int ans = solve(x);

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}