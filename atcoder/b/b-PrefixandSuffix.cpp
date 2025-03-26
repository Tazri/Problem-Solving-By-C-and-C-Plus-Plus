// link : https://atcoder.jp/contests/abc322/tasks/abc322_b?lang=en
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

int main()
{
    optimize();
    int n, m;
    string s, t;
    cin >> n >> m;
    cin >> s;
    cin >> t;

    bool isSuffix = true;
    bool isPrefix = true;

    // check suffix
    for (int i = 0; i < n; i++)
        if (s[i] != t[i])
        {
            isPrefix = false;
            break;
        }

    for (int i = n - 1, j = m - 1; i >= 0; i--, j--)
        if (s[i] != t[j])
        {
            isSuffix = false;
            break;
        }

    if (isSuffix && isPrefix)
        cout << 0 << endl;
    else if (isPrefix)
        cout << 1 << endl;
    else if (isSuffix)
        cout << 2 << endl;
    else
        cout << 3 << endl;

    return 0;
}