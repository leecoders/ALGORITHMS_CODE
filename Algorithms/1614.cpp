//#include "bits/stdc++.h"
//using namespace std;
//
//const int cycle = 8;
//int fing[] = {1, 2, 2, 2, 1};
//long long res, rest;
//
//int main() {
//    long long n, m;
//    cin >> n >> m;
//    res = m / fing[n-1] * cycle;
//    rest = m % fing[n-1];
//    bool check = true;
//    while(check) {
//        for (int i = 0; i < 4; ++i) {
//            if(i == n-1) {
//                if(rest == 0) {
//                    check = false;
//                    break;
//                }
//                rest--;
//            }
//            res++;
//        }
//        if(!check) break;
//        for (int i = 4; i > 0; --i) {
//            if(i == n-1) {
//                if(rest == 0) {
//                    check = false;
//                    break;
//                }
//                rest--;
//            }
//            res++;
//        }
//    }
//    cout << res;
//}