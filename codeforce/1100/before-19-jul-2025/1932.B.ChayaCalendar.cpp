// link : https://codeforces.com/problemset/problem/1932/B
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

void program()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &ai : arr)
        cin >> ai;

    int y = arr[0];
    int ans = 0;
    for (int ai : arr)
    {
        if (y % ai == 0)
        {
            ans = y;
            y++;
            continue;
        }

        int r = y % ai;
        y += (ai - r);
        ans = y;
        y++;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}