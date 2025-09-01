// link : https://www.codechef.com/problems/MESO

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
int n;
vector<int> arr(n);
vector<vector<int>> arrs(80000);
int mx = 0;

void mergeSort(int l, int r, int k)
{
    if (l == r)
    {
        mx = max(mx, k);
        arrs[k].push_back(arr[l]);
        return;
    }

    for (int i = l; i <= r; i++)
        arrs[k].push_back(arr[i]);

    int mid = (l + r) / 2;
    mergeSort(l, mid, k * 2);
    mergeSort(mid + 1, r, (k * 2) + 1);
}

void program()
{
    cin >> n;
    arr = vector<int>(n);
    for (int &ai : arr)
        cin >> ai;

    mergeSort(0, n - 1, 1);

    int person = 1;
    for (int i = 1; i <= mx; i++)
    {
        if (arrs[i].size() == 0)
            continue;

        cout << person++ << " person is given with these numbers :";
        for (int i : arrs[i])
            cout << i << ' ';
        cout << endl;
    }

    sort(arr.begin(), arr.end());
    cout << "After Sorting the elements are : ";
    for (int ai : arr)
        cout << ai << ' ';
    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}