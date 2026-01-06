// link : https://atcoder.jp/contests/abc214/tasks/abc214_b
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
    int s, t;
    cin >> s >> t;
    int cnt = 0;
    for (int i = 0; i <= s; i++)
        for (int j = 0; j <= s; j++)
            for (int k = 0; k <= s; k++)
            {
                if (i + j + k <= s && i * j * k <= t)
                    cnt++;
            }

    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}