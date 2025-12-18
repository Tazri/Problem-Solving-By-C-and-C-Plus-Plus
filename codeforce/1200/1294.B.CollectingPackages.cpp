// link : https://codeforces.com/problemset/problem/1294/B
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
    v[0].first = 0;
    v[0].second = 0;
    for (int i = 1; i <= n; i++)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b)
         {
        if(a.second != b.second)return a.second < b.second;
            return a.first < b.first; });

    // for (pair<int, int> vi : v)
    // {
    //     cout << vi.first << " " << vi.second << endl;
    // }

    for (int i = 1; i <= n; i++)
    {
        int x = v[i].first;
        int y = v[i].second;
        int px = v[i - 1].first;
        int py = v[i - 1].second;

        if (py > y)
        {
            cout << "NO" << endl;
            return;
        }

        if (px > x)
        {
            cout << "NO" << endl;
            return;
        }
    }

    string ans = "";

    cout << "YES" << endl;
    for (int i = 1; i <= n; i++)
    {
        int x = v[i].first;
        int y = v[i].second;
        int px = v[i - 1].first;
        int py = v[i - 1].second;

        int xd = abs(x - px);
        int yd = abs(y - py);

        for (int j = 0; j < xd; j++)
            ans.push_back('R');
        for (int j = 0; j < yd; j++)
            ans.push_back('U');
    }

    cout << ans << endl;
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