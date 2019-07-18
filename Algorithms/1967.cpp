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
//int n;
//vector<pii> t[10001];
//bool visited[10001];
//int mx = 0, mx_next;
//
//void bfs(int start) {
//    ZERO(visited);
//    queue<pii> q;
//    visited[start] = start;
//    q.push(mp(start, 0)); // 임의의 정점에서 시작한 후, 그 정점으로 부터 가장 먼 곳에서 한번 더 돌리면 그것이 최장 경로
//    while(!q.empty()) {
//        int now = q.front().first;
//        int dist = q.front().second;
//        q.pop();
//        if(dist > mx) {
//            mx = dist;
//            mx_next = now;
//        }
//
//        for(int i=0; i<t[now].size(); ++i) {
//            if(visited[t[now][i].first]) continue;
//            visited[t[now][i].first] = 1;
//            q.push(mp(t[now][i].first, dist + t[now][i].second));
//        }
//    }
//}
//
//int main() {
//    _upgrade;
//    int V;
//    cin >> V;
//    for(int i=1; i<V; ++i) { // 트리의 간선은 V-1개
//        int a, b, cost;
//        cin >> a >> b >> cost;
//        t[a].pb(mp(b, cost));
//        t[b].pb(mp(a, cost));
//    }
//    bfs(1);
//    bfs(mx_next);
//
//    cout << mx;
//}
