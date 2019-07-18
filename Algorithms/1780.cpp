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
//int board[2188][2188];
//int p[3] = {0};
//
//bool same(int y, int x, int n) {
//    int color = board[y][x];
//    for(int i=0; i<n; ++i)
//        for(int j=0; j<n; ++j)
//            if(board[y+i][x+j] != color) return false;
//    return true;
//}
//
//void f(int y, int x, int n) {
//    if(same(y, x, n)) {
//        p[board[y][x] + 1]++;
//        return;
//    }
//
//    int m = n/3; // next size
//    for(int i=0; i<3; ++i) {
//        for(int j=0; j<3; ++j) {
//            f(y + m * i, x + m * j, m);
//        }
//    }
//}
//
//int main() {
//    _upgrade;
//    int n;
//    cin >> n;
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=n; ++j) {
//            cin >> board[i][j];
//        }
//    }
//    f(1, 1, n);
//    for(int i=0; i<3; ++i)
//        cout << p[i] << '\n';
//}