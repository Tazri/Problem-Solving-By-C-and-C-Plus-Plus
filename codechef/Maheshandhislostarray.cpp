// link : https://vjudge.net/problem/CodeChef-ANUMLA/origin
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

vector<int> sums;
vector<int> arr;
int sum = 0;

void pv(vector<int> v)
{
    for (int vi : v)
        cout << vi << " ";
    cout << endl;
}

void calSums(int i)
{
    if (i >= arr.size())
    {
        sums.push_back(sum);
        return;
    }

    sum += arr[i];
    calSums(i + 1);
    sum -= arr[i];
    calSums(i + 1);
}

int twoPowerN(int n)
{
    int ans = 1;
    for (int i = 0; i < n; i++)
        ans *= 2;
    return ans;
}

void program()
{
    int n;
    cin >> n;
    vector<int> ans; // forget to remove it -_-
    ans.reserve(n);
    sum = 0;
    sums.clear();
    multiset<int> allSum;

    int total = twoPowerN(n);

    for (int i = 0; i < total; i++)
    {
        int s;
        cin >> s;
        allSum.insert(s);
    }

    // remove 0
    allSum.erase(allSum.find(0));

    while (allSum.size() > 0)
    {
        // get the minium value
        multiset<int>::iterator it = allSum.begin();
        int mn = *it;

        calSums(0);

        for (int si : sums)
        {
            int rm = si + mn;

            allSum.erase(allSum.find(rm));
        }

        arr.push_back(mn);
        sums.clear();
    }

    cout << arr[0];
    for (int i = 1; i < arr.size(); i++)
        cout << " " << arr[i];
    cout << endl;

    arr.clear();
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
