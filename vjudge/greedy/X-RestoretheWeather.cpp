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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> ti(n);
    vector<int> ans(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ti[i] = i;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(b.begin(), b.end());
    sort(ti.begin(), ti.end(), [&a](int ai, int bi)
         { return a[ai] < a[bi]; });

    for (int i = 0; i < n; i++)
    {
        ans[ti[i]] = b[i];
    }

    cout << ans[0];
    for (int i = 1; i < n; i++)
        cout << " " << ans[i];
    cout << endl;
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