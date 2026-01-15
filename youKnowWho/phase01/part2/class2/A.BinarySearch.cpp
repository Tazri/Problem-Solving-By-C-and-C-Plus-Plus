// link : https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A
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

vector<int> v;

bool search(int l, int r, int value)
{
    if (l > r)
        return false;

    int mid = l + (r - l) / 2;

    if (v[mid] == value)
        return true;

    if (v[mid] < value)
        return search(mid + 1, r, value);
    else
        return search(l, mid - 1, value);
}

void program()
{
    int n, k;
    cin >> n >> k;
    v = vector<int>(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    while (k--)
    {
        int value;
        cin >> value;

        if (search(0, n - 1, value))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int32_t main()
{
    optimize();
    program();
    return 0;
}