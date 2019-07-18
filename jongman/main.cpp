//#include <iostream>
//#include <string.h>
//using namespace std;
//
//int c;
//int n;
//int board[101][101];
//int d[101][101];
//
//int is_arrived(int y, int x) {
//    if(y > n || x > n) return 0;
//    if(y==n && x==n) return 1;
//
//    if(d[y][x] != -1) return d[y][x];
//
//    return d[y][x] = is_arrived(y + board[y][x], x) || is_arrived(y, x + board[y][x]);
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cin >> c;
//    while(c--) {
//        cin >> n;
//        memset(d, -1, sizeof(d));
//        for(int i=1; i<=n; ++i)
//            for(int j=1; j<=n; ++j)
//                cin >> board[i][j];
//        if(is_arrived(1, 1)) cout << "YES" << '\n';
//        else cout << "NO" << '\n';
//    }
//}