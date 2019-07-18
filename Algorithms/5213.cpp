//#include "bits/stdc++.h"
//using namespace std;
//
//struct tile {
//    int le, ri, le_y, le_x, ri_y, ri_x, num;
//    tile(int _le, int _ri, int _le_y, int _le_x, int _ri_y, int _ri_x, int _num) {
//        le = _le;
//        ri = _ri;
//        le_y = _le_y;
//        le_x = _le_x;
//        ri_y = _ri_y;
//        ri_x = _ri_x;
//        num = _num;
//    }
//};
//
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//int n;
//int board[507][1007];
//bool visited[500007];
//int trace[500007];
//vector<tile> v;
//vector<int> tr;
//int mx;
//
//void dfs(int now) {
//    if(now == 1) return;
//    tr.push_back(trace[now]);
//    dfs(trace[now]);
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> n;
//    int cnt = 1;
//    v.push_back(tile(0, 0, 0, 0, 0, 0, 0)); // 하나 넣고 시작. 사이즈는 타일 수 + 1 이 되겠지
//    for(int i=1; i<=n; ++i) {
//        if(i & 1) {
//            for(int j=1; j<=n; ++j) {
//                int le, ri, num;
//                cin >> le >> ri;
//                num = cnt++;
//                board[i][j*2-1] = num;
//                board[i][j*2] = num;
//                v.push_back(tile(le, ri, i, j*2-1, i, j*2, num));
//            }
//        }
//        else {
//            for(int j=1; j<=n-1; ++j) {
//                int le, ri, num;
//                cin >> le >> ri;
//                num = cnt++;
//                board[i][j*2] = num;
//                board[i][j*2+1] = num;
//                v.push_back(tile(le, ri, i, j*2, i, j*2+1, num));
//            }
//        }
//    }
//    queue<int> q;
//    visited[1] = 1;
//    q.push(1);
//    while(!q.empty()) {
//        int now_num = q.front(); q.pop();
//        tile now = v[now_num];
//        int le_y = now.le_y;
//        int le_x = now.le_x;
//        int ri_y = now.ri_y;
//        int ri_x = now.ri_x;
//        mx = max(mx, now_num);
//        // ri에서 가는 경우
//        for(int i=0; i<4; ++i) {
//            if(i == 1) continue; // 오른쪽일 때는 왼쪽 방향 x
//            int ny = ri_y + dy[i];
//            int nx = ri_x + dx[i];
//            if(!board[ny][nx]) continue;
//            int next = board[ny][nx]; // 인접 타일의 번호
//            if(visited[next]) continue;
//            if(v[next].le == now.ri) { // ri는 le와 인접해 있다.
//                visited[next] = 1;
//                trace[next] = now.num;
//                q.push(next);
//            }
//        }
//        // le에서 가는 경우
//        for(int i=0; i<4; ++i) {
//            if(i == 0) continue; // 왼쪽일 때는 오른쪽x
//            int ny = le_y + dy[i];
//            int nx = le_x + dx[i];
//            if(!board[ny][nx]) continue;
//            int next = board[ny][nx]; // 인접 타일의 번호
//            if(visited[next]) continue;
//            if(v[next].ri == now.le) { // ri는 le와 인접해 있다.
//                visited[next] = 1;
//                trace[next] = now.num;
//                q.push(next);
//            }
//        }
//    }
//    tr.push_back(mx);
//    dfs(mx);
//    cout << tr.size() << '\n';
//    for(int i=tr.size()-1; i>=0; --i) {
//        cout << tr[i] << ' ';
//    }
//}