// link : https://codeforces.com/problemset/problem/1642/B
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
    int unique = 0;
    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        if (!mp.count(ai))
        {
            unique++;
            mp[ai]++;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (i <= unique)
        {
            if (i == 1)
                cout << unique;
            else
                cout << " " << unique;
        }
        else
            cout << " " << i;
    }

    cout << endl;
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