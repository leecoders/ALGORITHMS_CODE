//#include "bits/stdc++.h"
//using namespace std;
//
//int n, ans=1234567890, check_cnt, people; // check_cnt: 연결그래프 내에 노드 수 체크, people: 연결그래프 내 인구수 -> 초기화해서 쓸 예정
//vector<int> v, A, B, V, visited; // A, B: 각 선거구에 포함되는 노드 집합, V: 연결그래프 탐색 함수 모듈화해서 A, B 각각 테스트하기 위한 임시 벡터, visited: A, B 각각 방문 체크 위한 벡터 -> 초기화하며 쓸 예정
//vector<int> adj[11]; // 인접 그래프 -> 양방향 그래프
//
////void show(vector<int>& target) {
////    for(int i=0; i<target.size(); ++i)
////        cout << target[i] << ' ';
////    cout << '\n';
////}
//
//bool same_team(int a, int b) { // 두 노드가 같은 선거구에 포함되는지 체크
//    int cnt = 0;
//    for(int i=0; i<A.size(); ++i) {
//        if(A[i] == a || A[i] == b) cnt++;
//    }
//    if(cnt == 0 || cnt == 2) return true; // 둘 다 B이거나 A이거나
//    return false;
//}
//
//void brute(int now) { // 연결 그래프인지 체크
//    for(int i=0; i < adj[now].size(); ++i) {
//        int next = adj[now][i]; // 다음 노드
//        if(!visited[next] && same_team(now, next)) { // next가 아직 방문 안되었고, now와 같은 팀에 속한다면
//            ++check_cnt;
//            visited[next] = true;
//            people += v[next];
//            brute(next);
//        }
//    }
//}
//
//void dfs(int now, int cnt, int total) {
//    if(cnt == total) { // 처음 정했던 A의 total과 일치
//        int check[11] = {0};
//        for(int i=0; i < A.size(); ++i) { // A에 포함된 노드 체크
//            check[A[i]] = true;
//        }
//        for(int i=0; i<n; ++i) {
//            if(!check[i]) B.push_back(i); // A에 없는 노드는 즉, B의 노드
//        }
//
//        //check A
//        visited = vector<int>(11, 0); // B 때는 안함. 할 필요 없음
//        V = A;
//        check_cnt = 1;
//        visited[V[0]] = true;
//        people = v[V[0]];
//        brute(V[0]);
//        int check_cnt_A = check_cnt;
//        int total_A = people;
//
//        //check B
//        V = B;
//        check_cnt = 1;
//        people = v[V[0]];
//        visited[V[0]] = true;
//        brute(V[0]);
//        int total_B = people;
//
//        if(check_cnt_A + check_cnt == n) // A 노드 수 + B 노드 수 == n일 때만 모든 노드가 선거구에 들어간 것
//            ans = min(ans, abs(total_A - total_B));
//
//        B.clear();
//        return;
//    }
//    for(int i=now; i < n; ++i) {
//        A.push_back(i);
//        dfs(i + 1, cnt + 1, total); // 백트래킹으로 A 집합 완성함
//        A.pop_back();
//    }
//}
//
//int main() {
//    cin >> n;
//    for(int i=0; i<n; ++i) {
//        int input;
//        cin >> input;
//        v.push_back(input);
//    }
//    for(int i=0; i<n; ++i) {
//        int m;
//        cin >> m;
//        for(int j=0; j<m; ++j) {
//            int adjacent;
//            cin >> adjacent;
//            adj[i].push_back(adjacent - 1); // 0 ~ n-1
//            adj[adjacent - 1].push_back(i); // 양방향이므로 반대 방향도 그려줌
//        }
//    }
//    for(int i=1; i<n; ++i) {
//        dfs(0, 0, i); // 0부터 탐색, 0개 탐색 완료, A에 i개 채울 예정
//    }
//    if(ans == 1234567890) cout << -1;
//    else cout << ans;
//}