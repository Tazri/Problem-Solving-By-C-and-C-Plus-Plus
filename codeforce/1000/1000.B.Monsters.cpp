// link :https://codeforces.com/problemset/problem/1849/B
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
    vector<int> arr(n + 1, 0);
    vector<int> mod(n + 1, 0);
    vector<int> ans(n);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];

        if (arr[i] % k == 0)
            mod[i] = k;
        else if (arr[i] < k)
            mod[i] = arr[i];
        else
            mod[i] = arr[i] % k;
        ans[i - 1] = i;
    }

    // sort
    sort(ans.begin(), ans.end(), [&arr, &mod](int a, int b)
         {
            if(mod[a] == mod[b]){
                if(arr[a] == arr[b]){
                    return a < b;
                }
                return a < b;
            } 
            return mod[a] > mod[b]; });

    cout << ans[0];
    for (int i = 1; i < n; i++)
    {
        cout << " " << ans[i];
    }
    cout << endl;
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