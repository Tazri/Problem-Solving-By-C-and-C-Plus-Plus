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
    int a, b, c;
    cin >> a >> b >> c;

    if (a % c == 0)
        cout << a << endl;
    else if (b % c == 0)
        cout << b << endl;
    else
    {
        int r = a % c;
        int ans = a + c - r;

        if (a <= ans && ans <= b)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}