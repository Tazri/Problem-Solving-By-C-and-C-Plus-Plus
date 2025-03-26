// link : https://atcoder.jp/contests/abc280/tasks/abc280_a
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
    int h, w;
    cin >> h >> w;
    int ans = 0;

    for (int i = 0; i < h; i++)
    {
        string s;
        cin >> s;

        for (char ch : s)
            if (ch == '#')
                ans++;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}