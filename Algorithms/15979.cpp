//#include <iostream>
//using namespace std;
//
//int gcd(int a, int b) {
//    if(a==0) return b;
//    return gcd(b%a, a);
//}
//
//int main() {
//    int M, N;
//    cin >> M >> N;
//    if(M==0 && N==0) {
//        cout << 0;
//        return 0;
//    }
//    if(M<0) M*=-1;
//    if(N<0) N*=-1;
//    if(gcd(M, N) == 1) cout << 1;
//    else cout << 2;
//}