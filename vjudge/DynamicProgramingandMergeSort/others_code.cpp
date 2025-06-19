#include <bits/stdc++.h>
using namespace std;
vector<int> v[30000];
void merg(int l, int r, int *a)
{
    int mid = (l + r) / 2;
    int i = l, j = mid + 1;
    vector<int> tmp;
    while (i <= mid and j <= r)
    {
        if (a[i] <= a[j])
        {
            tmp.push_back(a[i]);
            i++;
        }
        else
        {
            tmp.push_back(a[j]);
            j++;
        }
    }
    while (i <= mid)
        tmp.push_back(a[i++]);
    while (j <= r)
        tmp.push_back(a[j++]);
    for (int it : tmp)
        a[l++] = it;
}
void fun(int l, int r, int *a, int key)
{
    for (int i = l; i <= r; i++)
        v[key].push_back(a[i]);
    if (l == r)
        return;
    int mid = (l + r) / 2;
    fun(l, mid, a, key * 2);
    fun(mid + 1, r, a, key * 2 + 1);
    merg(l, r, a);
}
signed main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    fun(0, n - 1, a, 1);
    int person = 1;
    for (int i = 0; i < 30000; i++)
    {
        if (v[i].empty())
            continue;
        cout << person << " person is given with these numbers :";
        person++;
        for (auto it : v[i])
            cout << it << ' ';
    }
    cout << "After Sorting the elements are : ";
    for (auto it : a)
        cout << it << ' ';
    cout << endl;
    return 0;
}