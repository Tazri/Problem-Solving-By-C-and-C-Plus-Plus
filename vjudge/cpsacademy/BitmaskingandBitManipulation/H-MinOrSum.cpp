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
    int n;
    cin >> n;
    int x = 0;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        x |= ai;
    }

    int s = 1;
    int ans = 0;
    while (x)
    {
        if (x & 1)
            ans += s;
        s *= 2;
        x >>= 1;
    }

    cout << ans << endl;
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