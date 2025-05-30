// link : https://codeforces.com/problemset/problem/764/B
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

    int fi = 0;
    int li = n - 1;
    while (fi < li)
    {
        int temp = arr[fi];
        arr[fi] = arr[li];
        arr[li] = temp;
        fi += 2;
        li -= 2;
    }
    cout << arr[0];
    for (int i = 1; i < n; i++)
        cout << " " << arr[i];
    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}