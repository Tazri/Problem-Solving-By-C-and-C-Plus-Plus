// link : https://codeforces.com/problemset/problem/1971/C
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

void test()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<bool> clock(13, false);

    while (a != b)
    {
        clock[a] = true;
        a++;

        if (a > 12)
        {
            a = 1;
        }
    }

    if (clock[c] == clock[d])
    {
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
        test();
    return 0;
}