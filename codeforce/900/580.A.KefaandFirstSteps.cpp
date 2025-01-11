// link : https://codeforces.com/problemset/problem/580/A
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
    int maxLen = 1;
    int len = 1;
    int prev;
    cin >> prev;
    for (int i = 1; i < n; i++)
    {
        int curr;
        cin >> curr;

        if (prev > curr)
        {
            maxLen = max(maxLen, len);
            len = 1;
        }
        else
            len++;
        prev = curr;
    }

    maxLen = max(maxLen, len);

    cout << maxLen << endl;
    return 0;
}