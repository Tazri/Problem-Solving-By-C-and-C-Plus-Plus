// link : https://codeforces.com/problemset/problem/1487/B
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
    int n, k;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        if (k % n == 0)
        {
            cout << n << endl;
            return;
        }
        cout << k % n << endl;
        return;
    }

    k--;
    int extra = n / 2;
    k = k + (k / extra);

    k %= n;
    k += 1;

    cout << k << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}