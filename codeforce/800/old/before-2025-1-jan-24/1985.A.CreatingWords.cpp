// link : https://codeforces.com/problemset/problem/1985/A

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
    string a, b;
    cin >> a >> b;

    char ch = a[0];
    a[0] = b[0];
    b[0] = ch;

    cout << a << " " << b << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;

    while (t--)
    {
        test();
    }
    return 0;
}