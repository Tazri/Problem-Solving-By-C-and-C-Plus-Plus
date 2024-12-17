// link : https://codeforces.com/problemset/problem/2037/A
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
    int n;

    cin >> n;

    vector<int> arr(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr[a]++;
    }

    int score = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        score += arr[i] / 2;
    }

    cout << score << endl;
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