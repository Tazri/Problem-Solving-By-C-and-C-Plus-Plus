// link : https://codeforces.com/problemset/problem/1725/B
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

int getNeed(int p, int d)
{
    int a = (d + p - 1) / p;

    if (d % p == 0)
        a++;
    a--;
    return a;
}

void program()
{
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // sort
    sort(arr.begin(), arr.end(), [](int a, int b)
         { return a < b; });

    int j = n - 1;
    int i = 0;
    int ans = 0;

    while (i <= j)
    {
        int need = getNeed(arr[j], d);

        if (i + need <= j)
        {
            i += need;
            ans++;
        }
        else
        {
            break;
        }
        j--;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}