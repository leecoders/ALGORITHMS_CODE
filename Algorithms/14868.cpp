// 시간초
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
//ll gcd(ll a, ll b) {
//    return (a == 0) ? b : gcd(b%a, a);
//}
//
//int board[2001][2001];
//bool visited[2001][2001];
//int dy[4] = {0, 0, 1, -1};
//int dx[4] = {1, -1, 0, 0};
//int N, K;
//int ny, nx, y, x;
//int cnt;
//
//int cnt_components() {
//    cnt = 0;
//    ZERO(visited);
//    for(int i=1; i<=N; ++i) {
//        for(int j=1; j<=N; ++j) {
//            if(board[i][j]==1 && !visited[i][j]) {
//                ++cnt;
//                if(cnt > 1) return cnt;
//                queue<pii> q;
//                visited[i][j] = true;
//                q.push(mp(i, j));
//                while (!q.empty()) {
//                    y = q.front().first;
//                    x = q.front().second;
//                    q.pop();
//                    for (int k = 0; k < 4; ++k) {
//                        ny = y + dy[k];
//                        nx = x + dx[k];
//                        if (ny < 1 || nx < 1 || ny > N || nx > N) continue;
//                        if (visited[ny][nx]) continue;
//                        if (board[ny][nx] == 1) {
//                            visited[ny][nx] = true;
//                            q.push(mp(ny, nx));
//                        }
//                    }
//                }
//            }
//        }
//    }
//    return cnt;
//}
//
//int main() {
//    ICPC;
//    ZERO(board);
//    cin >> N >> K;
//    int a, b;
//    for(int i=0; i<K; ++i) {
//        cin >> a >> b;
//        board[a][b] = 1;
//    }
//    int day=0;
//    while(1) {
//        if(cnt_components() == 1) {
//            cout << day;
//            break;
//        }
//        vector<pii> v;
//        for(int i=1; i<=N; ++i) {
//            for (int j = 1; j <= N; ++j) {
//                if(board[i][j] == 1) {
//                    v.pb(mp(i, j));
//                }
//            }
//        }
//        for(int i=0; i<v.size(); ++i) {
//            y = v[i].first;
//            x = v[i].second;
//            for(int k=0; k<4; ++k) {
//                ny = y + dy[k];
//                nx = x + dx[k];
//                if (ny < 1 || nx < 1 || ny > N || nx > N) continue;
//                if (board[ny][nx] == 0)
//                    board[ny][nx] = 1;
//            }
//        }
//        ++day;
//    }
//}


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
//ll gcd(ll a, ll b) {
//    return (a == 0) ? b : gcd(b%a, a);
//}
//
//int board[2001][2001];
//int visited[2001][2001];
//int parent[100001];
//int dy[4] = {0, 0, 1, -1};
//int dx[4] = {1, -1, 0, 0};
//int N, K;
//int ans = -1;
//int cnt_meet = 0;
//
//int Find(int x) {
//    if (x == parent[x])
//        return x;
//
//    return parent[x] = Find(parent[x]);
//}
//
//void Union(int x, int y) {
//    x = Find(x);
//    y = Find(y);
//    parent[x] = y;
//}
//
//int main() {
//    ICPC;
//    ZERO(board);
//    MINUS(visited);
//    cin >> N >> K;
//    int a, b;
//    int country = 0;
//    for(int i=1; i<=100000; ++i)
//        parent[i] = i;
//    queue<pii> q;
//    for(int i=0; i<K; ++i) {
//        cin >> a >> b;
//        board[a][b] = ++country;
//        visited[a][b] = 0;
//        q.push(mp(a, b));
//        for(int k=0; k<4; ++k) {
//            int ny = a + dy[k];
//            int nx = b + dx[k];
//            if(ny < 1 || nx < 1 || ny > N || nx > N) continue;
//            if(board[ny][nx]!=0 && board[ny][nx]!=board[a][b]) {
//                int a_temp = Find(board[a][b]);
//                int b_temp = Find(board[ny][nx]);
//                if(a_temp!=b_temp) {
//                    ++cnt_meet;
//                    Union(a_temp, b_temp);
//                }
//            }
//        }
//    }
//
//    if(cnt_meet + 1 == country || country == 1) {
//        cout << 0;
//        return 0;
//    }
//
//    int day = 0;
//    while(!q.empty()) {
//        ++day;
//        int len = q.size(); // 먼저 확인하지 않으면 안에서 계속 돈다.
//        for(int lv = 0; lv < len; ++lv) {
//            int y = q.front().first;
//            int x = q.front().second;
//            q.pop();
//            for (int i = 0; i < 4; ++i) {
//                int ny = y + dy[i];
//                int nx = x + dx[i];
//                if (ny < 1 || nx < 1 || ny > N || nx > N) continue;
//
//                if (visited[ny][nx] == -1) {
//                    visited[ny][nx] = visited[y][x] + 1;
//                    board[ny][nx] = board[y][x];
//                    q.push(mp(ny, nx));
//
//                    for(int k=0; k<4; ++k) {
//                        int my = ny + dy[k];
//                        int mx = nx + dx[k];
//                        if(my < 1 || mx < 1 || my > N || mx > N) continue;
//                        if(board[my][mx]!=0 && board[my][mx]!=board[ny][nx]) {
//                            int a = Find(board[ny][nx]);
//                            int b = Find(board[my][mx]);
//                            if(a!=b) {
//                                ++cnt_meet;
//                                Union(a, b);
//                            }
//                        }
//                    }
//                }
//                else {
//                    int a = Find(board[y][x]);
//                    int b = Find(board[ny][nx]);
//                    if(a!=b) {
//                        ++cnt_meet;
//                        Union(a, b);
//                    }
//                }
//            }
//        }
//
//        if(cnt_meet + 1 == country) {
//            cout << day;
//            return 0;
//        }
//    }
//}