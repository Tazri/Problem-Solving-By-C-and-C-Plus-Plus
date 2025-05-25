// link : https://www.spoj.com/problems/SORT2D/en/
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
    scanf("%d", &n);
    getchar();
    vector<pair<int, int>> arr(n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr[i].first, &arr[i].second);
        getchar();
    }

    sort(arr.begin(), arr.end(), [](pair<int, int> a, pair<int, int> b)
         {
        if(a.first == b.first)return a.second > b.second;
        return a.first < b.first; });

    for (pair<int, int> p : arr)
    {
        printf("%d %d\n", p.first, p.second);
    }
}

int main()
{
    optimize();
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
        program();
    return 0;
}