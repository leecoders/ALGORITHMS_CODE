//#include "bits/stdc++.h"
//using namespace std;
//
//int n, m;
//bool brk[10];
//vector<char> valid;
//int len;
//int ans;
//
//void dfs(string now, int mx) {
//    if(now.size() == mx) {
//        int nowNum = stoi(now);
//        ans = min(ans, mx + abs(nowNum - n));
//        return;
//    }
//    for(int i=0; i<valid.size(); ++i) {
//        now.push_back(valid[i]);
//        dfs(now, mx);
//        now.pop_back();
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> n >> m;
//    for(int i=0; i<m; ++i) {
//        int input;
//        cin >> input;
//        brk[input] = 1;
//    }
//    string nStr = to_string(n);
//    len = nStr.size();
//    for(int i=0; i<10; ++i) {
//        if(!brk[i]) valid.push_back('0' + i);
//    }
//
//    ans = abs(100 - n);
//    for(int i=len-1; i<=len+1; ++i) {
//        if(i < 1) continue;
//        dfs("", i);
//    }
//    cout << ans;
//}