// linK: https://codeforces.com/problemset/problem/1890/A
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
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        mp[ai]++;
    }

    if (mp.size() > 2)
    {
        cout << "NO" << endl;
        return;
    }

    if (mp.size() == 1)
    {
        cout << "YES" << endl;
        return;
    }

    int a = 0;
    int b = 0;

    for (auto [k, cnt] : mp)
        if (a == 0)
            a = cnt;
        else
            b = cnt;

    int d = abs(a - b);

    if (d > 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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