// link : https://www.hackerrank.com/challenges/cpp-lower-bound/problem
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

    int q;
    cin >> q;

    while (q--)
    {
        int qi;
        cin >> qi;

        auto it = lower_bound(arr.begin(), arr.end(), qi);

        int index = it - arr.begin();

        if (*it == qi)
        {
            cout << "Yes" << " " << index + 1 << endl;
            continue;
        }
        cout << "No" << " " << index + 1 << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}