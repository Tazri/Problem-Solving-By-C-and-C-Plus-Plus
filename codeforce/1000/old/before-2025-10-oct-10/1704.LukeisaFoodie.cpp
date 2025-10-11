// link : https://codeforces.com/problemset/problem/1704/B
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

int diff(int a, int b)
{
    return a > b ? a - b : b - a;
}

void program()
{
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    int mi = 0;
    int xi = 0;
    int j = 0;
    int ans = 0;
    while (j < n)
    {
        int d1 = diff(arr[j], arr[mi]);
        int d2 = diff(arr[j], arr[xi]);

        if (d1 <= 2 * x && d2 <= 2 * x)
        {
            if (arr[mi] > arr[j])
                mi = j;
            if (arr[xi] < arr[j])
                xi = j;
            j++;
            continue;
        }

        ans++;

        mi = j;
        xi = j;
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

/*
6 1
2 4 1 1 1 1
*/