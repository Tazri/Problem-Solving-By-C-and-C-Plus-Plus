// linK: https://www.spoj.com/problems/ABACABA/
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

long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int getLen(int n)
{
    return (binpow(2, n) - 1);
}

string s;

void build(int l, int r, char ch)
{
    if (l == r)
    {
        s[l] = ch;
        return;
    }

    int mid = (l + r) / 2;
    s[mid] = ch;
    ch--;
    build(l, mid - 1, ch);
    build(mid + 1, r, ch);
}

void program()
{
    int n;
    cin >> n;

    int len = getLen(n);
    s = string(len + 1, '*');
    build(1, len, 'A' + n - 1);
    for (int i = 1; i <= len; i++)
        cout << s[i];
}

int32_t main()
{
    optimize();
    program();
    return 0;
}