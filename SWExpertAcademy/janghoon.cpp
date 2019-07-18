//#include"bits/stdc++.h"
//using namespace std;
//
//int arr[21];
//int n, b;
//int mn;
//
//void dfs(int now, int sum) {
//    if(sum >= b) {
//        mn = min(mn, sum);
//        return;
//    }
//
//    for(int i=now+1; i<=n; ++i) {
//        dfs(i, sum + arr[i]);
//    }
//}
//
//int main() {
//    int asdfasdf;
//    cin >> asdfasdf;
//    for(int tc=1; tc <= asdfasdf; ++tc) {
//        mn = INT_MAX;
//        cin >> n >> b;
//        for(int i=1; i<=n; ++i) {
//            cin >> arr[i];
//        }
//        dfs(0, 0);
//        cout << "#" << tc << " " << mn - b << '\n';
//    }
//}