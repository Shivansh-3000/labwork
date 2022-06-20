#include <bits/stdc++.h>
#define INF INT_MAX
using namespace std;

void dfs(int s, vector<int> vis, vector<int> adj[])
{
    cout << s << " ";
    vis[s] = 1;
    for (int i = 0; i < adj[s].size(); i++)
    {
        if (vis[adj[s][i]] == 0)
            dfs(adj[s][i], vis, adj);
    }
}

void bipetrete()
{
    int v;
    cin >> v;
    vector<vector<int>> arr(v + 1, vector<int>(v + 1));
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cin >> arr[i + 1][j + 1];
        }
    }
    vector<int> vis(v + 1);
    for (int i = 0; i < v + 1; i++)
    {
        vis[i] = -1;
    }
    int s;
    cin >> s;
    queue<int> q;
    int flag = 0;
    q.push(s);
    vis[s] = 0;

    while (!q.empty())
    {
        int a = q.front();
        int k = vis[a];
        for (int i = 0; i < arr[a].size(); i++)
        {
            if (arr[a][i] == 1)
            {
                int keep = vis[i];
                if (vis[i] == -1)
                {
                    vis[i] = abs(1 - k);
                    q.push(i);
                }
                else if (keep == k)
                {
                    cout << "Not a biperte graph\n";
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1)
            break;
        q.pop();
    }
    if (flag == 0)
        cout << "It is a biperte graph\n";
}

void dijikstra()
{

    int m, n, e1, e2, w;
    cin >> n >> m;
    vector<pair<int, int>> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        cin >> e1 >> e2 >> w;
        adj[e1].push_back({e2, w});
    }

    int sta;
    cin >> sta;
    vector<int> dist(n + 1);
    vector<int> vis(n + 1);
    for (int i = 0; i < n + 1; i++)
    {
        dist[i] = INT_MAX;
    }
    set<pair<int, int>> st;
    st.insert({0, sta});
    dist[sta] = 0;
    while (st.size() > 0)
    {
        // cout<<st.size()<<" ";
        auto temp = *st.begin();
        int d = temp.first;
        int child = temp.second;
        st.erase(st.begin());
        if (vis[child])
            continue;
        vis[child] = 1;
        // cout<<"YES ";
        for (auto it : adj[child])
        {
            int d1 = it.second;
            int child1 = it.first;
            // cout << child << " " << child1 << " ";
            //  cout<<d1<<" "<<dist[child1]<<"\n";
            if (dist[child] + d1 < dist[child1])
            {
                dist[child1] = d1 + dist[child];
                // cout<<child<<" "<<d1<<" "<<child1<<" \n";
                st.insert({dist[child1], child1});
            }
        }
    }
    // cout<<"YES ";
    for (int i = 0; i < n + 1; i++)
    {
        cout << dist[i] << " ";
    }
}

void floyd()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];
    vector<vector<int>> dis(n + 1, vector<int>(n + 1));
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (i == j)
                dis[i][j] = 0;
            else
                dis[i][j] = INF;
        }
    }
    int e1, e2, w;
    for (int i = 0; i < m; i++)
    {
        cin >> e1 >> e2 >> w;
        dis[e1][e2] = w;
    }

    for (int k = 1; k < n + 1; k++)
    {
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                if (dis[i][k] != INF && dis[k][j] != INF)
                    dis[i][j] = min(dis[i][j], (dis[i][k] + dis[k][j]));
            }
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            cout << dis[i][j] << " ";
        }
        cout << "\n";
    }
}

class node
{
public:
    int u, v, w;
    node *next;
};

void bellmanford()
{
    int n, m;
    cin >> n >> m;
    int e1, e2, wt;
    node *head = NULL;
    node *ptr = NULL;
    vector<int> dis(n + 1);
    vector<int> parent(n + 1);
    for (int i = 0; i < n + 1; i++)
    {
        dis[i] = INF;
        parent[i] = INF;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> e1 >> e2 >> wt;
        node *temp = new node();
        temp->u = e1;
        temp->v = e2;
        temp->w = wt;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            ptr = temp;
        }
        else
        {
            ptr->next = temp;
            ptr = ptr->next;
        }
    }
    int st;
    cin >> st;
    dis[st] = 0;
    parent[st] = -1;
    for (int i = 0; i < n - 1; i++)
    {
        node *temp = head;
        while (temp != NULL)
        {
            int a = dis[temp->v];
            int b = dis[temp->u];
            b = b + temp->w;
            if ((dis[temp->v]) > (dis[temp->u] + temp->w))
            {
                parent[temp->v] = temp->u;
                dis[temp->v] = (dis[temp->u] + temp->w);
            }
            temp = temp->next;
        }
    }
    node *temp = head;
    while (temp != NULL)
    {
        if (dis[temp->v] > (dis[temp->u] + temp->w))
        {
            cout << "It contains negetive self loop\n";
            return;
        }
        temp = temp->next;
    }
    for (int i = 1; i < n + 1; i++)
    {
        vector<int> v;
        int a = INF;
        int r = i;
        while (a != -1)
        {
            a = parent[r];
            v.push_back(a);
            r = a;
        }
        reverse(v.begin(), v.end());
        v.push_back(i);
        for (int i = 1; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << ":";
        cout << dis[i] << "\n";
    }
}

void prism()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> adj[n + 1];
    int e1, e2, w;
    for (int i = 0; i < m; i++)
    {
        cin >> e1 >> e2 >> w;
        adj[e1].push_back({e2, w});
        adj[e2].push_back({e1, w});
    }
    int key[n + 1];
    bool mst[n + 1];
    int par[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        key[i] = INF;
        mst[i] = 0;
        par[i] = -1;
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 1});
    key[1] = 0;
    for (int count = 0; count < n - 1; count++)
    {
        int u = pq.top().second;
        pq.pop();
        mst[u] = 1;
        for (auto it : adj[u])
        {
            int ed = it.first;
            int wt = it.second;
            if (mst[ed] == 0 && wt < key[ed])
            {
                key[ed] = wt;
                par[ed] = u;
                pq.push({key[ed], ed});
            }
        }
    }
    for (int i = 1; i < n + 1; i++)
        cout << par[i] << " - " << i << " \n";
}

// 6 7
// 1 2 5
// 2 6 -3
// 2 3 -2
// 6 4 1
// 4 3 6
// 4 5 -2
// 3 5 3
// 1

int main()
{
    prism();
}