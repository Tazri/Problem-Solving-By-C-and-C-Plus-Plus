// link : https://codeforces.com/problemset/problem/546/C
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
    deque<int> d1;
    deque<int> d2;
    int n;
    cin >> n;

    int k1;
    cin >> k1;
    for (int i = 0; i < k1; i++)
    {
        int ci;
        cin >> ci;
        d1.push_back(ci);
    }

    int k2;
    cin >> k2;
    for (int i = 0; i < k2; i++)
    {
        int ci;
        cin >> ci;
        d2.push_back(ci);
    }

    deque<int> cd1 = d1;
    deque<int> cd2 = d2;
    int ans = 0;
    map<pair<int, int>, int> mp;
    while (d1.size() != 0 && d2.size() != 0)
    {
        ans++;
        int c1 = d1.front();
        d1.pop_front();
        int c2 = d2.front();
        d2.pop_front();

        if (c1 > c2)
        {
            d1.push_back(c2);
            d1.push_back(c1);
        }
        else
        {
            d2.push_back(c1);
            d2.push_back(c2);
        }
        if (mp[{c1, c2}] > n)
            break;

        mp[{c1, c2}]++;
    }

    if (d1.size() != 0 && d2.size() != 0)
    {
        cout << -1 << endl;
        return;
    }

    cout << ans << " ";
    if (d1.size())
        cout << 1 << endl;
    else
        cout << 2 << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}