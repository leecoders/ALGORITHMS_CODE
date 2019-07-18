//#include <iostream>
//#include <string.h>
//#include <vector>
//#include <math.h>
//#include <algorithm>
//using namespace std;
//
//int n, m, r;
//int ans = 987654321;
//bool visited[201];
//int cost[201][201];
//int is_member[201]; // 다음 방문할 마을이 리스트에 있는 멤버인지 아닌지 체크
//vector<int> adj[201];   // 마을끼리 연결 여부 인접리스트
//vector<int> order;  // 방문해야할 리스트
//
//void go(int now, int sum, int cnt) {    // now : 현재 마을 번호, sum : cost 합, cnt : 리스트에 있는 모든 마을 방문했는지
//    if(ans < sum) return;   // ans보다 커지면 더 방문할 필요 없음
//    if(cnt == order.size()) {   // 리스트에 있는 모든 마을 방문되었을 때
//        ans = min(ans, sum);
//        return;
//    }
//    for(int i=0; i <= adj[now].size(); ++i) {   // 각 마을 마다 연결된 마을들만 체크
//        if(!visited[adj[now][i]] && cost[now][adj[now][i]]) {
//            visited[adj[now][i]] = true;
//            if(is_member[adj[now][i]])
//                go(adj[now][i], sum + cost[now][adj[now][i]], cnt+1);   // 리스트에 있는 마을이면 cnt+1
//            else
//                go(adj[now][i], sum + cost[now][adj[now][i]], cnt); // 리스트에 없는 마을이면 cnt 그대로
//            visited[adj[now][i]] = false;
//        }
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int t;
//    cin >> t;
//    for(int tc=1; tc <= t; ++tc) {
//        for(int i=1; i<201; ++i)    // 다음 tc를 위해 인접리스트 비워줌
//            adj[i].clear();
//        memset(is_member, 0, sizeof(visited));
//        memset(visited, 0, sizeof(visited));
//        memset(cost, 0, sizeof(cost));
//        order.clear();  // 다음 tc를 위해 마을 리스트 비워줌
//        ans = 987654321;
//        cin >> n >> m >> r;
//        for(int i=0; i < r; ++i) {  // 방문해야 할 마을 리스트 입력
//            int r_num;
//            cin >> r_num;
//            order.push_back(r_num);
//            is_member[r_num] = 1;
//        }
//        for(int i=0; i < m; ++i) {  // cost, 인접리스트 생성
//            int a, b, c;
//            cin >> a >> b >> c;
//            cost[a][b] = cost[b][a] = c;
//            adj[a].push_back(b);
//            adj[b].push_back(a);
//        }
//        for(int i=0; i < order.size(); ++i) {   // 방문 리스트에 있는 마을에서 시작해서 최소값 구함
//            visited[order[i]] = true;
//            go(order[i], 0, 1);
//            visited[order[i]] = false;
//        }
//        cout << '#' << tc << " " << ans << '\n';
//    }
//}
