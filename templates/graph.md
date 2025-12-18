## Topological sort

```cpp
int n, m;
vector<vector<int>> graph;
vector<int> mark;
vector<int> sortV;
bool isCycle = false;

void dfs(int i)
{
    if (isCycle)
        return;

    if (mark[i] == 2)
        return;

    if (mark[i] == 1)
    {
        isCycle = true;
        return;
    }

    mark[i] = 1;
    for (int to : graph[i])
    {
        dfs(to);
    }
    mark[i] = 2;
    sortV.push_back(i);
}
// after sort reverse the sortV
```
