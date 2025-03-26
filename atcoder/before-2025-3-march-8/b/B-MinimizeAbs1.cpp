// link : https://atcoder.jp/contests/abc330/tasks/abc330_b?lang=en
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
    int n, l, r;
    cin >> n >> l >> r;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        int num;
        if (temp >= l && temp <= r)
        {
            num = temp;
        }
        else if (temp < l)
        {
            num = l;
        }
        else
        {
            num = r;
        }

        if (i == 0)
        {
            cout << num;
        }
        else
        {
            cout << " " << num;
        }
    }
    cout << endl;
    return 0;
}