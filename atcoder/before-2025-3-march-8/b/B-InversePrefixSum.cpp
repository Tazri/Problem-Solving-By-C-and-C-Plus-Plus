// link : https://atcoder.jp/contests/abc280/tasks/abc280_b?lang=en
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
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum = arr[0];

    for (int i = 1; i < n; i++)
    {
        int next = arr[i] - sum;
        arr[i] = next;
        sum += next;
    }

    cout << arr[0];
    for (int i = 1; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
    return 0;
}