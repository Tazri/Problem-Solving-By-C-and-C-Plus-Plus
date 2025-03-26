// link : https://codeforces.com/problemset/problem/1675/B
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

bool isOk(vector<int> &arr)
{
    int increaseFound = 0;

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i - 1] < arr[i])
            increaseFound++;
        else if (arr[i - 1] >= arr[i])
            return false;
    }

    if (increaseFound)
        return true;
    else
        return false;
}

void test()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    if (isOk(arr))
    {
        cout << 0 << endl;
        return;
    }

    // now divide it
    int op = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
            continue;

        while (arr[i] >= arr[i + 1])
        {
            if (arr[i] <= 0)
                break;
            arr[i] /= 2;
            op++;
        }
    }

    if (isOk(arr))
    {
        cout << op << endl;
    }
    else
    {
        cout << -1 << endl;
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