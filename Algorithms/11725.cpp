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
//vector<int> t[100001];
//bool visited[100001] = {false};
//
//int main() {
//    _upgrade;
//    cin >> n;
//    int parent[n+1];
//    parent[1] = 1;
//    for(int i=1; i<n; ++i) {
//        int a, b;
//        cin >> a >> b;
//        t[a].pb(b);
//        t[b].pb(a);
//    }
//    queue<int> q;
//    visited[1] = true;
//    q.push(1);
//    while(!q.empty()) {
//        int now = q.front(); q.pop();
//        for(int i=0; i<t[now].size(); ++i) {
//            if(visited[t[now][i]]) continue;
//            visited[t[now][i]] = true;
//            parent[t[now][i]] = now;
//            q.push(t[now][i]);
//        }
//    }
//    for(int i=2; i<=n; ++i) {
//        cout << parent[i] << '\n';
//    }
//}
