// link : https://atcoder.jp/contests/abc311/tasks/abc311_a?lang=en
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
#define A 'A'
#define B 'B'
#define C 'C'

int main()
{
    optimize();
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool a = false;
    bool b = false;
    bool c = false;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == A)
            a = true;
        if (s[i] == B)
            b = true;
        if (s[i] == C)
            c = true;

        if (a && b && c)
        {
            ans = i + 1;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}