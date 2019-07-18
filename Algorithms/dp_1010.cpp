//#include <iostream>
//#include <string.h>
//using namespace std;
//
//int cache[30][30];
//int n, m;
//
//int cnt_bridge(int line, int target) {
//    if(line == n) return 1;
//    int& ret = cache[line][target];
//    if(ret != -1) return ret;
//
//    ret = 0;
//    for(int next = target + 1; next <= m; ++next) {
//        ret += cnt_bridge(line+1, next);
//    }
//    return ret;
//}
//
//int main() {
//    int t;
//    cin >> t;
//    while(t--) {
//        memset(cache, -1, sizeof(cache));
//        cin >> n >> m;
//        cout << cnt_bridge(0, 0) << '\n';
//    }
//}