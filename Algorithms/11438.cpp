//#include"bits/stdc++.h"
//using namespace std;
//
//#define mp make_pair
//#define pb(x) push_back(x)
//#define _upgrade ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
//#define ALL(a) (a.begin()),(a.end())
//#define ZERO(a) memset(a,0,sizeof(a))
//#define MINUS(a) memset(a,0xff,sizeof(a))
//
//typedef pair<int, int> pii;
//typedef tuple<int, int, int> t3;
//typedef tuple<int, int, int, int> t4;
//typedef long long ll;
//typedef double db;
//
//ll gcd(ll a, ll b) {
//    return (a == 0) ? b : gcd(b%a, a);
//}
//
//vector<int> t[100007];
//int p[100007][20] = {0};
//int parent[100007] = {0};
//int depth[100007] = {0};
//bool visited[100007] = {0};
//int l=0;
//
//int lca(int u, int v) {
//    if(depth[u] < depth[v])
//        swap(u, v);
//    for(l=1; (1<<l) <= depth[u]; ++l);
//    l--;
//
//    for(int i=l; i>=0; --i) {
//        if(depth[u] - (1<<i) >= depth[v])
//            u = p[u][i];
//    }
//
//    if(u == v) return u;
//    else {
//        for(int i=l; i>=0; --i) {
//            if(p[u][i] != 0 && p[u][i] != p[v][i]) {
//                u = p[u][i];
//                v = p[v][i];
//            }
//        }
//        return parent[u];
//    }
//}
//
//void bfs(int now) {
//    queue<int> q;
//    visited[now] = true;
//    q.push(now);
//    while(!q.empty()) {
//        int now = q.front();
//        q.pop();
//
//        for(int i=0; i<t[now].size(); ++i) {
//            if(visited[t[now][i]]) continue;
//            visited[t[now][i]] = true;
//            parent[t[now][i]] = now;
//            depth[t[now][i]] = depth[now] + 1;
//            q.push(t[now][i]);
//        }
//    }
//}
//
//int main() {
//    _upgrade;
//    int N, M;
//    cin >> N;
//    for(int i=1; i<N; ++i) {
//        int a, b;
//        cin >> a >> b;
//        t[a].pb(b);
//        t[b].pb(a);
//    }
//    bfs(1);
//    for(int i=1; i<=N; ++i)
//        p[i][0] = parent[i];
//    for(int j=1; (1<<j) < N; ++j) {
//        for(int i=1; i<=N; ++i) {
//            if(p[i][j-1] != 0)
//                p[i][j] = p[p[i][j-1]][j-1];
//        }
//    }
//
//    cin >> M;
//    while(M--) {
//        int a, b;
//        cin >> a >> b;
//        cout << lca(a, b) << '\n';
//    }
//}
