// link : https://www.codechef.com/problems/MAKEMONEY
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
    int n, x, c;

    cin >> n >> x >> c;

    vector<int> arr(n);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    int cost = 0;
    int mx = sum;
    sort(arr.begin(), arr.end());

    for (int ai : arr)
    {
        sum -= ai;
        sum += x;
        sum -= c;
        mx = max(mx, sum);
    }

    cout << mx << endl;
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