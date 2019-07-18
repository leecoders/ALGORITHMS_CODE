//#include <iostream>
//#include <cstring>
//#include <vector>
//
//bool dp[2001][2001] = {0};
//
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int n;
//    cin >> n;
//    vector<int> v(n+1);
//    for(int i=1; i<=n; ++i)
//        cin >> v[i];
//    for(int i=1; i<=n; ++i) {
//        dp[i][i] = 1;
//        if(v[i-1] == v[i])
//            dp[i-1][i] = 1;
//    }
//    for(int i=3; i<=n; ++i) {
//        for(int j=1; j <= n-i+1; ++j) {
//            if(v[j] == v[j+i-1] && dp[j+1][j+i-2])
//                dp[j][j+i-1] = 1;
//        }
//    }
//    int m;
//    cin >> m;
//    for(int i=0; i<m; ++i) {
//        int a, b;
//        cin >> a >> b;
//        cout << dp[a][b] << '\n';
//    }
//}