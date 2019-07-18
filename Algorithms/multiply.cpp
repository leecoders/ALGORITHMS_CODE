//O(n^2) 곱셈 알고리즘
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int an, bn;
//
//void normalize(vector<int>& C) {
//    C.push_back(0);
//    for(int i=0; i < C.size(); ++i) {
//        C[i+1] += C[i] / 10;
//        C[i] %= 10;
//    }
//    while(C.size() > 1 && C.back()==0) C.pop_back();
//}
//
//vector<int> multiply(vector<int>& A, vector<int>& B) {
//    vector<int> C(an + bn + 1, 0);
//    for(int i=0; i < an; ++i)
//        for(int j=0; j < bn; ++j)
//            C[i+j] += A[i] * B[j];
//    normalize(C);
//    return C;
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
//    string a, b;
//    cin >> a >> b;
//    an = a.length();
//    bn = b.length();
//    vector<int> A(an);
//    vector<int> B(bn);
//    for(int i=0; i<an; ++i)
//        A[i] = a[an-1-i]-'0';
//    for(int i=0; i<bn; ++i)
//        B[i] = b[bn-1-i]-'0';
//    vector<int> ans = multiply(A, B);
//    for(int i=ans.size()-1; i>=0; --i)
//        cout << ans[i];
//    cout << '\n';
//}