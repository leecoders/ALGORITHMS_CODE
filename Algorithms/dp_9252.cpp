//#include <iostream>
//#include <string.h>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//string A, B;
//int a_len, b_len;
//int cache[1001][1001];
//string result;
//
//int lcs(int a, int b) {
//    if(a==a_len || b==b_len) return 0;
//
//    int& ret = cache[a][b];
//    if(ret != -1) return ret;
//
//    ret = 0;
//    if(A[a] == B[b])
//        return ret = lcs(a + 1, b + 1) + 1;
//
//    ret = max(lcs(a+1, b), lcs(a, b+1));
//
//    return ret;
//}
//
//void reconstruct(int a, int b) {
//    //기저 사례(인덱스 범위 초과시 그만)
//    if (a == A.size() || b == B.size()) return;
//    //공통부분 찾았을 경우
//    if (A[a] == B[b]) {
//        result += A[a];
//        reconstruct(a + 1, b + 1);
//    }
//    //s1의 인덱스를 추가했을 경우 s2의 인덱스를 추가했을 때보다 LCS의 길이가 크거나 같은 경우
//    else if (cache[a + 1][b] >= cache[a][b + 1])
//        reconstruct(a + 1, b);
//    else
//        reconstruct(a, b + 1);
//}
//
//int main() {
//    memset(cache, -1, sizeof(cache));
//    cin >> A >> B;
//    a_len = A.length();
//    b_len = B.length();
//    cout << lcs(0, 0) << '\n';
//    reconstruct(0, 0);
//    cout << result;
//}
