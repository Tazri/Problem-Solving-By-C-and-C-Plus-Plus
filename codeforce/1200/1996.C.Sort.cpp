// link : https://codeforces.com/problemset/problem/1996/C
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
    int n, q;
    cin >> n >> q;

    string a;
    cin >> a;
    string b;
    cin >> b;

    vector<vector<int>> va(n + 1, vector<int>((int)'z' - (int)'a' + 1, 0));
    vector<vector<int>> vb(n + 1, vector<int>((int)'z' - (int)'a' + 1, 0));

    for (int i = 0; i < n; i++)
    {
        char ch = a[i];
        int ci = (int)ch - (int)'a';
        int key = i + 1;

        va[key][ci] = 1;

        for (int i = 0; i <= (int)'z' - (int)'a'; i++)
            va[key][i] += va[key - 1][i];
    }

    for (int i = 0; i < n; i++)
    {
        char ch = b[i];
        int ci = (int)ch - (int)'a';
        int key = i + 1;

        vb[key][ci] = 1;

        for (int i = 0; i <= (int)'z' - (int)'a'; i++)
            vb[key][i] += vb[key - 1][i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        int same = 0;

        for (int i = 0; i <= (int)'z' - (int)'a'; i++)
        {
            int ca = va[r][i] - va[l - 1][i];
            int cb = vb[r][i] - vb[l - 1][i];
            same += min(ca, cb);
        }
        int total = r - l + 1;
        total -= same;
        cout << total << endl;
    }
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