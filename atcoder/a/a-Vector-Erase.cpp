// link : https://atcoder.jp/contests/arc087/tasks/arc087_a?lang=en
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

    int p;
    cin >> p;
    p--;

    arr.erase(arr.begin() + p);

    int l, r;
    cin >> l >> r;
    l--;
    r--;

    arr.erase(arr.begin() + l, arr.begin() + r);

    cout << arr.size() << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        if (i == 0)
            cout << arr[i];
        else
            cout << " " << arr[i];
    }
    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}