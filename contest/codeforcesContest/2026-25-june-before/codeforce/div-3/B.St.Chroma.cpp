// link : https://codeforces.com/contest/2106/problem/B
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
    int n, x;

    cin >> n >> x;

    if (n == x)
    {
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
                cout << i;
            else
                cout << " " << i;
        }
        cout << endl;

        return;
    }

    for (int i = 0; i < x; i++)
        cout << i << " ";

    for (int i = x + 1; i < n; i++)
        cout << i << " ";

    cout << x << endl;
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