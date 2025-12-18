// link : https://codeforces.com/problemset/problem/1385/C
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

    for (int i = 0; i < n; i++)
        cin >> v[i];

    if (n <= 2)
    {
        cout << 0 << endl;
        return;
    }

    while (v.size())
    {
        if (v.size() == 1)
        {
            v.pop_back();
            continue;
        }

        if (v[v.size() - 1] <= v[v.size() - 2])
            v.pop_back();
        else
            break;
    }

    while (v.size())
    {
        if (v.size() == 1)
        {
            v.pop_back();
            continue;
        }

        if (v[v.size() - 1] >= v[v.size() - 2])
            v.pop_back();
        else
        {
            v.pop_back();
            break;
        }
    }

    cout << v.size() << endl;
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