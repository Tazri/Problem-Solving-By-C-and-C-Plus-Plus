// link : https://codeforces.com/problemset/problem/1992/A
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

void test()
{
    vector<int> arr(3);
    cin >> arr[0] >> arr[1] >> arr[2];

    sort(arr.begin(), arr.end(), [](int a, int b)
         { return a < b; });

    for (int i = 0; i < 5; i++)
    {
        arr[0]++;
        sort(arr.begin(), arr.end(), [](int a, int b)
             { return a < b; });
    }

    int num = arr[0] * arr[1] * arr[2];
    cout << num << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}