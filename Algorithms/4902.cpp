//#include"bits/stdc++.h"
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int tc = 1;
//    while(1) {
//        int mx = INT_MIN;
//        int n;
//        cin >> n;
//        if(n==0) break;
//        int board[n+1][2*n];
//        int psum[n+1][2*n];
//        memset(psum, 0, sizeof(psum));
//        for(int i=1; i<=n; ++i) {
//            psum[i][1] = board[i][1];
//            for(int j=1; j<=2*i-1; ++j) {
//                cin >> board[i][j];
//                psum[i][j] = psum[i][j-1] + board[i][j];
//            }
//        }
//
//        for(int i=1; i<=n; ++i) {
//            for(int j=1; j<=2*i-1; ++j) {
//                if(j%2==1) {
//                    int sum = board[i][j];
//                    mx = max(mx, sum);
//                    int base = 2;
//                    for(int k=2; k<=n; ++k) {
//                        int row = i + (k - 1);
//                        if(row > n) break;
//                        sum += psum[row][j+base] - psum[row][j-1];
//                        mx = max(mx, sum);
//                        base += 2;
//                    }
//                }
//                else {
//                    int sum = board[i][j];
//                    mx = max(mx, sum);
//                    int base = 2;
//                    for(int k=2; k<=n; ++k) {
//                        int row = i - (k - 1);
//                        if(row < 1 || j-base < 1 || j+(k-1) > row*2-1) break;
//                        sum += psum[row][j] - psum[row][j-base-1];
//                        mx = max(mx, sum);
//                        base += 2;
//                    }
//                }
//            }
//        }
//
//        cout << tc++ << ". " << mx << '\n';
//    }
//}