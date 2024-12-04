// link : https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/distinct-count/

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
    int x, n;
    cin >> n >> x;
    vector<ll> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    int d = unique(arr.begin(), arr.end()) - arr.begin();

    if (d < x)
        cout << "Bad" << endl;
    else if (d == x)
        cout << "Good" << endl;
    else
        cout << "Average" << endl;
}

int main()
{
    optimize();

    int t;
    cin >> t;

    while (t--)
    {
        test();
    }
    return 0;
}
