// link : https://atcoder.jp/contests/abc328/tasks/abc328_b?lang=en
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

bool isAllDigitSame(int num)
{

    int prev;
    prev = num % 10;
    num /= 10;

    while (num)
    {
        int next = num % 10;
        num /= 10;
        if (next != prev)
        {
            return false;
        }
    }

    return true;
}

void program()
{
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int days;
        cin >> days;

        if (!isAllDigitSame(i))
        {
            continue;
        }
        int d = i % 10;

        if (days >= d)
        {
            cnt++;
        }

        int dd = (d * 10) + d;

        if (days >= dd)
        {
            cnt++;
        }
    }

    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}