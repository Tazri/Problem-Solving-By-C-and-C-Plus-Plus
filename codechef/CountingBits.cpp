// link : https://www.codechef.com/problems/BIT
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

int sz = 1000;
vector<int> arr(sz + 1, 0);

void build()
{
    for (int i = 1; i <= sz; i++)
    {
        arr[i] = __popcount(i);
        arr[i] += arr[i - 1];
    }
}

void program()
{
    int n;
    cin >> n;

    cout << arr[n] << endl;
}

int32_t main()
{
    optimize();
    build();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}