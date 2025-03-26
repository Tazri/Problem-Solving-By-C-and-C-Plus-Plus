// link : https://codeforces.com/problemset/problem/1988/B
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
    string word;
    cin >> word;

    if (n == 1)
    {
        if (word[0] == '0')
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        return;
    }

    int zeros = 0;
    int ones = 0;

    if (word[0] == '0')
        zeros++;
    else
        ones++;

    for (int i = 1; i < n; i++)
    {
        if (word[i] == '1')
        {
            ones++;
            continue;
        }

        if (word[i - 1] == '0')
        {
            continue;
        }
        zeros++;
    }

    if (ones > zeros)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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