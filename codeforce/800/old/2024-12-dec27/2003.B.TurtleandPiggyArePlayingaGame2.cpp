// link : https://codeforces.com/problemset/problem/2003/B
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

void printVector(vector<int> arr)
{
    cout << "[ " << arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        cout << " | " << arr[i];
    }

    cout << " ]" << endl;
}

void test()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sort
    sort(arr.begin(), arr.end(), [](int a, int b)
         { return a < b; });
    // printVector(arr);

    int midIndex = ceil((n * 1.0) / 2) - 1;

    if (n & 1)
    {
        cout << arr[midIndex] << endl;
    }
    else
    {
        cout << arr[midIndex + 1] << endl;
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