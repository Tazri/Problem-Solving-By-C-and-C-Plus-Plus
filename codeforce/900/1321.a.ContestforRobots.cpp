// link : https://codeforces.com/problemset/problem/1321/A
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

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int u = 0;
    int d = 0;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        if (ai == 0 && arr[i] == 0)
            continue;
        else if (ai == 1 && arr[i] == 1)
            continue;
        else if (ai == 1)
            d++;
        else if (arr[i] == 1)
            u++;
    }
    d++;

    if (u == 0)
    {
        cout << -1 << endl;
        return;
    }

    int ans = (d + u - 1) / u;
    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}