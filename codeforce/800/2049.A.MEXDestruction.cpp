// link : https://codeforces.com/problemset/problem/2049/A

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void test()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int s = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i])
        {
            s = i;
            break;
        }
    }

    if (s == -1)
    {
        cout << 0 << endl;
        return;
    }

    int e = -1;

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i])
        {
            e = i;
            break;
        }
    }

    bool m = false;
    for (int i = s; i <= e; i++)
    {
        if (arr[i] == 0)
        {
            m = true;
        }
    }

    if (m)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 1 << endl;
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