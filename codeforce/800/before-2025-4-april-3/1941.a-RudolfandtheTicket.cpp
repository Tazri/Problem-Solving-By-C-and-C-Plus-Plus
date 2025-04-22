// link : https://codeforces.com/problemset/problem/1941/A
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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> left(n);
    vector<int> right(m);

    for (int i = 0; i < n; i++)
        cin >> left[i];
    for (int i = 0; i < m; i++)
        cin >> right[i];

    int cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (left[i] + right[j] <= k)
                cnt++;

    cout << cnt << endl;
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