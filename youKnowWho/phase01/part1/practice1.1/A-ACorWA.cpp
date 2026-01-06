// link : https://atcoder.jp/contests/abc152/tasks/abc152_a
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
    int a, b;
    cin >> a >> b;
    if (a == b)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}