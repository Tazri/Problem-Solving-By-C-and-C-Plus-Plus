// link : https://codeforces.com/group/isP4JMZTix/contest/379072/problem/E
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

int ub(vector<int> &arr, int x)
{
    return upper_bound(arr.begin(), arr.end(), x) - arr.begin();
}

void program()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int &ai : arr)
        cin >> ai;
    sort(arr.begin(), arr.end());

    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;

        int index = ub(arr, x);

        cout << index << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}