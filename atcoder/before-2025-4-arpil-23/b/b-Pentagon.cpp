// link : https://atcoder.jp/contests/abc333/tasks/abc333_b?lang=en
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
    char s1, s2, t1, t2;

    cin >> s1 >> s2;
    cin >> t1 >> t2;

    int s1s2 = (int)s1 - (int)s2;
    if (s1s2 < 0)
        s1s2 *= -1;

    if (s1s2 > 2)
        s1s2 = 3 - (s1s2 - 2);

    int t1t2 = (int)t1 - (int)t2;
    if (t1t2 < 0)
        t1t2 *= -1;

    if (t1t2 > 2)
        t1t2 = 3 - (t1t2 - 2);

    if (s1s2 == t1t2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}