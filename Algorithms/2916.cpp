//#include"bits/stdc++.h"
//using namespace std;
//
//bool c[361] = {false};
//vector<int> v;
//
//void dfs(int now, int sum) {
//    if(now == v.size()) return;
//
//    dfs(now + 1, sum);
//    for(int i=1; i<360; ++i) {
//        int next = sum + i * v[now];
//        while(next >= 360) next -= 360;
//        if(c[next]) break;
//        c[next] = true;
//        dfs(now + 1, next);
//
//    }
//    for(int i=1; i<360; ++i) {
//        int next = sum + i * v[now];
//        while(next >= 360) next -= 360;
//        if(c[360 - next]) break;
//        c[360 - next] = true;
//        dfs(now + 1, 360 - next);
//    }
//    for(int i=1; i<360; ++i) {
//        int next = sum - i * v[now];
//        if(next < 0) next *= -1;
//        while(next >= 360) next -= 360;
//        if(c[next]) break;
//        c[next] = true;
//        dfs(now + 1, next);
//    }
//    for(int i=1; i<360; ++i) {
//        int next = sum - i * v[now];
//        if(next < 0) next *= -1;
//        while(next >= 360) next -= 360;
//        if(c[360 - next]) break;
//        c[360 - next] = true;
//        dfs(now + 1, 360 - next);ㄷ
//    }
//}
//
//int main() {
//    int n, k;
//    cin >> n >> k;
//    c[0] = true;
//    for(int i=0; i<n; ++i) {
//        int input;
//        cin >> input;
//        v.push_back(input);
//    }
//    dfs(0, 0);
//    for(int i=0; i<k; ++i) {
//        int input;
//        cin >> input;
//        if(c[input]) cout << "YES" << '\n';
//        else cout << "NO" << '\n';
//    }
//
//}