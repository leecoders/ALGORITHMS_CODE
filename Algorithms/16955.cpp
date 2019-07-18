//#include "bits/stdc++.h"
//using namespace std;
//
//int dy[] = {1, -1, -1, 1, 0, 0, 1, -1};
//int dx[] = {1, -1, 1, -1, 1, -1, 0, 0};
//
//int main() {
//    string board[10];
//    for(int i=0; i<10; ++i)
//        cin >> board[i];
//    for(int i=0; i<10; ++i) {
//        for(int j=0; j<10; ++j) {
//            if(board[i][j] == '.') {
//                for(int k=0; k<4; ++k) {
//                    int mok = 0;
//                    int y = i;
//                    int x = j;
//                    while(!(y+dy[k*2]<0 || x+dx[k*2]<0 || y+dy[k*2]>9 || x+dx[k*2]>9) && board[y+dy[k*2]][x+dx[k*2]]=='X') {
//                        mok++;
//                        y+=dy[k*2];
//                        x+=dx[k*2];
//                    }
//                    y = i;
//                    x = j;
//                    while(!(y+dy[k*2+1]<0 || x+dx[k*2+1]<0 || y+dy[k*2+1]>9 || x+dx[k*2+1]>9) && board[y+dy[k*2+1]][x+dx[k*2+1]]=='X') {
//                        mok++;
//                        y+=dy[k*2+1];
//                        x+=dx[k*2+1];
//                    }
//                    if(mok>=4) {
//                        cout << 1;
//                        return 0;
//                    }
//                }
//            }
//        }
//    }
//    cout << 0;
//}