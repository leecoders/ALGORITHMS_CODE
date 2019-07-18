//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <algorithm>
//#include <queue>
//#include <limits.h>
//using namespace std;
//
//int n, m;
//int board[11][11];
//int toA[11];
//int toB[11];
//int T[2];
//vector<pair<int, int>> p;
//vector<pair<int, int>> s;
//vector<int> A; // first : A까지의 거리
//vector<int> B; // first : B까지의 거리
//int ans = INT_MAX;
//
//void calc() {
//    vector<int> AV; // 원래 벡터의 순서를 바꿀 수 없으므로
//    vector<int> BV;
//    AV.assign(A.begin(), A.end());
//    BV.assign(B.begin(), B.end());
//    sort(AV.begin(), AV.end());
//    sort(BV.begin(), BV.end());
//
//    queue<int> q1, q2; // 1, 2번 계단 도착 사람
//    queue<int> s1, s2; // 1, 2번 계단
//    int p1=0, p2=0;
//    int cnt = 0; // 계단 빠져나간 인원
//    for(int t=1; t<150; ++t) {
//        while(!s1.empty() && s1.front() == t) { // 시간 t에 계단 빠져나감
//            cnt++;
//            s1.pop();
//        }
//        while(!s2.empty() && s2.front() == t) {
//            cnt++;
//            s2.pop();
//        }
//        if(cnt == m) {
//            ans = min(ans, t);
//            return;
//        }
//        while(!q1.empty() && s1.size() < 3) {
//            s1.push(t + T[0]);
//            q1.pop();
//        }
//        while(!q2.empty() && s2.size() < 3) {
//            s2.push(t + T[1]);
//            q2.pop();
//        }
//        while(p1 < AV.size() && AV[p1] == t) q1.push(AV[p1++]); // 시간 t에 도착했다면 전부 대기시킴
//        while(p2 < BV.size() && BV[p2] == t) q2.push(BV[p2++]); // 마지막에 해줘야 다음 t+1에서 계단에 들어감.
//    }
//}
//
//void dfs(int now) {
//    if(now == m) {
//        calc();
//        return;
//    }
//
//    A.push_back(toA[now]); // now를 A에 넣는다.
//    dfs(now + 1);
//    A.pop_back(); // A에서 뺀다. 그런데 정렬 순서가 바뀌었다..
//
//    B.push_back(toB[now]);
//    dfs(now + 1);
//    B.pop_back();
//}
//
//int main() {
//    int tt;
//    cin >> tt;
//    for(int tc = 1; tc <= tt; ++tc) {
//        ans = INT_MAX;
//        p.clear(), s.clear(), A.clear(), B.clear();
//        cin >> n;
//        for(int i=1; i<=n; ++i) {
//            for(int j=1; j<=n; ++j) {
//                cin >> board[i][j];
//                if(board[i][j] == 1) p.push_back(make_pair(i, j));
//                else if(board[i][j] != 0)s.push_back(make_pair(i, j));
//            }
//        }
//        T[0] = board[s[0].first][s[0].second];
//        T[1] = board[s[1].first][s[1].second];
//        m = p.size();
//        for(int i=0; i<m; ++i) {
//            toA[i] = abs(s[0].first - p[i].first) + abs(s[0].second - p[i].second);
//            toB[i] = abs(s[1].first - p[i].first) + abs(s[1].second - p[i].second);
//        }
//        dfs(0);
//        cout << "#" << tc << " " << ans << '\n';
//    }
//}