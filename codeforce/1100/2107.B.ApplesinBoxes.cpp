// link : https://codeforces.com/problemset/problem/2107/B
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

int d(int a, int b)
{
    return a > b ? a - b : b - a;
}

void program()
{
    int n, k;
    cin >> n >> k;
    bool isOdd = false;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] & 1)
        {
            isOdd = !isOdd;
        }
    }

    vector<int>::iterator it = max_element(arr.begin(), arr.end());
    *it = (*it) - 1;
    int mx = *max_element(arr.begin(), arr.end());
    int mn = *min_element(arr.begin(), arr.end());

    if (mx - mn > k)
    {
        cout << "Jerry" << endl;
        return;
    }

    if (isOdd)
    {
        cout << "Tom" << endl;
    }
    else
    {
        cout << "Jerry" << endl;
    }
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