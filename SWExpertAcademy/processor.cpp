//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <limits.h>
//using namespace std;
//
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//int board[13][13];
//int max_core, min_len;
//int n, m;
//vector<pair<int, int>> v;
//
////void show() {
////    for(int i=1; i<=n; ++i) {
////        for(int j=1; j<=n; ++j) {
////            cout << board[i][j] << ' ';
////        }
////        cout << '\n';
////    }
////    cout << '\n';
////}
//
//bool is_end(int y, int x) {
//    return y==1 || y==n || x==1 || x==n;
//}
//
//bool check(int y, int x, int dir) {
//    while(1) {
//        y += dy[dir];
//        x += dx[dir];
//        if(board[y][x]) return false;
//        if(is_end(y, x)) return true;
//    }
//}
//
//int install(int y, int x, int dir) {
//    int len = 0;
//    while(1) {
//        y += dy[dir];
//        x += dx[dir];
//        if(board[y][x] != 0) return 0;
//        board[y][x] = 2;
//        ++len;
//        if(is_end(y, x)) return len;
//    }
//}
//
//void uninstall(int y, int x, int dir) {
//    while(1) {
//        y += dy[dir];
//        x += dx[dir];
//        if(board[y][x] != 2) return;
//        board[y][x] = 0;
//        if(is_end(y, x)) return;
//    }
//}
//
//void dfs(int now, int cnt, int len) {
//    if(cnt + m - now < max_core) return;
//    if(now == m) {
//        if(cnt > max_core) {
//            max_core = cnt;
//            min_len = len;
//        }
//        else if(cnt == max_core && min_len > len) {
//            min_len = len;
//        }
//        return;
//    }
//    int y = v[now].first;
//    int x = v[now].second;
//    if(is_end(y, x)) {
//        dfs(now + 1, cnt + 1, len);
//        return;
//    }
//    for(int i=0; i<4; ++i) {
//        if(!check(y, x, i)) {
//            dfs(now + 1, cnt, len);
//            continue;
//        }
//        int add = install(y, x, i);
//        dfs(now + 1, cnt + 1, len + add);
//        uninstall(y, x, i);
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int tt;
//    cin >> tt;
//    for(int tc = 1; tc <= tt; ++tc) {
//        v.clear();
//        max_core = INT_MIN;
//        min_len = INT_MAX;
//        cin >> n;
//        m = 0;
//        for(int i=1; i<=n; ++i) {
//            for(int j=1; j<=n; ++j) {
//                cin >> board[i][j];
//                if(board[i][j]) {
//                    v.push_back(make_pair(i, j));
//                }
//            }
//        }
//        m = v.size();
//        dfs(0, 0, 0);
//        cout << "#" << tc << " " << min_len << '\n';
//    }
//}

//삼성 답안 : visit 체크하는 점이 다르고, 미리 연결 가능한지 체크해보지않고 ny, nx를 늘이며 visit방문하다가 x이면 저장된 ny, nx부터 dy, dx를 빼가며 복귀
//#include<stdio.h>
//
//int n, core[12][2], corePtr, board[12][12], dir[4][2] = { { -1,0 },{ 0,1 },{ 1,0 },{ 0,-1 } }, cmp, ans=2e9;
//bool visited[12][12];
//void init()
//{
//    ans = 2e9, cmp = 0, corePtr = 0;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < 2; j++) core[i][j] = 0;
//        for (int j = 0; j < n; j++) core[i][j] = visited[i][j] = 0;
//    }
//}
//void dfs(int pos, int cnt, int val)
//{
//    if (pos == corePtr)
//    {
//        if (cmp < cnt)
//        {
//            cmp = cnt;
//            ans = val;
//        }
//        else if(cmp == cnt)
//            ans = ans > val ? val : ans;
//        return;
//    }
//    if (core[pos][0] == 0 || core[pos][0] == n - 1 || core[pos][1] == 0 || core[pos][1] == n - 1)
//    {
//        dfs(pos + 1, cnt + 1, val);
//        return;
//    }
//    for (int i = 0; i < 4; i++)
//    {
//        int nx = core[pos][0], ny = core[pos][1], len = 0;
//        bool f = true;
//        while (1)
//        {
//            nx += dir[i][0], ny += dir[i][1];
//            if (nx < 0 || ny < 0 || nx == n || ny == n) break;
//            if (visited[nx][ny])
//            {
//                f = false;
//                break;
//            }
//            visited[nx][ny] = true;
//            len++;
//        }
//        if (f) dfs(pos + 1, cnt + 1, val + len);
//        while (nx - dir[i][0] != core[pos][0] || ny - dir[i][1] != core[pos][1])
//        {
//            nx -= dir[i][0], ny -= dir[i][1];
//            visited[nx][ny] = false;
//        }
//    }
//    dfs(pos + 1, cnt, val);
//}
//int main()
//{
//    int T;
//
//    scanf("%d", &T);
//    for (int tc = 1; tc <= T; tc++)
//    {
//        scanf("%d", &n);
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                scanf("%d", &board[i][j]);
//                if (board[i][j] == 1)
//                    visited[i][j] = true, core[corePtr][0] = i, core[corePtr][1] = j, corePtr++;
//            }
//        }
//        dfs(0, 0, 0);
//        printf("#%d %d\n", tc, ans);
//        init();
//    }
//}