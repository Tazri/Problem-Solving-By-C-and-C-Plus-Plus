// link : https://codeforces.com/problemset/problem/1770/B
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
    int n, k;
    cin >> n >> k;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    if (k == 1 || k == n)
    {
        cout << 1;
        for (int i = 2; i <= n; i++)
            cout << " " << i;
        cout << endl;
        return;
    }

    int li = n;
    int fi = 1;
    bool isFirst = true;
    while (fi <= li)
    {
        for (int t = 0; t < k - 1; t++)
        {
            if (isFirst)
            {
                isFirst = false;
                cout << li;
            }
            else
                cout << " " << li;
            li--;

            if (li < fi)
                break;
        }

        if (li < fi)
            break;

        cout << " " << fi;
        fi++;
    }
    cout << endl;
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