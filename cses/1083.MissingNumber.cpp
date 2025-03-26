// link : https://cses.fi/problemset/task/1083
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
    int n;
    cin >> n;
    int miss = n;

    for (int i = 1; i < n; i++)
    {
        int temp;
        cin >> temp;
        miss ^= i ^ temp;
    }

    cout << miss << endl;
    return 0;
}