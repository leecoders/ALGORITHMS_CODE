//#include "bits/stdc++.h"
//using namespace std;
//
//const int INF = 1234567890;
//int n, m, h;
//bool line[12][32]; // 세로선 i의 j번째 행의 i+1와 이어지는 가로선 연결 여부
//int ans = INF;
//
//// 필요한 함수
//// 1. n행 m열의 비어있는 가로선을 최대 3개 까지 추가하는 완전탐색 함수 dfs
//// 2. 세로선 i에서 h+1 줄 까지 내려갔을 때(5보다 작은 값에 의해서 넘어온 경로도 포함해야 한다) 세로선 i에서 끝나는지 체크하는 함수
//// 3. n개의 세로선이 모두 자기 라인에서 끝나는지. 함수2를 모두 만족하는지 체크하는 함수.
//
////void show() {
////    for(int i=1; i<=h; ++i) {
////        for(int j=1; j<=n; ++j) {
////            cout << line[j][i] << ' ';
////        }
////        cout << '\n';
////    }
////    cout << '\n';
////}
//
//bool check(int root, int line_num, int row) {
//    bool ret;
//    for(int i = row + 1; i <= h + 1; ++i) {
//        if(i == h + 1) {
//            if(line_num == root) return true;
//            else return false;
//        }
//        if(line[line_num - 1][i]) { // 왼쪽의 선 정보는 현재 선으로 연결을 의미
//            ret = check(root, line_num - 1, i); // 이어져 있는 왼쪽 세로선(num-1)으로 이동하고 row + 1
//            break; // 이어져 있으면 이동시키고 종료해야함.
//        }
//        else if(line[line_num][i]) { // 현재의 선 정보는 다음 선으로 연결을 의미(위와 반대)
//            ret = check(root, line_num + 1, i); // 이어져 있는 오른쪽 세로선(num+1)으로 이동하고 row + 1
//            break;
//        }
//    }
//    return ret;
//}
//
//bool check_all() { // 함수 3
//    for(int i=1; i<=n; ++i) {
//        if(!check(i, i, 0)) return false;
//    }
//    return true;
//}
//
//void dfs(int x, int cnt) { // 함수 1
//    if(check_all()) {
//        ans = min(ans, cnt);
//    }
//    if(cnt >= 3) return;
//    if(cnt >= ans) return;
//
//    for(int i = x + 1; i <= (n-1) * h; ++i) { // 마지막 세로선은 가로선 필요 없음
//        int r = (i - 1) / h + 1;
//        int c = i % h;
//        if (c == 0) c = h;
//        if(!line[r][c] && !line[r-1][c] && !line[r+1][c]) {
//            line[r][c] = 1;
//            dfs(i, cnt + 1);
//            line[r][c] = 0;
//        }
//    }
//
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> n >> m >> h;
//    for(int i=0; i<m; ++i) {
//        int a, b;
//        cin >> a >> b;
//        line[b][a] = 1;
//    }
//    dfs(0, 0);
//    if(ans == INF) cout << -1;
//    else cout << ans;
//}