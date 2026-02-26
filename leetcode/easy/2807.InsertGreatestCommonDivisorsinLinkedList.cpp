// link : https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/description/
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

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *insertGreatestCommonDivisors(ListNode *head)
    {
        ListNode *prev = head;

        while (prev->next != nullptr)
        {
            int g = gcd(prev->val, prev->next->val);
            ListNode *d = new ListNode(g);
            d->next = prev->next;
            prev->next = d;
            prev = d->next;
        }

        return head;
    }
};

void program()
{
}

int32_t main()
{
    optimize();
    program();
    return 0;
}