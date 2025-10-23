// link : https://codeforces.com/problemset/problem/1380/A
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
    vector<pair<int, int>> premn(n + 1);
    vector<pair<int, int>> postmn(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i].first;
        v[i].second = i;

        premn[i] = v[i];
        postmn[i] = v[i];
    }

    for (int i = 2; i <= n; i++)
    {
        if (premn[i].first > premn[i - 1].first)
            premn[i] = premn[i - 1];
    }

    for (int i = n - 1; i >= 1; i--)
    {
        if (postmn[i + 1].first < postmn[i].first)
            postmn[i] = postmn[i + 1];
    }

    for (int j = 2; j < n; j++)
    {
        if (v[j].first > premn[j - 1].first && v[j].first > postmn[j + 1].first)
        {
            cout << "YES" << endl;
            cout << premn[j - 1].second << " " << v[j].second << " " << postmn[j + 1].second << endl;
            return;
        }
    }

    cout << "NO" << endl;
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