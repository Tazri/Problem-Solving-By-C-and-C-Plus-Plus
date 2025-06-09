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

struct Segment
{
    int l, r;
    int len;
    int i;
    int lb; // lower bound
    int ub; // upper bound
};

void program()
{
    int n;
    cin >> n;
    vector<Segment> arr(n);
    vector<int> ans(n, 0);
    vector<int> filter;
    map<pair<int, int>, int> mp;
    filter.reserve(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].l >> arr[i].r;
        arr[i].i = i;
        arr[i].len = arr[i].r - arr[i].l + 1;
        arr[i].lb = arr[i].l;
        arr[i].ub = arr[i].r;

        mp[{arr[i].l, arr[i].r}]++;
    }

    // sort
    sort(arr.begin(), arr.end(), [](Segment left, Segment right)
         {
            if(left.l != right.l){
                return left.l < right.l;
            } 
            return left.r > right.r; });

    // update upper bound
    multiset<int> st;
    for (Segment &s : arr)
    {
        int right = s.r;
        if (mp[{s.l, s.r}] > 1)
        {
            st.insert(s.r);
        }

        if (st.find(right) != st.end())
        {
            s.ub = right;
            continue;
        }

        auto it = st.upper_bound(s.r);

        if (it == st.end())
        {
            st.insert(s.r);
            continue;
        }

        s.ub = *it;
        st.insert(s.r);
    }

    // sort for lower bound
    sort(arr.begin(), arr.end(), [](Segment left, Segment right)
         {
        if(left.r != right.r){
            return left.r > right.r;
        }

        return left.l < right.l; });

    // update lower bound
    multiset<int> lst;
    for (Segment &s : arr)
    {
        if (mp[{s.l, s.r}] > 1)
        {
            lst.insert(s.l);
        }

        if (lst.find(s.l) != lst.end())
        {
            s.lb = s.l;
            continue;
        }

        auto it = lst.lower_bound(s.l);

        if (it == lst.begin())
        {
            s.lb = s.l;
            lst.insert(s.l);
            continue;
        }

        auto prevIt = prev(it);

        s.lb = *prevIt;
        lst.insert(s.l);
    }

    for (Segment &s : arr)
    {
        int upperLen = s.ub - s.lb + 1;
        int song = upperLen - s.len;

        ans[s.i] = song;
    }

    // cout << "after sort" << endl;
    // for (Segment s : arr)
    // {
    //     cout << s.l << " " << s.r << " ";
    //     cout << "lb : " << s.lb << " ub : " << s.ub << endl;
    // }
    // cout << "------" << endl;

    for (int ai : ans)
        cout << ai << endl;
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