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
    cin >> arr[0];
    int mn = arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        mn = min(arr[i], mn);
    }

    if (n <= 2)
    {
        cout << "YES" << endl;
        return;
    }
    // is sorted
    bool isDecending = true;
    bool isAcending = true;
    int ai = 0;
    int di = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            isAcending = false;
        }

        if (arr[i - 1] < arr[i])
        {
            isDecending = false;
        }
    }

    if (isDecending || isAcending)
    {
        cout << "YES" << endl;
        return;
    }
}

int main()
{
    optimize();
    // int t;
    // cin >> t;
    // while (t--)
    program();
    return 0;
}