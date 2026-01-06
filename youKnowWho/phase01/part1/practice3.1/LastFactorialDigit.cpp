// link : https://open.kattis.com/problems/lastfactorialdigit
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

    if (n == 1 || n == 0)
        cout << 1 << endl;
    else if (n == 2)
        cout << 2 << endl;
    else if (n == 4)
        cout << 4 << endl;
    else if (n == 3)
        cout << 6 << endl;
    else
        cout << 0 << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}