// link : https://codeforces.com/problemset/problem/22/A
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

    int mn = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (i == 0)
            mn = arr[i];
        else
            mn = min(arr[i], mn);
    }

    bool isSmnSet = false;
    int smn = -1;

    for (int ai : arr)
    {
        if (ai == mn)
            continue;

        if (isSmnSet == false)
        {
            isSmnSet = true;
            smn = ai;
        }
        else
        {
            smn = min(smn, ai);
        }
    }

    if (isSmnSet == false)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << smn << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}