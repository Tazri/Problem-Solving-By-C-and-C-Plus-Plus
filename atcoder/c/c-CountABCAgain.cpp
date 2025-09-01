// link : https://atcoder.jp/contests/abc372/tasks/abc372_c?lang=en
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

int n, q;
string s;
int cnt = 0;

void count(int p, int inc)
{
    if (p >= n - 2)
        return;

    if (s[p] == 'A' && s[p + 1] == 'B' && s[p + 2] == 'C')
        cnt += inc;
}

void program()
{
    cin >> n >> q;
    cin >> s;

    // count
    for (int i = 0; i < n; i++)
        count(i, 1);

    while (q--)
    {
        int qi;
        char c;
        cin >> qi >> c;

        qi--;
        int l = max(qi - 2, 0);
        int r = min(n - 1, qi + 2);

        for (int p = l; p <= r; p++)
            count(p, -1);

        s[qi] = c;

        for (int p = l; p <= r; p++)
            count(p, 1);

        cout << cnt << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}