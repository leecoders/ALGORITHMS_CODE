//#include <iostream>
//using namespace std;
//
//long long cache[101];
//
//void pre_calc() {
//    cache[1] = cache[2] = cache[3] = 1;
//    cache[4] = cache[5] = 2;
//    for(int i=6; i<=100; ++i) {
//        cache[i] = cache[i-1] + cache[i-5];
//    }
//}
//
//int main() {
//    pre_calc();
//    int t;
//    cin >> t;
//    while(t--) {
//        int n;
//        cin >> n;
//        cout << cache[n] << '\n';
//    }
//}