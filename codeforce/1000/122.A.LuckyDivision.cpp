// link : https://codeforces.com/problemset/problem/122/A
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

bool isLucky(int n)
{
    while (n)
    {
        int l = n % 10;
        n /= 10;
        if (l == 4 || l == 7)
            continue;
        return false;
    }

    return true;
}

void program()
{
    int n;
    cin >> n;

    if (isLucky(n))
    {
        cout << "YES" << endl;
        return;
    }

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i != 0)
            continue;

        if (isLucky(i) || isLucky(n / i))
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}