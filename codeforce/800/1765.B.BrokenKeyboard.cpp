// link : https://codeforces.com/problemset/problem/1765/B
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
    string s;
    cin >> s;

    int i = 0;
    bool isSingle = true;
    while (i < n)
    {
        if (isSingle)
        {
            isSingle = false;
            i++;
            continue;
        }

        if (i + 1 >= n)
        {
            cout << "NO" << endl;
            return;
        }

        if (s[i] != s[i + 1])
        {
            cout << "NO" << endl;
            return;
        }

        i += 2;
        isSingle = true;
    }

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