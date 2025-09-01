// link : https://www.hackerrank.com/contests/launchpad-1-winter-challenge/challenges/binary-search-basic/problem
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

    for (int &ai : arr)
        cin >> ai;

    int k;
    cin >> k;

    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == k)
        {
            cout << mid << endl;
            return;
        }

        if (arr[mid] < k)
            l = mid + 1;
        else
            r = mid - 1;
    }

    cout << -1 << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}