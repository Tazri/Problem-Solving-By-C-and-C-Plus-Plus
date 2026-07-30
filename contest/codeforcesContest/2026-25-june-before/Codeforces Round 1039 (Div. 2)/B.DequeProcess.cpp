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
    string ans;
    ans.reserve(n);
    vector<int> perm;
    perm.reserve(n);

    for (int &ai : arr)
        cin >> ai;

    int l = 0;
    int r = n - 1;
    bool bigTime = true;
    while (l <= r)
    {
        if (bigTime)
        {
            if (arr[l] > arr[r])
            {
                ans.push_back('L');
                l++;
            }
            else
            {
                ans.push_back('R');
                r--;
            }
        }
        else
        {
            if (arr[l] < arr[r])
            {
                ans.push_back('L');
                l++;
            }
            else
            {
                ans.push_back('R');
                r--;
            }
        }
        bigTime = !bigTime;
    }
    cout << ans << endl;
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