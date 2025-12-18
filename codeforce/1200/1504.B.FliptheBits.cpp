// link : https://codeforces.com/problemset/problem/1504/B
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
    string a, b;
    cin >> a >> b;

    if (n == 1)
    {
        if (a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return;
    }

    vector<int> one(n);
    vector<int> zero(n);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
            one[i] = 1;

        if (a[i] == '0')
            zero[i] = 1;
    }

    for (int i = 1; i < n; i++)
    {
        one[i] += one[i - 1];
        zero[i] += zero[i - 1];
    }

    int flip = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        char ch = a[i];

        if (flip & 1)
            ch = ch == '0' ? '1' : '0';

        if (ch == b[i])
            continue;

        if (zero[i] != one[i])
        {
            cout << "NO" << endl;
            return;
        }

        flip++;
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