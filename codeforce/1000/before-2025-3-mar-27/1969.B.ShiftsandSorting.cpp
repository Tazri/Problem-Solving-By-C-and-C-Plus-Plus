// link : https://codeforces.com/problemset/problem/1969/B
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
    string s;
    cin >> s;

    ll cost = 0;
    ll cnt = 0;

    for (char ch : s)
    {
        if (ch == '0' && cnt == 0)
            continue;

        if (ch == '1')
        {
            cnt++;
            continue;
        }

        cost += (cnt + 1);
    }

    cout << cost << endl;
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
        program();
    return 0;
}