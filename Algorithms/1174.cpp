//#include"bits/stdc++.h"
//using namespace std;
//
//int n;
//int cnt = 1;
//bool check;
//vector<int> ans;
//
//void dfs(int now, int len, int mx) {
//    if(check) return;
//    if(len == mx) {
//        cnt++;
//        if(cnt == n) {
//            for(auto i : ans)
//                cout << i;
//            check = true;
//        }
//        return;
//    }
//    for(int i=0; i<10; ++i) {
//        if(now == i) return;
//        ans.push_back(i);
//        dfs(i, len + 1, mx);
//        ans.pop_back();
//    }
//}
//
//int main() {
//    cin >> n;
//    if(n == 1) {
//        cout << 0;
//        return 0;
//    }
//    for(int i=1; i<=10; ++i) {
//        for(int j=1; j<10; ++j) {
//            ans.push_back(j);
//            dfs(j, 1, i);
//            if(check) {
//                return 0;
//            }
//            ans.pop_back();
//        }
//    }
//    cout << -1;
//}