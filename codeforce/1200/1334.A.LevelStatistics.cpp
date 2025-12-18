// link : https://codeforces.com/problemset/problem/1334/A
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

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (v[i].first < v[i].second)
            {
                cout << "NO" << endl;
                return;
            }
            continue;
        }

        int prevPlay = v[i - 1].first;
        int prevClear = v[i - 1].second;
        int play = v[i].first;
        int clear = v[i].second;

        play -= prevPlay;
        clear -= prevClear;

        if (play < 0 || clear < 0)
        {
            cout << "NO" << endl;
            return;
        }

        if (clear > play)
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