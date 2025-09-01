// link : https://codeforces.com/problemset/problem/1593/C
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
    int n, k;
    cin >> n >> k;
    vector<int> arr(k);

    for (int &ai : arr)
        cin >> ai;

    sort(arr.begin(), arr.end(), [](int a, int b)
         { return a > b; });

    int cat = 0;
    int cnt = 0;
    for (int ai : arr)
    {
        if (cat >= ai)
            break;

        int d = n - ai;
        cnt++;
        cat += d;
    }

    cout << cnt << endl;
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