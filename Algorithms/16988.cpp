//#include "bits/stdc++.h"
//using namespace std;
//
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//int board[1001][1001];
//int visited[1001][1001];
//int n, m;
//int ans;
//
//void bfs() {
//    int sum = 0;
//	memset(visited, 0, sizeof(visited));
//	for(int i=1; i<=n; ++i) {
//		for(int j=1; j<=m; ++j) {
//			if(board[i][j] == 2 && !visited[i][j]) {
//				vector<pair<int, int>> v;
//				queue<pair<int, int>> q;
//				v.push_back(make_pair(i, j));
//				q.push(make_pair(i, j));
//				visited[i][j] = 1;
//				while(!q.empty()) {
//					int y = q.front().first;
//					int x = q.front().second;
//					q.pop();
//					for(int k=0; k<4; ++k) {
//						int ny = y + dy[k];
//						int nx = x + dx[k];
//						if(ny < 1 || nx < 1 || ny > n || nx > m) continue;
//						if(board[ny][nx] == 2 && !visited[ny][nx]) {
//							visited[ny][nx] = 1;
//							v.push_back(make_pair(ny, nx));
//							q.push(make_pair(ny, nx));
//						}
//					}
//				}
//				bool check = true;
//				for(int a=0; a<v.size(); ++a) {
//					int y = v[a].first;
//					int x = v[a].second;
//					for(int k=0; k<4; ++k) {
//						int ny = y + dy[k];
//						int nx = x + dx[k];
//						if(ny < 1 || nx < 1 || ny > n || nx > m) continue;
//						if(board[ny][nx] == 0) {
//							check = false;
//							break;
//						}
//					}
//					if(!check) break;
//				}
//				if(check) {
//					sum += (int)v.size();
//				}
//			}
//		}
//	}
//	ans = max(ans, sum);
//}
//
//void dfs(int val, int cnt) {
//	if(cnt == 2) {
//		bfs();
//		return;
//	}
//	for(int i=val + 1; i<=n*m; ++i) {
//		int y = (i-1) / m + 1;
//		int x = (i) % m;
//		x = x==0 ? m : x;
//		if(board[y][x] != 0) continue;
//		bool check = false;
//		for(int j=0; j<4; ++j) {
//		    int ny = y + dy[j];
//		    int nx = x + dx[j];
//		    if(ny < 1 || nx < 1 || ny > n || nx > m) continue;
//		    if(board[ny][nx] == 2) {
//		        check = true;
//		        break;
//		    }
//		}
//		if(check && !board[y][x]) {
//			board[y][x] = 1;
//			dfs(i, cnt + 1);
//			board[y][x] = 0;
//		}
//	}
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//	cin >> n >> m;
//	for(int i=1; i<=n; ++i) {
//		for(int j=1; j<=m; ++j) {
//			cin >> board[i][j];
//		}
//	}
//	dfs(0, 0);
//	cout << ans;
//}