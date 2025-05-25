// link : https://codeforces.com/problemset/problem/1154/A
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
    vector<int> arr(4);

    for (int i = 0; i < 4; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int a = arr[3] - arr[0];
    int b = arr[3] - arr[1];
    int c = arr[3] - arr[2];

    cout << a << " " << b << " " << c << " " << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}