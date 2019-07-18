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
//int dy[4] = {0, 0, 1, -1};
//int dx[4] = {1, -1, 0, 0};
//int n, k, l;
//int y=1, x=1;
//int board[101][101] = {0};
//queue<pair<int, char>> q;
//queue<pii> snake;
//
//int main() {
//    _upgrade;
//    cin >> n >> k;
//    for(int i=0; i<k; ++i) {
//        int y, x;
//        cin >> y >> x;
//        board[y][x] = 2; // 사과 : 2
//    }
//    cin >> l;
//    for(int i=0; i<l; ++i) {
//        int x;
//        char c;
//        cin >> x >> c;
//        q.push(mp(x, c));
//    }
//    board[1][1] = 1;
//    snake.push(mp(1, 1));
//    int sec = 0;
//    int dir = 0; // 0동 1서 2남 3북
//    while(1) {
//        ++sec;
//        y = y + dy[dir];
//        x = x + dx[dir];
//        if(y < 1 || x < 1 || y > n || x > n) break;
//        if(board[y][x] == 1) break;
//        if(board[y][x] == 2) {
//            board[y][x] = 1;
//            snake.push(mp(y, x));
//        }
//        else {
//            board[y][x] = 1;
//            snake.push(mp(y, x));
//            board[snake.front().first][snake.front().second] = 0;
//            snake.pop();
//        }
//
//        if(q.front().first == sec) { // 큐에 넣은 작업의 실행 시간과 일치
//            if(q.front().second == 'D') {
//                if(dir == 0) dir = 2;
//                else if(dir == 1) dir = 3;
//                else if(dir == 2) dir = 1;
//                else dir = 0;
//            }
//            else {
//                if(dir == 0) dir = 3;
//                else if(dir == 1) dir = 2;
//                else if(dir == 2) dir = 0;
//                else dir = 1;
//            }
//            q.pop();
//        }
//    }
//    cout << sec;
//}
