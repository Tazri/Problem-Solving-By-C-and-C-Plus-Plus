// link : https://codeforces.com/problemset/problem/1732/A
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
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (n <= 1)
    {
        if (arr[0] == 1)
            cout << 0 << endl;
        else
            cout << 1 << endl;
        return;
    }

    if (n == 2)
    {
        if (gcd(arr[0], arr[1]) == 1)
            cout << 0 << endl;
        else
        {
            if (gcd(arr[0], gcd(arr[1], 2)) == 1)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }

        return;
    }

    int g = arr[0];

    for (int i = 1; i < n - 2; i++)
        g = gcd(g, arr[i]);

    if (g == 1 || gcd(g, gcd(arr[n - 1], arr[n - 2])) == 1)
    {
        cout << 0 << endl;
        return;
    }

    // try last index make
    int l = arr[n - 1];  // last
    int sl = arr[n - 2]; // second last
    int gl = gcd(l, n);
    int gsl = gcd(sl, n - 1);

    if (gcd(g, gcd(sl, gl)) == 1)
    {
        cout << 1 << endl;
        return;
    }

    if (gcd(g, gcd(l, gsl)) == 1)
    {
        cout << 2 << endl;
        return;
    }

    cout << 3 << endl;
    return;
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