// link : https://codeforces.com/problemset/problem/2092/B
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
    string a, b;
    cin >> n;
    cin >> a;
    cin >> b;

    int o = n / 2;
    int e = (n + 1) / 2;

    int ocnt = 0;
    int ecnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
        {
            if (a[i] == '0')
                ocnt++;

            if (b[i] == '0')
                ecnt++;
        }
        else
        {
            if (a[i] == '0')
                ecnt++;

            if (b[i] == '0')
                ocnt++;
        }
    }

    if (ocnt < o || ecnt < e)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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