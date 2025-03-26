// link : https://codeforces.com/problemset/problem/1998/B
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

    if (n == 1)
    {
        int temp;
        cin >> temp;
        cout << temp << endl;
        return;
    }

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // shift the array to left
    int first = arr[0];

    for (int i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    arr[n - 1] = first;

    cout << arr[0];

    for (int i = 1; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
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