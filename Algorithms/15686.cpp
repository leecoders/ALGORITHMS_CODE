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
//int n, m;
//vector<pii> h;
//vector<pii> c;
//int ans = INT_MAX;
//bool visited[14] = {false};
//
//void dfs(int now, int cnt) {
//    if(cnt == m) {
//        int ret = 0;
//        for(int i=0; i<h.size(); ++i) {
//            int mn = INT_MAX;
//            for(int j=0; j<c.size(); ++j) {
//                if(!visited[j]) continue;
//                int dist = abs(h[i].first - c[j].first) + abs(h[i].second - c[j].second);
//                mn = min(mn, dist);
//            }
//            ret += mn;
//        }
//        ans = min(ans, ret);
//        return;
//    }
//
//    for(int i=now+1; i<c.size(); ++i) {
//        visited[i] = true;
//        dfs(i, cnt+1);
//        visited[i] = false;
//    }
//}
//
//int main() {
//    _upgrade;
//    cin >> n >> m;
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=n; ++j) {
//            int input;
//            cin >> input;
//            if(input == 1) {
//                h.pb(mp(i, j));
//            }
//            else if(input == 2) {
//                c.pb(mp(i, j));
//            }
//        }
//    }
//
//    dfs(-1, 0);
//    cout << ans;
//}
