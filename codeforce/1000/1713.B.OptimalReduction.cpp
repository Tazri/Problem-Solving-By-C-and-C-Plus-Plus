// link : https://codeforces.com/problemset/problem/1713/B
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
    int li = 1;
    cin >> arr[0];

    for (int i = 1; i < n; i++)
    {
        int ai;
        cin >> ai;

        if (arr[li - 1] != ai)
        {
            arr[li++] = ai;
        }
    }

    li--;

    if (li == 0)
    {
        cout << "YES" << endl;
        return;
    }

    bool isDecending = true;
    bool isAcending = true;

    for (int i = 1; i <= li; i++)
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

    if (isAcending || isDecending)
    {
        cout << "YES" << endl;
        return;
    }

    int pl = 0;

    for (int i = 1; i <= li; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            pl = i - 1;
            break;
        }
    }

    int rl = 0;
    for (int i = li; i > 0; i--)
    {
        if (arr[i - 1] < arr[i])
        {
            rl = i;
            break;
        }
    }

    if (rl == pl)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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