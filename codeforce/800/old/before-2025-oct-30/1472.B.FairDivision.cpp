// link: https://codeforces.com/problemset/problem/1472/B
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
    int one = 0;
    int two = 0;

    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;

        if (c == 1)
            one++;

        if (c == 2)
            two++;
    }

    if ((one + (two * 2)) & 1)
    {
        cout << "NO" << endl;
        return;
    }

    if (one == 0)
    {
        if (two & 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
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