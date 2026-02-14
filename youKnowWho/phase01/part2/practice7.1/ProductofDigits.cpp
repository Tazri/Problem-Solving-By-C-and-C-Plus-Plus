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

    if (n == 0)
    {
        cout << 10 << endl;
        return;
    }
    else if (n < 10)
    {
        cout << n << endl;
        return;
    }

    vector<int> v;

    vector<int> d = {9, 8, 7, 6, 5, 4, 3, 2};

    for (int &di : d)
    {
        if (n % di != 0)
            continue;

        while (n % di == 0)
        {
            v.push_back(di);
            n /= di;
        }
    }

    if (n != 1)
    {
        cout << -1 << endl;
        return;
    }
    reverse(v.begin(), v.end());

    for (int &vi : v)
        cout << vi;
    cout << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}