// link : https://codeforces.com/contest/1993/problem/A
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

#define A 'A'
#define B 'B'
#define C 'C'
#define D 'D'

void test()
{
    int n;
    cin >> n;
    int a = 0, b = 0, c = 0, d = 0;
    string w;
    cin >> w;
    for (char ch : w)
    {

        if (ch == A)
            a++;
        else if (ch == B)
            b++;
        else if (ch == C)
            c++;
        else if (ch == D)
            d++;
    }

    int ans = 0;

    ans += min(a, n);
    ans += min(b, n);
    ans += min(c, n);
    ans += min(d, n);

    cout << ans << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}