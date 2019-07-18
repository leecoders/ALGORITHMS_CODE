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
//int dy[4] = {0, 0, -1, 1};
//int dx[4] = {1, -1, 0, 0};
//int dice[7] = {0};
//int y, x, n, m, k;
//int board[21][21];
//int* u = &dice[6];
//int* d = &dice[1];
//int* r = &dice[3];
//int* l = &dice[4];
//int* f = &dice[5];
//int* b = &dice[2];
//
//void north() {
//    int* temp = u;
//    u = f;
//    f = d;
//    d = b;
//    b = temp;
//}
//
//void south() {
//    int* temp = u;
//    u = b;
//    b = d;
//    d = f;
//    f = temp;
//}
//
//void east() {
//    int* temp = u;
//    u = l;
//    l = d;
//    d = r;
//    r = temp;
//}
//
//void west() {
//    int* temp = u;
//    u = r;
//    r = d;
//    d = l;
//    l = temp;
//}
//
//int main() {
//    ICPC;
//    cin >> n >> m >> x >> y >> k;
//    for(int i=0; i<n; ++i)
//        for(int j=0; j<m; ++j)
//            cin >> board[i][j];
//    for(int i=0; i<k; ++i) {
//        int dir;
//        cin >> dir;
//        int ny = y + dy[dir-1];
//        int nx = x + dx[dir-1];
//        if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
//        y = ny, x = nx;
//        if(dir == 1) {
//            east();
//        }
//        else if(dir == 2) {
//            west();
//        }
//        else if(dir == 3) {
//            north();
//        }
//        else if(dir == 4) {
//            south();
//        }
//        if(board[y][x] == 0) board[y][x] = *d;
//        else {
//            *d = board[y][x];
//            board[y][x] = 0;
//        }
//        cout << *u << '\n';
//    }
//}
