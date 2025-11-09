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
    int w, h, n;
    cin >> w >> h >> n;

    int wcnt = 0;
    int hcnt = 0;
    while (w % 2 == 0)
    {
        wcnt++;
        w /= 2;
    }

    while (h % 2 == 0)
    {
        hcnt++;
        h /= 2;
    }

    int p = (wcnt + 1) * (hcnt + 1);

    if (p >= n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}