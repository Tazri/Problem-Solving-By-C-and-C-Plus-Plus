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

#define big 4
#define small 3

void program()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int &vi : v)
        cin >> vi;

    int len = 0;
    int mx = 0;
    int prev = 0;

    for (int i = 1; i < n; i++)
    {
        int d = v[i] - v[i - 1];
        if (d == 0)
        {
            mx = max(len, mx);
            len = 0;
            prev = 0;
            continue;
        }

        if (len == 0)
        {
            mx = max(len, mx);
            len = 1;
            prev = d;
            continue;
        }

        if ((d < 0 && prev > 0) || (d > 0 && prev < 0))
        {
            len++;
            mx = max(len, mx);
            prev = d;
        }
        else
        {
            mx = max(len, mx);
            len = 0;
            prev = d;
        }
    }

    cout << mx + 1 << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}