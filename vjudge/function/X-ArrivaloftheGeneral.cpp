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

    cin >> arr[0];
    int mn = arr[0];
    int mx = arr[0];
    int mi = 0;
    int xi = 0;

    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] <= mn)
        {
            mn = arr[i];
            mi = i;
        }

        if (arr[i] > mx)
        {
            xi = i;
            mx = arr[i];
        }
    }

    int cnt = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == mn)
            break;
        cnt++;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == mx)
            break;
        cnt++;
    }

    if (mi < xi)
        cnt--;

    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}