//#include <iostream>
//#include <string.h>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int cache[101][8001];
//vector<int> P;
//
//int f(int n, int k) {
//    if(k==0) return 1;
//    if(n==0 || k<0) return 0;
//
//    if(k<=8000) {
//
//        int &ret = cache[n][k];
//        if (ret != -1) return ret;
//
//        return ret = f(n - 1, k) + f(n, k - P[n - 1]);
//    }
//    else {
//        return f(n - 1, k) + f(n, k - P[n - 1]);
//    }
//}
//
//int main() {
//    memset(cache, -1, sizeof(cache));
//    int n, k;
//    cin >> n >> k;
//    for(int i=0; i<n; ++i) {
//        int input;
//        cin >> input;
//        P.push_back(input);
//    }
//    sort(P.begin(), P.end());
//    cout << f(n, k);
//}