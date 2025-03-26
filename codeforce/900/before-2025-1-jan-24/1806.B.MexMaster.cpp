// link : https://codeforces.com/problemset/problem/1806/B
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

void test()
{
    int n;
    cin >> n;
    int non = 0;
    int zero = 0;
    int one = 0;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp)
        {
            non++;
        }
        else
        {
            zero++;
        }

        if (tmp == 1)
            one++;
    }

    if (!non)
    {
        cout << 1 << endl;
        return;
    }

    if (non >= zero - 1)
    {
        cout << 0 << endl;
    }
    else
    {
        int nonOne = non - one;

        if (nonOne)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
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