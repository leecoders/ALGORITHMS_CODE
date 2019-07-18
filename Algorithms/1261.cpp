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
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//int board[101][101];
//int visited[101][101] = {0};
//
//int main() {
//        _upgrade;
//    int n, m;
//    cin >> m >> n;
//    for(int i=1; i<=n; ++i) {
//        string input;
//        cin >> input;
//        for(int j=1; j<=m; ++j) {
//            visited[i][j] = INT_MAX;
//            board[i][j] = input[j-1]-'0';
//        }
//    }
//    queue<pii> q;
//    visited[1][1] = 0;
//    q.push(mp(1, 1));
//    while(!q.empty()) {
//        int y = q.front().first;
//        int x = q.front().second; q.pop();
//        for(int i=0; i<4; ++i) {
//            int ny = y + dy[i];
//            int nx = x + dx[i];
//            if(ny < 1 || nx < 1 || ny > n || nx > m) continue;
//            if(board[ny][nx] == 1) {
//                int next = visited[y][x] + 1;
//                if(visited[ny][nx] <= next) continue;
//                visited[ny][nx] = next;
//                q.push(mp(ny, nx));
//            }
//            else {
//                int next = visited[y][x];
//                if(visited[ny][nx] <= next) continue;
//                visited[ny][nx] = next;
//                q.push(mp(ny, nx));
//            }
//        }
//    }
//    cout << visited[n][m];
//}
