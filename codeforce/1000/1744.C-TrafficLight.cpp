// link : https://codeforces.com/problemset/problem/1744/C
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
    char c;
    string s;
    cin >> n >> c;
    cin >> s;

    if (c == 'g')
    {
        cout << 0 << endl;
        return;
    }

    vector<int> arr(n);
    int first_g = -1;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'g')
        {
            first_g = i;
            break;
        }
    }

    if (s[n - 1] == 'g')
        arr[n - 1] = 0;
    else
        arr[n - 1] = first_g + 1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (s[i] == 'g')
            arr[i] = 0;
        else
            arr[i] = arr[i + 1] + 1;
    }

    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == c)
        {
            mx = max(arr[i], mx);
        }
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