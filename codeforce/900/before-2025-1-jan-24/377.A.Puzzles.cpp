// link : https://codeforces.com/problemset/problem/337/A
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

int main()
{
    optimize();
    int n, m;

    cin >> n >> m;
    vector<int> arr(m);

    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int minDiff = arr[n - 1] - arr[0];
    for (int i = 0; i + n - 1 < m; i++)
    {
        int diff = arr[i + n - 1] - arr[i];
        minDiff = min(minDiff, diff);
    }
    cout << minDiff << endl;
    return 0;
}

/*
4 25
226 790 628 528 114 64 239 279 619 39 894 763 763 847 525 93 882 697 999 643 650 244 159 884 190
31
 */