// link : https://codeforces.com/problemset/problem/2000/A
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

int main()
{
    optimize();

    int t;
    cin >> t;

    while (t--)
    {
        string n;
        cin >> n;

        if (n.size() < 3)
        {
            cout << "NO" << endl;
            continue;
        }

        if (n[0] != '1' || n[1] != '0' || n[2] == '0')
        {
            cout << "NO" << endl;
            continue;
        }

        if (n.size() == 3 && n[2] == '1')
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
    }
    return 0;
}