// link : https://codeforces.com/problemset/problem/1894/B
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
    vector<int> b(n);
    vector<int> a(n);
    vector<int> rules(101, 0);
    vector<int> has(101, 0);
    vector<int> print(101, 0);
    int mcnt = 0;
    int r = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        int ai = a[i];

        if (has[ai] == 1)
        {
            mcnt++;
            has[ai]++;
        }
        else
            has[ai]++;
    }

    if (mcnt <= 1)
    {
        cout << -1 << endl;
        return;
    }

    // now set rules
    for (int i = 0; i < n; i++)
    {
        int ai = a[i];

        if (has[ai] > 1 && rules[ai] == 0)
        {
            rules[ai] = r;
            print[ai] = r;
            r = r == 1 ? 2 : 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (rules[a[i]] <= 0)
        {
            b[i] = 1;
            continue;
        }

        b[i] = print[a[i]];

        if (rules[a[i]] == 1)
        {
            print[a[i]] = print[a[i]] == 1 ? 2 : 1;
        }
        else
        {
            print[a[i]] = print[a[i]] == 2 ? 3 : 2;
        }
    }

    cout << b[0];
    for (int i = 1; i < n; i++)
        cout << " " << b[i];
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