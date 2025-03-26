// link : https://codeforces.com/problemset/problem/1881/B
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
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c)
    {
        cout << "YES" << endl;
        return;
    }

    vector<int> arr = {a, b, c};

    // sort it
    sort(arr.begin(), arr.end(), [](int a, int b)
         { return a < b; });
    a = arr[0];
    b = arr[1];
    c = arr[2];

    if (b % a || c % a)
    {
        cout << "NO" << endl;
        return;
    }

    int take = 0;
    take = (b / a) - 1;
    take += (c / a) - 1;

    if (take <= 3)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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