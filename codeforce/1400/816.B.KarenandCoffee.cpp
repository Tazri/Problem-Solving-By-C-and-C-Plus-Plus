// link : https://codeforces.com/problemset/problem/816/B
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
    vector<int> arr(200000 + 1);
    int n, k, q;
    cin >> n >> k >> q;
    for (int i = 0; i < n; i++)
    {
        int li, ri;
        cin >> li >> ri;
        arr[li]++;
        arr[ri + 1]--;
    }

    for (int i = 1; i < arr.size(); i++)
        arr[i] += arr[i - 1];

    for (int i = 1; i < arr.size(); i++)
        if (arr[i] >= k)
            arr[i] = 1;
        else
            arr[i] = 0;

    for (int i = 1; i < arr.size(); i++)
        arr[i] += arr[i - 1];

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int cnt = arr[r] - arr[l - 1];

        cout << cnt << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}