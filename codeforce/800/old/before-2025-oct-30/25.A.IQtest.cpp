// link : https://codeforces.com/contest/25/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    int n;
    cin >> n;
    vector<int> v(n);

    int e = 0;
    int o = 0;
    for (int &vi : v)
    {
        cin >> vi;

        if (vi & 1)
            o++;
        else
            e++;
    }

    if (o == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] & 1)
            {
                cout << i + 1 << endl;
                return;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            cout << i + 1 << endl;
            return;
        }
    }
}

int main()
{
    optimize();

    program();

    return 0;
}