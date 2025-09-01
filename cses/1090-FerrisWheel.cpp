// link : https://cses.fi/problemset/submit/1090/
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
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int cnt = 0;
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        if (left == right)
        {
            cnt++;
            left++;
            right--;
            continue;
        }

        int sum = arr[left] + arr[right];
        if (sum <= x)
        {
            left++;
            right--;
            cnt++;
            continue;
        }

        cnt++;
        right--;
    }

    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}