// link : https://codeforces.com/contest/2131/problem/C
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
    int n, k;
    cin >> n >> k;

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int si;
        cin >> si;
        si %= k;
        mp[si]++;
    }

    bool ok = true;

    for (int i = 0; i < n; i++)
    {
        int ti;
        cin >> ti;
        int t1 = ti %= k;
        int t2 = abs(k - t1);

        if (mp[t1])
            mp[t1]--;
        else if (mp[t2])
            mp[t2]--;
    }

    for (pair<int, int> cnt : mp)
    {
        if (cnt.second != 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
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