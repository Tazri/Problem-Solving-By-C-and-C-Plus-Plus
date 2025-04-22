// link : https://atcoder.jp/contests/abc180/tasks/abc180_a?lang=en
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
    int n, a, b;
    cin >> n >> a >> b;
    n -= a;
    n += b;
    cout << n << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}