// link : https://atcoder.jp/contests/abc324/tasks/abc324_b?lang=en
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
    ll n;
    cin >> n;

    while (n % 2 == 0 || n % 3 == 0)
        if (n % 2 == 0)
            n /= 2;
        else if (n % 3 == 0)
            n /= 3;

    if (n == 1)
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