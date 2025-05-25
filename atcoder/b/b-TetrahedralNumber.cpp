// link : https://atcoder.jp/contests/abc335/tasks/abc335_b?lang=en
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

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            for (int k = 0; k <= n; k++)
            {
                int sum = j + k + i;

                if (sum <= n)
                    cout << i << " " << j << " " << k << endl;
                else
                    break;
            }
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}