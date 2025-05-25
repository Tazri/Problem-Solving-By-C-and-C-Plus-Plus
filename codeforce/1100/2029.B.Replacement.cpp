// link : https://codeforces.com/problemset/problem/2029/B
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
    string s, r;
    cin >> n;
    cin >> s;
    cin >> r;

    int zero = 0;
    int one = 0;

    for (char ch : s)
        if (ch == '0')
            zero++;
        else
            one++;

    int cnt = 0;

    for (char ch : r)
    {
        if (one <= 0 || zero <= 0)
        {
            cout << "NO" << endl;
            return;
        }

        if (ch == '0')
            one--;
        else
            zero--;
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