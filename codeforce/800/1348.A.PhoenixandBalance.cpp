// link : https://codeforces.com/problemset/problem/1348/A
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
    vector<int> v(n, 1);
    v[0] = 2;

    for (int i = 1; i < n; i++)
        v[i] = v[i - 1] * 2;

    int sum = 0;
    for (int &vi : v)
        sum += vi;

    int w = n / 2;
    int psum = 0;
    for (int i = 0; i < w; i++)
        psum += v[i];

    int ans = abs(psum - (sum - psum));
    for (int l = 0, i = w; i < n; i++, l++)
    {
        psum -= v[l];
        psum += v[i];

        ans = min(ans, abs(psum - (sum - psum)));
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