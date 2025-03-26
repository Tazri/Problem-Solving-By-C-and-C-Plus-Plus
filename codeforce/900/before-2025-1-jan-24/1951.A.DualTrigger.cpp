// link : https://codeforces.com/problemset/problem/1951/A
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

    // corner case
    if (n == 1)
    {
        if (word == "1")
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            cout << "YES" << endl;
            return;
        }
        return;
    }

    if (n == 2)
    {
        if (word == "00")
        {
            cout << "YES" << endl;
            return;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
        return;
    }

    // now count
    int ones = 0;
    if (word[0] == '1')
        ones++;

    bool twoOne = false;
    for (int i = 1; i < n; i++)
    {
        char ch = word[i];
        if (ch == '1')
        {
            ones++;

            if (word[i - 1] == '1')
            {
                twoOne = true;
            }
        }

        // check is any consecutive ones
    }

    if (ones & 1)
    {
        cout << "NO" << endl;
        return;
    }

    if (ones == 2 && twoOne)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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