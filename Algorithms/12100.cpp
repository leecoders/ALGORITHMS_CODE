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
//int n;
//int board[23][23];
//int board_temp[23][23];
//int ans = 0;
//vector<int> comm;
//
//
//void copy() {
//    for(int i=1;i<=n;++i) {
//        for(int j=1;j<=n;++j) {
//            board[i][j] = board_temp[i][j];
//        }
//    }
//}
//
//void R() {
//    for(int i=1; i<=n; ++i) {
//        queue<int> q;
//        vector<int> v(n+1); // 맨 마지막 칸 비교를 위해 0으로 채움
//        int cnt = 0;
//        for(int j=n; j>=1; --j) {
//            if(board[i][j] != 0) v[cnt++] = board[i][j];
//        }
//        for(int j=0; j<v.size()-1; ++j) {
//            if(v[j] == v[j+1]) {
//                q.push(v[j] * 2);
//                ++j;
//            }
//            else
//                q.push(v[j]);
//        }
//        for(int j=n; j>=1; --j) {
//            if(q.size())
//                board[i][j] = q.front(), q.pop();
//            else
//                board[i][j] = 0;
//        }
//    }
//}
//
//void L() {
//    for(int i=1; i<=n; ++i) {
//        queue<int> q;
//        vector<int> v(n+1); // 맨 마지막 칸 비교를 위해 0으로 채움
//        int cnt = 0;
//        for(int j=1; j<=n; ++j) {
//            if(board[i][j] != 0) v[cnt++] = board[i][j];
//        }
//        for(int j=0; j<v.size()-1; ++j) {
//            if(v[j] == v[j+1]) {
//                q.push(v[j] * 2);
//                ++j;
//            }
//            else
//                q.push(v[j]);
//        }
//        for(int j=1; j<=n; ++j) {
//            if(q.size())
//                board[i][j] = q.front(), q.pop();
//            else
//                board[i][j] = 0;
//        }
//    }
//}
//
//void U() {
//    for(int i=1; i<=n; ++i) {
//        queue<int> q;
//        vector<int> v(n+1); // 맨 마지막 칸 비교를 위해 0으로 채움
//        int cnt = 0;
//        for(int j=1; j<=n; ++j) {
//            if(board[j][i] != 0) v[cnt++] = board[j][i];
//        }
//        for(int j=0; j<v.size()-1; ++j) {
//            if(v[j] == v[j+1]) {
//                q.push(v[j] * 2);
//                ++j;
//            }
//            else
//                q.push(v[j]);
//        }
//        for(int j=1; j<=n; ++j) {
//            if(q.size())
//                board[j][i] = q.front(), q.pop();
//            else
//                board[j][i] = 0;
//        }
//    }
//}
//
//void D() {
//    for(int i=1; i<=n; ++i) {
//        queue<int> q;
//        vector<int> v(n+1); // 맨 마지막 칸 비교를 위해 0으로 채움
//        int cnt = 0;
//        for(int j=n; j>=1; --j) {
//            if(board[j][i] != 0) v[cnt++] = board[j][i];
//        }
//        for(int j=0; j<v.size()-1; ++j) {
//            if(v[j] == v[j+1]) {
//                q.push(v[j] * 2);
//                ++j;
//            }
//            else
//                q.push(v[j]);
//        }
//        for(int j=n; j>=1; --j) {
//            if(q.size())
//                board[j][i] = q.front(), q.pop();
//            else
//                board[j][i] = 0;
//        }
//    }
//}
//
//void dfs(int before, int cnt) {
//    if(cnt==5) {
//        copy();
//        for(auto i : comm) {
//            switch(i) {
//                case 0 :
//                    R();
//                    break;
//                case 1 :
//                    L();
//                    break;
//                case 2 :
//                    U();
//                    break;
//                case 3 :
//                    D();
//                    break;
//            }
//        }
//
//        for(int i=1; i<=n; ++i)
//            for(int j=1; j<=n; ++j)
//                ans = max(ans, board[i][j]);
//
//        return;
//    }
//    for(int i=0; i<4; ++i) {
//        if(i == before) continue;
//        comm.pb(i);
//        dfs(i, cnt + 1);
//        comm.pop_back();
//    }
//}
//
//int main() {
//    _upgrade;
//    cin >> n;
//    ZERO(board_temp);
//    for(int i=1;i<=n;++i)
//        for(int j=1;j<=n;++j)
//            cin >> board_temp[i][j];
//
//    dfs(-1, 0);
//    cout << ans;
//}
