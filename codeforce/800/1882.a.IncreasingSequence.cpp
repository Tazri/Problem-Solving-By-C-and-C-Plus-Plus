// link : https://codeforces.com/problemset/problem/1882/A
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

    arr[0] = arr[0] == 1 ? 2 : 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= arr[i - 1])
        {
            arr[i] = arr[i - 1] + 1;
        }
        else
        {
            if (arr[i - 1] + 1 == arr[i])
            {
                arr[i]++;
            }
            else
            {
                arr[i] = arr[i - 1] + 1;
            }
        }
    }

    cout << arr[arr.size() - 1] << endl;
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