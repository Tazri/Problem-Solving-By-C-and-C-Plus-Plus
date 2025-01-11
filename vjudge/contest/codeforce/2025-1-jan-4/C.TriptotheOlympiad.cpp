// link : https://codeforces.com/contest/2057/problem/C
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

int changeNBit(int pos, int num, int bit)
{
    int mask = 1 << pos;

    if (bit != 0)
    {
        return num | mask;
    }
    else
    {
        return num ^ mask;
    }
}

void test()
{
    int l, r;
    cin >> l >> r;
    int a = l;
    int b = r;

    for (int i = 0; i < 30; i++)
    {
        int da = a & (1 << i);
        int db = b & (1 << i);

        if ((da == 0 && db != 0) || (da != 0 && db == 0))
        {
            continue;
        }

        if (da == 0 && db == 0)
        {
            int changeA = changeNBit(i, a, 1);
            if (changeA > r)
            {
                continue;
            }
            else
            {
                a = changeA;
            }
        }
        else
        {
            int changeB = changeNBit(i, b, 0);
            if (changeB < l)
            {
                continue;
            }
            else
            {
                b = changeB;
            }
        }
    }

    int c;

    if (a + 1 <= r && a + 1 != b)
    {
        c = a + 1;
    }
    else if (a - 1 >= l && a - 1 != b)
    {
        c = a - 1;
    }
    else if (b + 1 <= r && b + 1 != a)
    {
        c = b + 1;
    }
    else if (b - 1 >= l && b - 1 != a)
    {
        c = b - 1;
    }

    // chane one bit of c
    cout << a << " " << b << " " << c << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}