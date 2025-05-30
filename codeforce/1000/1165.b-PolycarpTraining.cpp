// link : https://codeforces.com/problemset/problem/1165/B
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
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int sum = 0;
    int day = 1;

    for (int p : arr)
    {
        if (p >= day)
        {
            sum += day;
            day++;
        }
    }

    cout << day - 1 << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}