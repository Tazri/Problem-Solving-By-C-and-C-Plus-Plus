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
    cin >> n;
    vector<int> freq(n + 1, 0);
    freq[0] = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int ai;
        cin >> ai;
        freq[ai]++;
    }

    vector<int> arr;
    arr.reserve(n + 1);

    for (int fi : freq)
    {
        if (fi)
            arr.push_back(fi);
    }

    sort(arr.rbegin(), arr.rend());

    int sec = arr.size();

    int rm = sec;
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = max(0, arr[i] - rm);
        rm--;
    }

    reverse(arr.begin(), arr.end());
    vector<int> last;
    last.reserve(arr.size());
    int sum = 0;
    for (int ai : arr)
        if (ai)
        {
            last.emplace_back(ai);
            sum += ai;
        }

    int gone = 0;
    int d = last.size() + 1;
    for (int i = 0; i < last.size(); i++)
    {
        last[i] -= gone;

        while (last[i] <= 0)
            continue;

        while (last[i])
        {
            last[i]--;
            gone++;
            sum = max(sum - d, 0);

            if (sum == 0)
                break;
        }
        if (sum == 0)
            break;
        d--;
    }

    cout << gone + sec << endl;
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