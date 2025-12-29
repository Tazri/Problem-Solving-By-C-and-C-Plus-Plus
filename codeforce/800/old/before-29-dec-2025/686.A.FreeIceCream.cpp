// link : https://codeforces.com/contest/686/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    ll n, k;
    cin >> n >> k;

    ll cnt = 0;
    while (n--)
    {
        char ch;
        cin >> ch;
        ll d;
        cin >> d;

        if (ch == '+')
        {
            k += d;
            continue;
        }

        if (d > k)
        {
            cnt++;
            continue;
        }
        k -= d;
    }

    cout << k << " " << cnt << endl;
}

int main()
{
    optimize();

    program();
    return 0;
}