// link : https://codeforces.com/problemset/problem/1516/A
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
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int li = n - 1;

    for (int i = 0; i < li; i++)
    {
        if (k <= 0)
            break;

        int d = min(k, arr[i]);
        arr[i] -= d;
        k -= d;
        arr[li] += d;
    }

    cout << arr[0];
    for (int i = 1; i < n; i++)
        cout << " " << arr[i];
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