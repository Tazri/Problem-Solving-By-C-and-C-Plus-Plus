// link : https://codeforces.com/problemset/problem/1984/B
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
    string num;
    cin >> num;

    for (int i = 0; i < num.size(); i++)
    {
        if (i == 0)
        {
            if (num[i] != '1')
            {
                cout << "NO" << endl;
                return;
            }
            continue;
        }

        if (num[i] != '0' && num[i] != '9')
            continue;

        if (i == num.size() - 1)
        {

            if (num[i] == '9')
            {
                cout << "NO" << endl;
                return;
            }
        }

        if (i != num.size() - 1)
        {
            if (num[i] == '0')
            {
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES" << endl;
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