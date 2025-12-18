// link : https://qoj.ac/problem/7852
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
    int sq, s, c;
    cin >> sq >> s >> c;

    int ans = sq * 2;

    if (c < 2)
    {
        cout << ans << endl;
        return;
    }

    if (s)
    {
        int extra = 2 * s - 1;
        extra += 4;
        ans += extra;
        c -= 2;
    }

    if (c & 1)
        c--;

    if (c)
    {
        int h = c / 2;
        int cextra = h * 3;
        ans += cextra;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}