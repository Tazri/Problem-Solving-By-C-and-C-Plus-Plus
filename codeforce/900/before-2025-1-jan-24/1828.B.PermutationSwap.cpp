// link : https://codeforces.com/problemset/problem/1828/B
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
    int n;
    cin >> n;
    vector<int> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int k = -1;
    for (int i = 1; i <= n; i++)
    {
        int dist = abs(arr[i] - i);
        if (dist == 0)
            continue;

        if (k == -1)
        {
            k = dist;
            continue;
        }
        k = gcd(k, dist);
    }

    cout << k << endl;
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