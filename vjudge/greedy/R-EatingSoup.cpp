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
    int n, m;
    cin >> n >> m;

    if (m == 0)
    {
        cout << 1 << endl;
        return;
    }

    if (n == m)
    {
        cout << 0 << endl;
        return;
    }

    int mx = n / 2;
    int c = n;

    if (m <= mx)
    {
        cout << m << endl;
        return;
    }
    m -= mx;

    if (n & 1)
        m--;
    int g = mx;
    g -= m;
    cout << g << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}