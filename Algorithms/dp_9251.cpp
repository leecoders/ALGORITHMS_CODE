//#include <iostream>
//#include <string.h>
//#include <algorithm>
//using namespace std;
//
//string A, B;
//int a_len, b_len;
//int cache[1001][1001];
//
//int lcs(int a, int b) {
//    if(a==a_len || b==b_len) return 0;
//
//    int& ret = cache[a][b];
//    if(ret != -1) return ret;
//
//    ret = 0;
//    if(A[a] == B[b]) return ret = lcs(a+1, b+1) + 1;
//    ret = max(lcs(a+1, b), lcs(a, b+1));
//
//    return ret;
//}
//
//int main() {
//    memset(cache, -1, sizeof(cache));
//    cin >> A >> B;
//    a_len = A.length();
//    b_len = B.length();
//    cout << lcs(0, 0);
//}
