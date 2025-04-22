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
    vector<int> arr(3);
    cin >> arr[0] >> arr[1] >> arr[2];

    sort(arr.begin(), arr.end());

    int ans = arr[1] + arr[2];

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}