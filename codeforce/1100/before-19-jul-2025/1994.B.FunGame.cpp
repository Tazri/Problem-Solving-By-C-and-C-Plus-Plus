// link : https://codeforces.com/problemset/problem/1994/B
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
    string s;
    string t;

    cin >> s;
    cin >> t;

    if (s == t)
    {
        cout << "YES" << endl;
        return;
    }

    bool isOneGone = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            isOneGone = true;
        if (s[i] != t[i])
        {
            if (isOneGone)
            {
                cout << "YES" << endl;
                return;
            }

            cout << "NO" << endl;
            return;
        }
    }
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

/*
9 op (3,5), (5,6), (7,7)
s -> 100101010
t -> 101111110

1 2 3 4 5 6 7 8 9
1 0 0 1 0 1 0 1 0
1 0 1 1 0 1 0 1 0 -> 3,5
1 0 1 1 1 1 0 1 0 -> (5, 6)
1 0 1 1 1 1 1 1 0 -> (7,7)


0 0 1 1
1 0 1 1

01100000
01100000

0001101
0001100

0100001110
0001001010

// not possible
0011
1011
*/