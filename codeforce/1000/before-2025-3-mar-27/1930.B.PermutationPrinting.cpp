// link : https://codeforces.com/problemset/problem/1930/B
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

    int l = 1;
    int r = n;

    while (l <= r)
    {
        if (l == 1)
        {
            cout << r << " " << l;
            l++;
            r--;
        }
        else
        {
            if (l == r)
            {
                cout << " " << l;
                l++;
                r--;
            }
            else
            {
                cout << " " << r << " " << l;
                r--;
                l++;
            }
        }
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