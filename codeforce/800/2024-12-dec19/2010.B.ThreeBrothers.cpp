// link : https://codeforces.com/problemset/problem/2010/B
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

int main()
{
    optimize();
    int a, b;
    cin >> a >> b;
    vector<bool> arr(4, false);
    arr[a] = true;
    arr[b] = true;

    for (int i = 1; i < 4; i++)
    {
        if (!arr[i])
        {
            cout << i << endl;
        }
    }

    return 0;
}