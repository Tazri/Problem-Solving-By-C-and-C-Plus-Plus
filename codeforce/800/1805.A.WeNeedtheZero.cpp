// link : https://codeforces.com/problemset/problem/1805/A
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

    for (int &vi : v)
        cin >> vi;

    int x = 0;
    int mask = 1;

    for (int i = 0; i < 31; i++, mask <<= 1)
    {
        int zero = 0;
        int one = 0;

        for (int &vi : v)
            if (vi & mask)
                one++;
            else
                zero++;

        if (one == 0)
            continue;

        if (one % 2 != 0 && zero % 2 != 0)
        {
            cout << -1 << endl;
            return;
        }

        if (zero % 2 == 0)
        {
            x |= mask;
        }
    }
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