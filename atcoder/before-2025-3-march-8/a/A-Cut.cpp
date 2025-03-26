// link : https://atcoder.jp/contests/abc368/tasks/abc368_a?lang=en
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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int s = n - k;
    cout << arr[s];
    for (int i = s + 1; i < n; i++)
    {
        cout << " " << arr[i];
    }
    for (int i = 0; i < s; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}