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

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    int fmx = 0;

    for (int i = 1; i < n; i++)
    {
        fmx = max(fmx, arr[i] - arr[0]);
    }

    int lmx = 0;

    for (int i = 0; i < n - 1; i++)
    {
        lmx = max(lmx, arr[n - 1] - arr[i]);
    }

    int mmx = 0;

    for (int i = 1; i < n; i++)
    {
        mmx = max(mmx, arr[i - 1] - arr[i]);
    }

    int ans = max(mmx, max(lmx, fmx));

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