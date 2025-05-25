// link : https://codeforces.com/problemset/problem/34/B
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
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());

    int money = 0;

    for (int i = 0; i < m; i++)
        if (arr[i] < 0)
            money -= arr[i];

    cout << money << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}