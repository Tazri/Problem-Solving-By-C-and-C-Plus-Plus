// link : https://codeforces.com/problemset/problem/450/A
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

void program()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> line(n);

    for (int i = 0; i < n; i++)
    {
        cin >> line[i].first;
        line[i].second = i;
    }

    pair<int, int> ans;
    vector<pair<int, int>> rest;
    rest.reserve(n);

    while (line.size())
    {
        for (int i = 0; i < line.size(); i++)
        {
            if (line[i].first <= m)
            {
                ans = line[i];
                continue;
            }
            line[i].first -= m;
            rest.push_back(line[i]);
        }

        line = rest;
        rest.clear();
    }

    cout << ans.second + 1 << endl;
}

int main()
{
    optimize();

    program();
    return 0;
}