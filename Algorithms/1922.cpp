//#include <iostream>
//#include <vector>
//#include <queue>
//#include <string.h>
//using namespace std;
//
//vector<pair<int,int>> v[1001];
//bool check[1001];
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    memset(check, false, sizeof(check));
//    int n, m;
//    cin >> n >> m;
//    for (int i=0; i<m; i++) {
//        int a, b, c;
//        cin >> a >> b >> c;
//        v[a].push_back(make_pair(b,c));
//        v[b].push_back(make_pair(a,c));
//    }
//    check[1] = true;
//    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > q;
//    for (auto p : v[1]) {
//        q.push(make_pair(p.second,p.first));
//    }
//    int ans = 0;
//    while (!q.empty()) {
//        auto p = q.top();
//        q.pop();
//        if (check[p.second]) continue;
//        check[p.second] = true;
//        ans += p.first;
//        int x = p.second;
//        for (auto p : v[x]) {
//            q.push(make_pair(p.second,p.first));
//        }
//    }
//    cout << ans << '\n';
//}