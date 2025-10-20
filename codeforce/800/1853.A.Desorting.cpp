// link : https://codeforces.com/problemset/problem/1853/A
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
    vector<int> v(n);

    for (int &vi : v)
        cin >> vi;

    bool isSort = true;

    for (int i = 1; i < n; i++)
        if (v[i - 1] > v[i])
        {
            isSort = false;
            break;
        }

    if (!isSort)
    {
        cout << 0 << endl;
        return;
    }

    int mn = v.back() - v.front();

    for (int i = 1; i < n; i++)
    {
        int g = v[i] - v[i - 1];

        mn = min(mn, g);
    }

    int ans = (mn / 2) + 1;
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