// link : https://atcoder.jp/contests/abc293/tasks/abc293_a?lang=en
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

    int h = s.size() / 2;

    for (int i = 1; i <= h; i++)
    {
        int ai = (2 * i - 1) - 1;
        int bi = (2 * i) - 1;

        char temp = s[ai];
        s[ai] = s[bi];
        s[bi] = temp;
    }

    cout << s << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}