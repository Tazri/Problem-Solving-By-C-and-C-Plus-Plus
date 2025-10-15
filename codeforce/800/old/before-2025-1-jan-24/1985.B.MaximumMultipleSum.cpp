// link : https://codeforces.com/problemset/problem/1985/B
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

    if (n == 3)
    {
        cout << 3 << endl;
        return;
    }
    cout << 2 << endl;
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