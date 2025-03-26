// link : https://atcoder.jp/contests/abc286/tasks/abc286_a?lang=en
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
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    vector<int> arr(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    for (int i = p, j = r; i <= q && j <= s; i++, j++)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    cout << arr[1];

    for (int i = 2; i <= n; i++)
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