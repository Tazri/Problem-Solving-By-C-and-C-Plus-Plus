// link : https://codeforces.com/problemset/problem/2000/B
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
    vector<bool> arr(n + 2, false);
    int seat;
    cin >> seat;
    arr[seat] = true;
    bool isOK = true;

    for (int i = 1; i < n; i++)
    {
        cin >> seat;

        if (arr[seat - 1] || arr[seat + 1])
        {
            arr[seat] = true;
        }
        else
        {
            isOK = false;
        }
    }

    if (isOK)
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