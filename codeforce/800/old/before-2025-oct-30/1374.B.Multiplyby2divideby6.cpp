// link : https://codeforces.com/problemset/problem/1374/B
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
    int three = 0;
    int two = 0;

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    while (n > 1)
    {
        if (n % 3 == 0)
        {
            n /= 3;
            three++;
        }
        else
            break;
    }

    while (n > 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            two++;
        }
        else
            break;
    }

    if (n != 1)
    {
        cout << -1 << endl;
        return;
    }

    if (two > three)
    {
        cout << -1 << endl;
        return;
    }

    int ans = two;
    three -= two;
    ans += (three * 2);
    cout << ans << endl;
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