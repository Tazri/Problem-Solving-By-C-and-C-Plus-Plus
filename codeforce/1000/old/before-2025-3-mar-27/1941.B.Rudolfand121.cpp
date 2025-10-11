// link : https://codeforces.com/problemset/problem/1941/B
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

    int li = 1;
    int ri = n - 2;

    while (li <= ri)
    {
        // try left first
        if (arr[li - 1] > 0)
        {
            int l = arr[li - 1];

            arr[li - 1] -= l;
            arr[li] -= 2 * l;
            arr[li + 1] -= l;

            if (arr[li - 1] < 0 || arr[li] < 0 || arr[li + 1] < 0)
            {
                cout << "NO" << endl;
                return;
            }
        }

        if (arr[ri + 1] > 0)
        {
            int r = arr[ri + 1];
            arr[ri + 1] -= r;
            arr[ri] -= r * 2;
            arr[ri - 1] -= r;

            if (arr[ri] < 0 || arr[ri - 1] < 0 || arr[ri + 1] < 0)
            {
                cout << "NO" << endl;
                return;
            }
        }

        li++;
        ri--;
    }

    // check all is 0

    for (int ai : arr)
    {
        if (ai)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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