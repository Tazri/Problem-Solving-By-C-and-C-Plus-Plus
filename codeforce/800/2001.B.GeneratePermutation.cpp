// link : https://codeforces.com/problemset/problem/2001/B
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

void test()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (n % 2 == 0)
    {
        cout << -1 << endl;
        return;
    }

    int h = n / 2;

    int s = 3;

    for (int i = 0; i < h; i++)
    {
        cout << s << " ";
        s += 2;
    }

    cout << "1";
    s = 2;

    for (int i = 0; i < h; i++)
    {
        cout << " " << s;
        s += 2;
    }
    cout << endl;
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