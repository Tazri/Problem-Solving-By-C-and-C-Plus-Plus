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

int cnt = 0;
void Merge(vector<int> &A, int left, int mid, int right)
{
    int n1 = mid - left;
    int n2 = right - mid;
    vector<int> L(n1 + 1);
    vector<int> R(n2 + 1);

    for (int i = 0; i <= n1 - 1; i++)
        L[i] = A[left + i];

    for (int i = 0; i <= n2 - 1; i++)
        R[i] = A[mid + i];

    L[n1] = INT_MAX;
    R[n2] = INT_MAX;

    int i = 0;
    int j = 0;
    for (int k = left; k <= right - 1; k++)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
            cnt++;
        }
        else
        {
            A[k] = R[j];
            j++;
            cnt++;
        }
    }
}

void Merge_Sort(vector<int> &A, int left, int right)
{
    if (left + 1 < right)
    {
        int mid = (left + right) / 2;
        Merge_Sort(A, left, mid);
        Merge_Sort(A, mid, right);
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

    Merge_Sort(arr, 0, n);

    cout << arr[0];
    for (int i = 1; i < arr.size(); i++)
        cout << " " << arr[i];
    cout << endl;
    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}

/*
n1 = mid - left;
  n2 = right - mid;
  create array L[0...n1], R[0...n2]
  for i = 0 to n1-1
    do L[i] = A[left + i]
  for i = 0 to n2-1
    do R[i] = A[mid + i]
  L[n1] = SENTINEL
  R[n2] = SENTINEL
  i = 0;
  j = 0;
  for k = left to right-1
    if L[i] <= R[j]
      then A[k] = L[i]
           i = i + 1
      else A[k] = R[j]
           j = j + 1


*/