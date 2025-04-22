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
    int n, m;
    cin >> n >> m;

    vector<int> arr(m);
    for (int i = 0; i < m; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int mn = arr[n - 1] - arr[0];

    for (int i = n, j = 0; i <= m; i++, j++)
    {
        mn = min(mn, arr[i - 1] - arr[j]);
    }

    cout << mn << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}