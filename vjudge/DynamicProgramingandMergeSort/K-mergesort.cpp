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
vector<int> arr;
vector<vector<int>> answers(10000 + 1, vector<int>());
int mxi = 0;
// my horrible merge sort function
void merge(vector<int> &arr, int leftStart, int leftEnd, int rightStart, int rightEnd)
{
    int leftLen = leftEnd - leftStart + 1;
    int rightLen = rightEnd - rightStart + 1;
    vector<int> sortedArr;
    sortedArr.reserve(leftLen + rightLen);

    int li = leftStart;
    int ri = rightStart;

    while (li <= leftEnd && ri <= rightEnd)
    {
        if (arr[ri] < arr[li])
            sortedArr.push_back(arr[ri++]);
        else if (arr[li] < arr[ri])
            sortedArr.push_back(arr[li++]);
        else if (arr[li] == arr[ri])
        {
            sortedArr.push_back(arr[li++]);
            sortedArr.push_back(arr[ri++]);
        }
    }

    while (li <= leftEnd)
        sortedArr.push_back(arr[li++]);

    while (ri <= rightEnd)
        sortedArr.push_back(arr[ri++]);

    int si = 0;
    for (int i = leftStart; i <= rightEnd; i++)
    {
        arr[i] = sortedArr[si++];
    }
}

void mergeSort(vector<int> &arr, int start, int end, int i)
{
    for (int k = start; k <= end; k++)
        answers[i].push_back(arr[k]);
    mxi = max(mxi, i);
    if (start == end)
    {
        return;
    }

    int mid = (start + end) / 2;

    mergeSort(arr, start, mid, i * 2);
    mergeSort(arr, mid + 1, end, i * 2 + 1);

    // now merge both
    merge(arr, start, mid, mid + 1, end);
}

void program()
{
    cin >> n;
    arr = vector<int>(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(arr, 0, n - 1, 1);
    for (int i = 1; i <= mxi; i++)
    {
        cout << i << " person is given with these numbers :";
        for (int j = 0; j < answers[i].size(); j++)
            cout << answers[i][j] << ' ';
        cout << endl;
    }

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