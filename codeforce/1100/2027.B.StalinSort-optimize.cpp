// link : https://codeforces.com/problemset/problem/2027/B
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

struct num
{
    int v;
    int i;
    int cnt;
};

vector<num> arr;
void merge(int left_start, int left_end, int right_start, int right_end)
{
    int n = right_end - left_start + 1;

    vector<num> cp;
    cp.reserve(n);

    int li = left_start;
    int ri = right_start;
    int cnt = 0;
    while (li <= left_end && ri <= right_end)
    {
        if (arr[li].v > arr[ri].v)
        {
            arr[li].cnt += cnt;
            cp.push_back(arr[li]);
            li++;
        }
        else if (arr[li].v < arr[ri].v)
        {
            cp.push_back(arr[ri]);
            cnt++;
            ri++;
        }
        else if (arr[li].v == arr[ri].v)
        {

            arr[li].cnt += cnt;
            cp.push_back(arr[li]);
            li++;
        }
    }

    while (li <= left_end)
    {
        arr[li].cnt += cnt;
        cp.push_back(arr[li]);
        li++;
    }

    while (ri <= right_end)
    {
        cp.push_back(arr[ri]);
        ri++;
    }

    int ti = 0;
    for (int i = left_start; i <= right_end; i++)
    {
        arr[i] = cp[ti++];
    }
}

void merge_sort(int start, int end)
{
    if (start >= end)
        return;

    int left_start = start;
    int left_end = (start + end) / 2;
    int right_start = left_end + 1;
    int right_end = end;

    merge_sort(left_start, left_end);
    merge_sort(right_start, right_end);
    merge(left_start, left_end, right_start, right_end);
}

void program()
{
    int n;
    cin >> n;
    arr = vector<num>(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].v;
        arr[i].i = i;
        arr[i].cnt = 0;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (arr[i].v < arr[j].v)
    //         {
    //             arr[i].cnt++;
    //         }
    //     }
    // }

    merge_sort(0, n - 1);

    int mn = n - 1;

    for (int i = 0; i < n; i++)
    {
        int d = arr[i].cnt + arr[i].i;
        mn = min(d, mn);
    }

    cout << mn << endl;
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