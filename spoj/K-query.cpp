// link  : https://www.spoj.com/problems/KQUERY/en/
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
vector<vector<int>> arrs(30000 * 5 + 123, vector<int>());
int n;

int ub(vector<int> &a, int k)
{

    int left = 0;
    int right = a.size() - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (a[mid] <= k)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return left;
}

int countKGreater(vector<int> &a, int k)
{
    int u = ub(a, k);

    if (u >= a.size())
        return 0;

    if (u == 0)
        return a.size();

    int cnt = (a.size() - 1) - u + 1;
    return cnt;
}

// build tree
void merge(int left, int right)
{
    int mid = (left + right) / 2;
    vector<int> leftArr;
    vector<int> rightArr;

    for (int i = left; i <= mid; i++)
        leftArr.push_back(arr[i]);

    for (int i = mid + 1; i <= right; i++)
        rightArr.push_back(arr[i]);

    int li = 0;
    int ri = 0;
    int i = left;
    while (li < leftArr.size() && ri < rightArr.size())
    {
        if (leftArr[li] <= rightArr[ri])
            arr[i++] = leftArr[li++];
        else if (rightArr[ri] < leftArr[li])
            arr[i++] = rightArr[ri++];
    }

    while (li < leftArr.size())
        arr[i++] = leftArr[li++];

    while (ri < rightArr.size())
        arr[i++] = rightArr[ri++];
}

void mergeSort(int left, int right, int k)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeSort(left, mid, k * 2 + 1);
        mergeSort(mid + 1, right, k * 2 + 2);

        // sort
        merge(left, right);
    }

    // sort done
    for (int i = left; i <= right; i++)
        arrs[k].push_back(arr[i]);
}

int query(int l, int r, int ql, int qr, int val, int k)
{
    if (r < ql || qr < l)
        return 0;

    if (ql <= l && r <= qr)
    {
        int cnt = countKGreater(arrs[k], val);
        return cnt;
    }

    int mid = (l + r) / 2;

    return query(l, mid, ql, qr, val, k * 2 + 1) + query(mid + 1, r, ql, qr, val, k * 2 + 2);
}
void program()
{
    cin >> n;
    arr = vector<int>(n);
    for (int &ai : arr)
        cin >> ai;

    mergeSort(0, n - 1, 1);

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int l, r, val;
        cin >> l >> r >> val;
        int cnt = query(0, n - 1, --l, --r, val, 1);
        cout << cnt << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}