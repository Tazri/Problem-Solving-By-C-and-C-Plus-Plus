// link : https://codeforces.com/problemset/problem/792/B
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
    vector<int> arr(n + 1);
    vector<int> ans;
    ans.reserve(n);

    for (int i = 1; i <= n; i++)
        arr[i] = i;

    int point = 1;
    for (int i = 0; i < k; i++, n--)
    {
        int count;
        cin >> count;

        int right = n - point;

        if (count < right)
        {
            int del = point + count;
            ans.push_back(arr[del]);
            arr.erase(arr.begin() + del);
            point = del;
        }
        else if (count == right)
        {
            ans.push_back(arr.back());
            arr.pop_back();
            point = 1;
        }
        else
        {
            count -= right;

            if (count % n == 0)
            {
                ans.push_back(arr.back());
                arr.pop_back();
                point = 1;
            }
            else
            {
                int del = count % n;
                ans.push_back(arr[del]);
                arr.erase(arr.begin() + del);
                point = del;
            }
        }
    }

    cout << ans[0];
    for (int i = 1; i < ans.size(); i++)
    {
        cout << " " << ans[i];
    }
    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}