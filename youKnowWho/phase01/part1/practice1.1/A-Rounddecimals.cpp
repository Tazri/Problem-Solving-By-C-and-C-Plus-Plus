// link : https://atcoder.jp/contests/abc226/tasks/abc226_a
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
    double a;
    cin >> a;
    a *= 10;
    int num = a;
    int ld = num % 10;
    num /= 10;

    if (ld >= 5)
        cout << num + 1 << endl;
    else
        cout << num << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}