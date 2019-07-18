//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//bool voca[51][26] = {false};
//bool check[26] = {false};
//int n, k;
//int mx = 0;
//
//void dfs(int now, int cnt) {
//    if(cnt==k) {
//        int cnt_voca = 0;
//        for(int i=1; i<=n; ++i) {
//            bool ok = true;
//            for(int j=0; j<26; ++j) {
//                if(voca[i][j] && !check[j]) { // voca가 true이면서 check가 false일때만 x
//                    ok = false;
//                    break;
//                }
//            }
//            if(ok) cnt_voca++;
//        }
//        mx = max(mx, cnt_voca);
//        return;
//    }
//
//    for(int next = now+1; next < 26; ++next) {
//        if(!check[next]) {  // 반례2 antic 뺴고 체크
//            check[next] = true;
//            dfs(next, cnt + 1);
//            check[next] = false;
//        }
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n >> k;
//    for(int i=1; i<=n; ++i) {
//        string s;
//        cin >> s;
//        for(int j=0; j<s.length(); ++j) {
//            voca[i][s[j]-'a'] = true;
//        }
//    }
//    if(k<5) { // 반례1 anta tica도 못읽음
//        cout << 0;
//        return 0;
//    }
//    check[0]=check['n'-'a']=check['t'-'a']=check['i'-'a']=check['c'-'a']=true;
//    dfs(-1, 5);
//    cout << mx;
//}