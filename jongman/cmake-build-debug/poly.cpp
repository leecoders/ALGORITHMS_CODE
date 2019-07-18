//#include <iostream>
//#include <string.h>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int n, k;
//int cache[101][10001];
//vector<int> P;
//
//int f(int N, int K) {
//    if(K == 0) return 1;
//
//    int& ret = cache[N][K];
//    if(ret != -1) return ret;
//
//    ret = 0;
//    for(int i = N+1; i < n && P[i]<=K; ++i) {
//        ret += f(i, K - P[i]);
//    }
//    return ret;
//}
//
//int main() {
//    memset(cache, -1, sizeof(cache));
//    cin >> n >> k;
//    for(int i=0; i<n; ++i) {
//        int input;
//        cin >> input;
//        P.push_back(input);
//    }
//    sort(P.begin(), P.end());
//    cout << f(0, k);
//}
}