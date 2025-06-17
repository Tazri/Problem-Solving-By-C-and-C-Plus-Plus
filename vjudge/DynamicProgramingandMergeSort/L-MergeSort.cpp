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

void Merge(vector<int> &A, int left, int mid, int right)
{
    int n1 = mid - left;
    int n2 = right - mid;

    vector<int> L(n1);
    vector<int> R(n2);

    for (int i = 0; i <= n1; i++)
    {
        L[i] = A[left + i];
    }

    for (int li : L)
        cout << li << " ";
    cout << endl;

    for (int i = 0; i <= n2; i++)
        R[i] = A[mid + i + 1];

    int i = 0;
    int j = 0;
    for (int k = left; k <= right; k++)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i = i + 1;
        }
        else
        {
            A[k] = R[j];
            j = j + 1;
        }
    }
}

void Merge_Sort(vector<int> &A, int left, int right)
{
    if (left + 1 < right)
    {
        int mid = (left + right) / 2;
        Merge_Sort(A, left, mid);
        Merge_Sort(A, mid + 1, right);
        Merge(A, left, mid, right);
    }
}

void program()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Merge_Sort(arr, 0, n - 1);
    Merge(arr, 0, 4, 6);
    cout << arr[0];
    for (int i = 1; i < n; i++)
        cout << " " << arr[i];
    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}