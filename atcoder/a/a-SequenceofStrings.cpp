// link : https://atcoder.jp/contests/abc284/tasks/abc284_a?lang=en
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
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    reverse(arr.begin(), arr.end());

    cout << arr[0] << endl;

    for (int i = 1; i < n; i++)
        cout << arr[i] << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}