//시간 초과
//#include"bits/stdc++.h"
//using namespace std;
//
//#define mp make_pair
//#define pb(x) push_back(x)
//#define ALL(a) (a.begin()),(a.end())
//#define ZERO(a) memset(a,0,sizeof(a))
//#define MINUS(a) memset(a,0xff,sizeof(a))
//#define _upgrade ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
//
//typedef pair<int, int> pii;
//typedef tuple<int, int, int> t3;
//typedef tuple<int, int, int, int> t4;
//typedef long long ll;
//
//ll gcd(ll a, ll b) {
//    return (a == 0) ? b : gcd(b%a, a);
//}
//
//vector<pii> a[100001];
//int dist[100001]; // 부모까지의 거리
//int p[100001][18] = {0};
//int l;
//int t = 0;
//int tin[100001], tout[100001];
//
//void dfs(int v, int parent) {
//    tin[v] = ++t;
//
//    p[v][0] = parent;
//    for(int i=1; i<=l; ++i) {
//        p[v][i] = p[p[v][i-1]][i-1];
//    }
//    for(auto to : a[v]) {
//        if(to.first == parent) continue;
//        dist[to.first] = to.second;
//        dfs(to.first, v);
//    }
//
//    tout[v] = ++t;
//}
//
//bool upper(int u, int v) {
//    return tin[u] <= tin[v] && tout[u] >= tout[v];
//}
//
//int lca(int u, int v) {
//    if(upper(u, v)) return u;
//    if(upper(v, u)) return v;
//
//    for(int i = l; i>=0; --i) {
//        if(!upper(p[u][i], v)) {
//            u = p[u][i];
//        }
//    }
//    return p[u][0];
//}
//
//int main() {
//        _upgrade;
//    int n ,k;
//    cin >> n;
//    for(int i=0; i<n-1; ++i) {
//        int u, v, c;
//        cin >> u >> v >> c;
//        a[u].pb(mp(v, c));
//        a[v].pb(mp(u, c));
//    }
//
//    for(l = 1; (1<<l) <= n; ++l);
//    l--;
//    dist[1] = 0;
//    dfs(1, 1);
//    cin >> k;
//    for(int i=0; i<k; ++i) {
//        int mx = INT_MIN, mn = INT_MAX;
//        int u, v;
//        cin >> u >> v;
//        int target = lca(u, v);
//        while(1) {
//            if(u == target) break;
//            mx = max(mx, dist[u]);
//            mn = min(mn, dist[u]);
//            u = p[u][0];
//        }
//        while(1) {
//            if(v == target) break;
//            mx = max(mx, dist[v]);
//            mn = min(mn, dist[v]);
//            v = p[v][0];
//        }
//        if(mx == INT_MIN) mx = 0;
//        if(mn == INT_MAX) mn = 0;
//        cout << mn << ' ' << mx << '\n';
//    }
//}
