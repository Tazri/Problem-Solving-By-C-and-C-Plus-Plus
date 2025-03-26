// link : https://codeforces.com/problemset/problem/2004/B
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
    int al, ar, bl, br;
    cin >> al >> ar;
    cin >> bl >> br;

    if (ar < bl || br < al)
    {
        cout << 1 << endl;
        return;
    }

    if (al == bl && ar == br)
    {
        cout << ar - al << endl;
        return;
    }

    if (bl <= al && ar <= br)
    {
        int ans = ar - al;
        if (bl < al)
        {
            ans++;
        }
        if (ar < br)
        {
            ans++;
        }

        cout << ans << endl;
        return;
    }

    if (al <= bl && br <= ar)
    {
        int ans = br - bl;
        if (al < bl)
            ans++;
        if (br < ar)
            ans++;

        cout << ans << endl;
        return;
    }

    if (al <= bl && bl <= ar)
    {
        int ans = ar - bl;

        if (al < bl)
            ans++;
        if (ar < br)
            ans++;
        cout << ans << endl;
        return;
    }

    if (bl <= al && al <= br)
    {
        int ans = br - al;

        if (bl < al)
            ans++;
        if (br < ar)
            ans++;
        cout << ans << endl;
        return;
    }

    cout << -1 << endl;
    return;
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