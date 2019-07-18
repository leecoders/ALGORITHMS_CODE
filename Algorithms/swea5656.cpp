//#include "bits/stdc++.h"
//using namespace std;
//
//const int INF = 1234567890;
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//int n, w, h;
//int board[17][13];
//int temp[17][13];
//int bricks;
//int bricks_temp;
//int ans;
//vector<int> v;
//
//void copy() {
//    for(int i=1; i<=h; ++i)
//        for(int j=1; j<=w; ++j)
//            board[i][j] = temp[i][j];
//}
//
//void pang(int y, int x) {
//    int power = board[y][x];
//    if(power) {
//        bricks--;
//        board[y][x] = 0;
//    }
//    if(power > 1) {
//        for (int i = 1; i < power; ++i) {
//            for (int j = 0; j < 4; ++j) {
//                int ny = y + dy[j] * i;
//                int nx = x + dx[j] * i;
//                if (ny < 1 || nx < 1 || ny > h || nx > w) continue;
//                if(board[ny][nx])
//                    pang(ny, nx);
//            }
//        }
//    }
//}
//
//void getY(int x) {
//    int y = 1;
//    while(y <= h && !board[y][x]) y++;
//    pang(y, x);
//}
//
//void rain() {
//    for(int i=1; i<=w; ++i) {
//        queue<int> q;
//        for(int j=h; j>=1; --j) {
//            if(board[j][i]) {
//                q.push(board[j][i]);
//                board[j][i] = 0;
//            }
//        }
//        int y = h;
//        while(!q.empty()) {
//            board[y--][i] = q.front();
//            q.pop();
//        }
//    }
//}
//
//void dfs(int cnt) {
//    if(ans == 0) return;
//    if(cnt == n) {
//        bricks = bricks_temp;
//        copy();
//        for(int i=0; i<n; ++i) {
//            getY(v[i]);
//            rain();
//        }
//        ans = min(ans, bricks);
//        return;
//    }
//    for(int i=1; i<=w; ++i) {
//        v.push_back(i);
//        dfs(cnt + 1);
//        v.pop_back();
//    }
//}
//
//int main() {
//    int tt;
//    cin >> tt;
//    for(int tc = 1; tc <= tt; ++tc) {
//        bricks_temp = 0;
//        ans = INF;
//        cin >> n >> w >> h;
//        for(int i=1; i<=h; ++i) {
//            for(int j=1; j<=w; ++j) {
//                cin >> temp[i][j];
//                if(temp[i][j]) bricks_temp++;
//            }
//        }
//        dfs(0);
//        cout << "#" << tc << ' ' << ans << '\n';
//    }
//}

//#include <iostream>
//#include <string.h>
//#include <algorithm>
////#include <vector>
//using namespace std;
//
//int N, W, H;
//int map[15][12];
//int T;
//int result;
//
//void printmap() {
//    for (int y = 0; y < H; y++) {
//        for (int x = 0; x < W; x++) {
//            cout << map[y][x] << " ";
//        }
//        cout << endl;
//    }
//}
//
//
//void bomb(int y, int x) {
//    if (y >= H || x >= W) {
//        return;
//    }
//    if (y < 0 || x < 0) {
//        return;
//    }
//
//    int range = map[y][x];
//    map[y][x] = 0;
//    for (int i = 0; i < range; i++) {
//        bomb(y + i, x);
//        bomb(y - i, x);
//        bomb(y, x + i);
//        bomb(y, x - i);
//    }
//}
//
//void down() {
//    for (int x = 0; x < W; x++) {
//        for (int y = H-1; y > 0; y--) {
//            if (map[y][x] == 0) {
//                //int newpos = -1;
//                for (int k = y; k >= 0; k--) {
//                    if (map[k][x] != 0) {
//                        swap(map[k][x], map[y][x]);
//                        //newpos = k;
//                        break;
//                    }
//                }
//                //if (newpos != -1) {
//                //  int temp = map[newpos][x];
//                //  map[newpos][x] = map[y][x];
//                //  map[y][x] = temp;
//                //}
//            }
//        }
//    }
//}
//void res(int count, int posx) {
//    int tempmap[15][12];
//    if (count > N) {
//        int temp = 0;
//        for (int y = 0; y < H; y++) {
//            for (int x = 0; x < W; x++) {
//                if (map[y][x] != 0) {
//                    temp++;
//                }
//            }
//        }
//        if (result > temp) {
//            result = temp;
//        }
//        return;
//    }
//
//    for (int y = 0; y < H; y++) {
//        if (map[y][posx] != 0) {
//            bomb(y, posx);
//            down();
//            break;
//        }
//    }
//    memcpy(tempmap, map, sizeof(map));
//    if (count == N) {
//        //resarr.push_back(-1);
//        res(count + 1, -1);
//        //resarr.pop_back();
//        memcpy(map, tempmap, sizeof(tempmap));
//    }
//    else {
//        for (int posxx = 0; posxx < W; posxx++) {
//            //resarr.push_back(posxx);
//            res(count + 1, posxx);
//            //resarr.pop_back();
//            memcpy(map, tempmap, sizeof(tempmap));
//        }
//    }
//}
//
//
//
//
//int main() {
//    cin >> T;
//    for (int test = 0; test < T; test++) {
//        result = 999999;
//        cin >> N;
//        cin >> W;
//        cin >> H;
//        memset(map, -1, sizeof(map));
//        for (int y = 0; y < H; y++) {
//            for (int x = 0; x < W; x++) {
//                cin >> map[y][x];
//            }
//        }
//
//        int tempmap[15][12];
//
//        //vector<int> resarr;
//        memcpy(tempmap, map, sizeof(map));
//        for (int posx = 0; posx < W; posx++) {
//            //cnt++;
//            //resarr.push_back(posx);
//            res(1, posx);
//            //resarr.pop_back();
//            memcpy(map, tempmap, sizeof(tempmap));
//        }
//        cout <<"#"<<test+1<<" "<< result<<endl;
//    }
//
//}