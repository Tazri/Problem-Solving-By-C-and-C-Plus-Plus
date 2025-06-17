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

// merge function
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

void mergeSort(vector<int> &arr, int start, int end)
{
    if (start == end)
    {
        return;
    }

    int mid = (start + end) / 2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    // now merge both
    merge(arr, start, mid, mid + 1, end);
}

void program()
{
    vector<int> arr;
    arr.reserve(100000);

    int ai;
    while (cin >> ai)
        arr.push_back(ai);

    mergeSort(arr, 0, arr.size() - 1);

    cout << arr[0];
    for (int i = 1; i < arr.size(); i++)
        cout << " " << arr[i];
    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}