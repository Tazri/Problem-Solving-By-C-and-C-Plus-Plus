// link : https://codeforces.com/problemset/problem/1617/B
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

    if (n & 1)
    {
        int c = 1;
        int h = (n - 1) / 2;
        int a = h & 1 ? h - 2 : h - 1;
        int b = h & 1 ? h + 2 : h + 1;

        cout << a << " " << b << " " << c << endl;
        return;
    }

    int c = 1;
    int b = 2;
    int a = n - 3;

    cout << a << " " << b << " " << c << endl;
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

 