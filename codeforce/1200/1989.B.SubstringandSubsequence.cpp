// link : https://codeforces.com/problemset/problem/1989/B
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

bool isOk(string &a, string &b)
{
    if (a.size() < b.size())
        return false;

    int bi = 0;
    int ai = 0;
    while (ai < a.size() && bi < b.size())
    {
        if (a[ai] == b[bi])
        {
            bi++;
            ai++;
            continue;
        }
        ai++;
    }

    return bi >= b.size();
}

int match(string &a, string &b, int i)
{
    int cnt = 0;
    int ai = 0;
    int bi = i;

    while (ai < a.size() && bi < b.size())
    {
        if (a[ai] == b[bi])
        {
            cnt++;
            ai++;
            bi++;
            continue;
        }
        ai++;
    }

    return cnt;
}

void program()
{
    string a;
    string b;
    cin >> a >> b;

    if (isOk(a, b))
    {
        cout << a.size() << endl;
        return;
    }

    int ans = a.size() + b.size();
    for (int i = 0; i < b.size(); i++)
    {
        int m = match(a, b, i);
        int rm = b.size() - m;
        ans = min(ans, (int)a.size() + rm);
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