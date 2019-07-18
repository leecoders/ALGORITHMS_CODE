//#include <iostream>
//#include <string.h>
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int n, m;
//    cin >> n >> m;
//    int pool[n+1];
//    bool check[n+1];
//    memset(pool, 0, sizeof(pool));
//    memset(check, 0, sizeof(check));
//    int sum = 0;
//    int printed = 1;
//    for(int i=1; i<=m; ++i) {
//        int input;
//        cin >> input;
//        pool[input]++;
//        if(pool[input] >= printed && !check[input]) {
//            check[input] = true;
//            sum++;
//        }
//        if(sum == n) {
//            memset(check, 0, sizeof(check));
//            int cnt = 0;
//            for(int j=1; j<=n; ++j) {
//                if(pool[j] > printed) {
//                    check[j] = true;
//                    cnt++;
//                }
//            }
//            printed++;
//            sum = cnt;
//            cout << 1;
//        }
//        else cout << 0;
//    }
//}