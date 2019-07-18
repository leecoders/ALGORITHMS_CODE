//#include "bits/stdc++.h"
//using namespace std;
//
//int n, m;
//int mx;
//int ans1, ans2;
//int roll[1001];
//int cnt[1001];
//
//int main() {
//    cin >> n >> m;
//    for(int i=1; i<=m; ++i) {
//        int a, b;
//        cin >> a >> b;
//        if(b - a + 1 > mx) {
//            mx = b - a + 1;
//            ans1 = i;
//        }
//        for(int j=a; j<=b; ++j)
//            if(!roll[j]) roll[j] = i;
//    }
//    for(int i=1; i<=n; ++i)
//        cnt[roll[i]]++;
//    mx = 0;
//    for(int i=1; i<=m; ++i) {
//        if(cnt[i] > mx) {
//            mx = cnt[i];
//            ans2 = i;
//        }
//    }
//    cout << ans1 << '\n' << ans2;
//}