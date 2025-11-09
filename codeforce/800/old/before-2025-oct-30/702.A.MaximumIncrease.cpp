// link : https://codeforces.com/problemset/problem/702/A
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
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int len = 1;
    int ans = 1;

    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] < v[i])
        {
            len++;
            continue;
        }

        ans = max(len, ans);
        len = 1;
    }

    ans = max(len, ans);
    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}