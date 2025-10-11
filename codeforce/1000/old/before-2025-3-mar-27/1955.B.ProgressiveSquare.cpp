// link : https://codeforces.com/problemset/problem/1955/B
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
    int n, c, d;
    map<int, int> mp;
    cin >> n >> c >> d;

    int mn = 0;
    cin >> mn;
    mp[mn]++;

    for (int i = 1; i < n * n; i++)
    {
        int aij;
        cin >> aij;
        mp[aij]++;
        mn = min(mn, aij);
    }

    int base = mn;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int aij = base + (d * j);

            if (mp.count(aij) && mp[aij] > 0)
            {
                mp[aij]--;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
        base += c;
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