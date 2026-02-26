// link : https://codeforces.com/contest/34/problem/A
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

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int mn = abs(v[1] - v[0]);
    int ai = 0;
    int bi = 1;

    for (int i = 0; i < n; i++)
    {
        int ni = (i + 1) % n;
        int d = abs(v[i] - v[ni]);

        if (d < mn)
        {
            mn = d;
            ai = i;
            bi = ni;
        }
    }

    cout << ai + 1 << " " << bi + 1 << endl;
}

int main()
{
    optimize();
    // int t;
    // cin >> t;
    // while(t--)
    program();
    return 0;
}