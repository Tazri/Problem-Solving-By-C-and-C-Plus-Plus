
// link : https://acm.timus.ru/problem.aspx?space=1&num=1005
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

vector<int> arr;
int mn = 0;
int p1 = 0;
int p2 = 0;

void solve(int i)
{
    if (i >= arr.size())
    {
        int d = p1 > p2 ? p1 - p2 : p2 - p1;
        mn = min(mn, d);
        return;
    }

    p1 += arr[i];
    solve(i + 1);
    p1 -= arr[i];
    p2 += arr[i];
    solve(i + 1);
    p2 -= arr[i];
}

void program()
{
    int n;
    cin >> n;
    arr = vector<int>(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mn += arr[i];
    }
    solve(0);

    cout << mn << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}