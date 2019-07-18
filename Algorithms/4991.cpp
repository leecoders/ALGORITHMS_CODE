//#include"bits/stdc++.h"
//using namespace std;
//
//#define mp make_pair
//#define pb(x) push_back(x)
//#define ICPC ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
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
//char board[21][21];
//int visited[21][21];
//bool visited_dfs[11];
//pii pos[11];
//int len[11][11];
//int dy[4] = {0, 0, 1, -1};
//int dx[4] = {1, -1, 0, 0};
//int ny, nx, ry, rx, y, x;
//int dust, cnt, ans;
//
//void dfs(int now, int cnt, int sum) {
//    if(cnt == dust) {
//        ans = min(ans, sum);
//    }
//    for(int i=1; i<=dust; ++i) {
//        if(!visited_dfs[i]) {
//            visited_dfs[i] = true;
//            dfs(i, cnt + 1, sum + len[now][i]);
//            visited_dfs[i] = false;
//        }
//    }
//}
//
//int main() {
//    ICPC;
//    while(1) {
//        bool cantGetToThere = false;
//        dust = 0;
//        ans=INT_MAX;
//        int h, w;
//        cin >> w >> h;
//        if(w==0 && h==0) break;
//        for(int i=1; i<=h; ++i) {
//            for(int j=1; j<=w; ++j) {
//                cin >> board[i][j];
//                if(board[i][j] == 'o') {
//                    pos[0].first = i;
//                    pos[0].second = j;
//                }
//                else {
//                    if(board[i][j] == '*') {
//                        ++dust;
//                        pos[dust].first = i;
//                        pos[dust].second = j;
//                    }
//                }
//            }
//        }
//
//        for(int i=0; i<=dust; ++i) {
//            ry = pos[i].first;
//            rx = pos[i].second;
//            MINUS(visited);
//            visited[ry][rx] = 0;
//            queue<pii> q;
//            q.push(mp(ry, rx));
//            while(!q.empty()) {
//                y = q.front().first;
//                x = q.front().second;
//                q.pop();
//                for(int k=0; k<4; ++k) {
//                    ny = y + dy[k];
//                    nx = x + dx[k];
//                    if(ny < 1 || nx < 1 || ny > h || nx > w) continue;
//                    if(board[ny][nx] == 'x') continue;
//                    if(visited[ny][nx] == -1) {
//                        visited[ny][nx] = visited[y][x] + 1;
//                        q.push(mp(ny, nx));
//                    }
//                }
//            }
//            for(int j=0; j<=dust; ++j) {
//                y = pos[j].first;
//                x = pos[j].second;
//                if(i!=j && visited[y][x]==-1) {
//                    cantGetToThere = true;
//                    break;
//                }
//                len[i][j] = visited[y][x];
//            }
//            if(cantGetToThere) break;
//        }
//        if(cantGetToThere) {
//            cout << -1 << '\n';
//        }
//        else {
//            ZERO(visited_dfs);
//            dfs(0, 0, 0);
//            cout << ans << '\n';
//        }
//    }
//}


//호정이형 코드 (순열로 dfs)
//#include <iostream>
//#include <queue>
//#include <vector>
//#include <string>
//#include <map>
//#include <algorithm>
//using namespace std;
//
//vector<vector<int>> bfs(vector<string> &MAP, int x, int y) {
//
//    int dx[] = { 1,-1,0,0 };
//    int dy[] = { 0,0,1,-1 };
//    int n = MAP.size();
//    int m = MAP[0].size();
//
//    queue<pair<int, int>> q;
//    vector<vector<int>> dist(n, vector<int>(m, -1));
//    q.push(make_pair(x, y));
//    dist[x][y] = 0;
//
//    while (!q.empty()) {
//
//        tie(x, y) = q.front();
//        q.pop();
//
//        for (int i = 0; i < 4; i++) {
//            int new_x = x + dx[i];
//            int new_y = y + dy[i];
//
//            if (new_x < 0 || new_x >= n || new_y < 0 || new_y >= m)
//                continue;
//
//            if (dist[new_x][new_y] != -1)
//                continue;
//
//
//            if (MAP[new_x][new_y] == 'x')
//                continue;
//
//
//            dist[new_x][new_y] = dist[x][y] + 1;
//            q.push(make_pair(new_x, new_y));
//
//
//        }
//    }
//
//
//
//
//
//    return dist;
//
//
//}
//
//int main(void) {
//
//    while (true) {
//        int n, m;
//        cin >> m >> n;//세로,가로 길이
//        vector<string> MAP(n);
//
//
//        if (m == 0 && n == 0)
//            break;
//
//        for (int i = 0; i < n; i++) {
//            cin >> MAP[i];
//        }
//
//        vector<pair<int, int>> sp(1);//search point(시작과 청소 좌표)
//
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//
//                if (MAP[i][j] == 'o') {
//                    sp[0] = make_pair(i, j);
//
//                }
//                else if (MAP[i][j] == '*') {
//                    sp.push_back(make_pair(i, j));
//                }
//
//            }
//        }
//
//
//        int length = sp.size();
//        vector<vector<int>> result(length, vector<int>(length, 0));
//        bool check = false;
//        for (int i = 0; i < length; i++) {
//
//            auto dist = bfs(MAP, sp[i].first, sp[i].second);
//
//            for (int j = 0; j < length; j++) {
//                result[i][j] = dist[sp[j].first][sp[j].second];
//                if (result[i][j] == -1) {
//                    check = true;
//                }
//
//            }
//        }
//
//        if (check) {
//            cout << -1 << "\n";
//            continue;
//        }
//
//
//        vector<int> permutation;
//
//        for (int i = 0; i < length - 1; i++) {
//            permutation.push_back(i + 1);
//        }
//
//
//
//
//        int ans = -1;
//        do {
//
//            int now = result[0][permutation[0]];
//
//
//            for (int i = 0; i < length - 2; i++) {
//                now = now + result[permutation[i]][permutation[i + 1]];
//            }
//
//            if (ans == -1 || ans > now)
//                ans = now;
//
//
//        } while (next_permutation(permutation.begin(), permutation.end()));
//        cout << ans << "\n";
//    }
//
//
//}