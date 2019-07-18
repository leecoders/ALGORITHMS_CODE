//#include"bits/stdc++.h"
//using namespace std;
//
//int n, x;
//int board[21][21];
//bool visited[21][21];
//int ans = 0;
//
//int main() {
//    int tt;
//    cin >> tt;
//    for(int tc = 1; tc <= tt; ++tc) {
//        memset(visited, 0, sizeof(visited));
//        ans = 0;
//        cin >> n >> x;
//        for(int i=1; i<=n; ++i) {
//            for(int j=1; j<=n; ++j) {
//                cin >> board[i][j];
//            }
//        }
//        for(int i=1; i<=n; ++i) {
//            bool check = true;
//            int flat = 1;
//            for(int j=2; j<=n; ++j) {
//                if(!visited[i][j-1] && board[i][j-1] == board[i][j]) {
//                    flat++;
//                }
//                else if(abs(board[i][j] - board[i][j-1]) > 1){
//                    check = false;
//                    break;
//                }
//                else if(board[i][j-1] < board[i][j]) {
//                    if(flat < x) {
//                        check = false;
//                        break;
//                    }
//                    else {
//                        flat = 1;
//                        continue;
//                    }
//                }
//                else if(board[i][j-1] > board[i][j]) {
//                    bool possible = true;
//                    for(int k=1; k<x; ++k) {
//                        if(j+k > n) {
//                            possible = false;
//                            break;
//                        }
//                        if(board[i][j]!=board[i][j+k]) {
//                            possible = false;
//                            break;
//                        }
//                    }
//                    if(possible) {
//                        for(int k=0; k<x; ++k) visited[i][j+k] = 1;
//                        flat = 1;
//                        continue;
//                    }
//                    else {
//                        check = false;
//                        break;
//                    }
//                }
//            }
//            if(check) {
//                ans++;
//            }
//
//        }
//        memset(visited, 0, sizeof(visited));
//        for(int i=1; i<=n; ++i) {
//            bool check = true;
//            int flat = 1;
//            for(int j=2; j<=n; ++j) {
//                if(!visited[j-1][i] && board[j-1][i] == board[j][i]) {
//                    flat++;
//                }
//                else if(abs(board[j][i] - board[j-1][i]) > 1){
//                    check = false;
//                    break;
//                }
//                else if(board[j-1][i] < board[j][i]) {
//                    if(flat < x) {
//                        check = false;
//                        break;
//                    }
//                    else {
//                        flat = 1;
//                        continue;
//                    }
//                }
//                else if(board[j-1][i] > board[j][i]) {
//                    bool possible = true;
//                    for(int k=1; k<x; ++k) {
//                        if(j+k > n) {
//                            possible = false;
//                            break;
//                        }
//                        if(board[j][i]!=board[j+k][i]) {
//                            possible = false;
//                            break;
//                        }
//                    }
//                    if(possible) {
//                        for(int k=0; k<x; ++k) visited[j+k][i] = 1;
//                        flat = 1;
//                        continue;
//                    }
//                    else {
//                        check = false;
//                        break;
//                    }
//                }
//            }
//            if(check) {
//                ans++;
//            }
//        }
//        cout << "#" << tc << " " << ans << '\n';
//    }
//}