// link : https://codeforces.com/contest/1108/problem/B
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
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), [](int a, int b)
         { return a < b; });

    int x = arr[n - 1];
    vector<bool> marked(x + 1, false);

    marked[x] = true;
    int y = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (x % arr[i] == 0 && marked[arr[i]] != true)
        {
            marked[arr[i]] = true;
        }
        else
        {
            y = arr[i];
        }
    }

    cout << x << " " << y << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}