//// 아이디어
//// - O(nm)으로 흑돌의 주변에 빈 곳이 2개 이하로 존재하는 흑돌 집합에 대해서만
//// Size에 크기를 저장하고(인덱스는 발견된 순서로 0부터), zero[idx]에 2개 미만인 zero 위치들을 저장한다.
//// zero_total에는 주변에 빈 곳이 2개 이하인 흑돌에 대해 그 2개 이하의 빈 곳의 위치들을 저장한다.(방문체크로 중복제거)
//// zero_total에서 dfs로 2개를 채웠을 때(방문 체크 재사용, 백트래킹),
//// 빈 곳이 2개 이하인 흑돌 집합들에 대해 모든 빈 곳이 채워졌는지 체크하여 total에 값을 더해주며 최대값을 갱신한다.
//
//#include "bits/stdc++.h"
//using namespace std;
//
//int n, m;
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//int visited[1001][1001];
//int visited_zero[1001][1001];
//int board[1001][1001];
//int cnt_zero;
//int cnt_two;
//vector<int> Size; // 발견된 2들의 사이즈. 인덱스는 0부터
//vector<pair<int, int> > find_zero;
//vector<pair<int, int> > zero[500001];
//vector<pair<int, int> > zero_total;
//set<int> check_zero;
//int ans = 0;
//
//void dfs(int now, int cnt) {
//    if(cnt == 2) {
//        int total = 0;
//        for(int i=0; i<Size.size(); ++i) {
//            bool check = true;
//            for(int j=0; j<zero[i].size(); ++j) {
//                int y = zero[i][j].first;
//                int x = zero[i][j].second;
//                if(!visited_zero[y][x]) {
//                    check = false;
//                    break;
//                }
//            }
//            if(check) total += Size[i];
//        }
//        ans = max(ans, total);
//        return;
//    }
//    for(int i=now + 1; i<zero_total.size(); ++i) {
//        int y = zero_total[i].first;
//        int x = zero_total[i].second;
//        visited_zero[y][x] = 1;
//        dfs(i, cnt + 1);
//        visited_zero[y][x] = 0;
//    }
//}
//
//void dfs_cnt(int y, int x) {
//    for(int i=0; i<4; ++i) {
//        int ny = y + dy[i];
//        int nx = x + dx[i];
//        int now = ny * m + nx;
//        if(ny < 1 || nx < 1 || ny > n || nx > m) continue;
//        if(visited[ny][nx]) continue;
//        if(board[ny][nx] == 2) {
//            cnt_two++;
//            visited[ny][nx] = 1;
//            dfs_cnt(ny, nx);
//        }
//        else if(board[ny][nx] == 0 && !check_zero.count(now)) {
//            find_zero.push_back(make_pair(ny, nx));
//            check_zero.insert(now);
//            cnt_zero++;
//        }
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> n >> m;
//    for(int i=1; i<=n; ++i)
//        for(int j=1; j<=m; ++j)
//            cin >> board[i][j];
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            if(board[i][j] == 2 && !visited[i][j]) {
//                find_zero.clear();
////                memset(visited_zero, 0, sizeof(visited_zero)); // 시간 초과 예상되는 부분(?)
//                check_zero.clear(); // 2차원 -> 1차원 압축해서 방문 체크
//                cnt_zero = 0;
//                cnt_two = 1;
//                visited[i][j] = 1;
//                dfs_cnt(i, j);
//                if(cnt_zero <= 2) {
//                    Size.push_back(cnt_two);
//                    for(int k=0; k<find_zero.size(); ++k) {
//                        zero[Size.size()-1].push_back(find_zero[k]);
//                    }
//                }
//            }
//        }
//    }
//    memset(visited_zero, 0, sizeof(visited_zero));
//    for(int i=0; i<Size.size(); ++i) {
//        for(int j=0; j<zero[i].size(); ++j) {
//            int y = zero[i][j].first;
//            int x = zero[i][j].second;
//            if(!visited_zero[y][x]) {
//                visited_zero[y][x] = 1;
//                zero_total.push_back(make_pair(y, x));
//            }
//        }
//    }
//    memset(visited_zero, 0, sizeof(visited_zero));
//    dfs(-1, 0);
//    cout << ans;
//}