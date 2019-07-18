//#include <iostream>
//#include <cstring>
//#include <vector>
//
//using namespace std;
//
//int n;
//vector<int> v[1001];
//int visited[1001];
//
//void dfs(int i) {
//    for(int j=0; j<v[i].size(); ++j) {
//        if(!visited[v[i][j]]) {
//            visited[v[i][j]] = true;
//            dfs(v[i][j]);
//        }
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int t;
//    cin >> t;
//    while(t--) {
//        int cnt=0;
//        cin >> n;
//        memset(visited, false, sizeof(visited));
//        for(int i=1; i<=n; ++i) {
//            v[i].clear();
//        }
//        for(int i=1; i<=n; ++i) {
//            int j;
//            cin >> j;
//            v[i].push_back(j);
//            v[j].push_back(i);
//        }
//        for(int i=1; i<=n; ++i) {
//            if(!visited[i]) {
//                visited[i] = true;
//                cnt++;
//                dfs(i);
//            }
//        }
//        cout << cnt << '\n';
//    }
//}