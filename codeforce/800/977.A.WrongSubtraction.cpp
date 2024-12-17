// link : https://codeforces.com/problemset/problem/977/A
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
    int n, k;

    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        int d = n % 10;

        if (d)
        {
            n--;
        }
        else
        {
            n /= 10;
        }
    }

    cout << n << endl;
    return 0;
}