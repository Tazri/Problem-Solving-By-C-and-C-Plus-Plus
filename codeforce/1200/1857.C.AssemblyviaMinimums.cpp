// link : https://codeforces.com/problemset/problem/1857/C
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
    int len = (n * (n - 1)) / 2;
    vector<int> v(len);
    int cn = n;
    for (int i = 0; i < len; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    v.push_back(v.back());

    vector<int> ans;
    ans.reserve(n);
    int i = 0;
    while (n)
    {
        ans.push_back(v[i]);
        i += (n - 1);
        n--;
    }

    for (int i = 0; i < cn; i++)
        cout << ans[i] << " \n"[i == cn - 1];
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