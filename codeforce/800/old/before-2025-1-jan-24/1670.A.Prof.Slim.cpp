// link : https://codeforces.com/problemset/problem/1670/A
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

void test()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int neg = 0;
    int pos = 0;
    bool isSorted = true;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
        {
            neg++;
        }
        else
        {
            pos++;
        }

        if (i == 0)
            continue;
        if (arr[i - 1] > arr[i])
        {
            isSorted = false;
        }
    }

    if (isSorted)
    {
        cout << "YES" << endl;
        return;
    }

    int negChange = 0;
    for (int i = 0; i < neg; i++)
    {
        if (arr[i] > 0)
        {
            arr[i] = arr[i] * -1;
            negChange++;
        }
    }

    int posChange = 0;
    for (int i = 0, ai = n - 1; i < pos; i++, ai--)
    {
        if (arr[ai] < 0)
        {
            arr[ai] = arr[ai] * -1;
            posChange++;
        }
    }

    if (negChange != posChange)
    {
        cout << "NO" << endl;
        return;
    }

    // now see it sorted or not
    isSorted = true;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            isSorted = false;
            break;
        }
    }

    if (isSorted)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}