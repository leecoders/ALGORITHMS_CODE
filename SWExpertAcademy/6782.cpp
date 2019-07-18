//#include <iostream>
//#include <math.h>
//#include <string.h>
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int t;
//    cin >> t;
//    for(int tc=1; tc <= t; ++tc) {
//        long long n;
//        cin >> n;
//        int cnt=0;
//        while(1) {
//            if(n==2) break;
//            long long sqrtn = sqrt(n);
//            if(sqrtn * sqrtn == n) {
//                cnt++;
//                n = sqrtn;
//            }
//            else {
//                cnt += (sqrtn + 1) * (sqrtn + 1) - n + 1;
//                n = sqrtn + 1;
//            }
//        }
//        cout << '#' << tc << ' ' << cnt << '\n';
//    }
//}