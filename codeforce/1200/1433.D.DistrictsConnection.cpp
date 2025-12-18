// link : https://codeforces.com/problemset/problem/1433/D
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
    int n;
    cin >> n;
    vector<pair<int, int>> v(n + 1);

    bool isAllSame = true;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i].second;
        v[i].first = i;

        if (i != 1 && v[i - 1].second != v[i].second)
        {
            isAllSame = false;
        }
    }

    if (isAllSame)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;

    vector<int> first;
    first.reserve(n);
    int j = n;
    for (int i = 2; i <= n; i++)
    {
        if (v[1].second != v[i].second)
        {
            cout << 1 << " " << i << endl;
            j = i;
            continue;
        }

        first.push_back(i);
    }

    for (int i = 0; i < first.size(); i++)
    {
        cout << j << " " << first[i] << endl;
    }
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