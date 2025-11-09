// link: https://codeforces.com/problemset/problem/1363/A
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

    int odd = 0;
    int even = 0;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        if (ai & 1)
            odd++;
        else
            even++;
    }

    if (odd == 0)
    {
        cout << "NO" << endl;
        return;
    }

    if (even >= x - 1)
    {
        cout << "YES" << endl;
        return;
    }

    if (even == 0)
    {
        if (x & 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return;
    }

    if (odd == 1)
    {
        cout << "YES" << endl;
        return;
    }

    if (odd % 2 == 0)
        odd--;

    if (odd <= x)
    {
        x -= odd;
        if (even >= x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return;
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