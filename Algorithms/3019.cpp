//#include"bits/stdc++.h"
//using namespace std;
//
//int c, p;
//int h[101];
//
//int f(string s) {
//    int ret = 0;
//    int len = s.size();
//    for(int i=1; i + len - 1 <= c; ++i) {
//        bool check = true;
//        int base = (int)s[0] - h[i];
//        for(int j=1; j<len; ++j) {
//            if(base != (int)s[j] - h[i + j]) {
//                check = false;
//                break;
//            }
//        }
//        if(check) ret++;
//    }
//    return ret;
//}
//
//int main() {
//    cin >> c >> p;
//    for(int i=1; i<=c; ++i) {
//        cin >> h[i];
//    }
//    switch(p) {
//        case 1 :
//            cout << f("0") + f("0000");
//            break;
//        case 2 :
//            cout << f("00");
//            break;
//        case 3 :
//            cout << f("001") + f("10");
//            break;
//        case 4 :
//            cout << f("100") + f("01");
//            break;
//        case 5 :
//            cout << f("000") + f("101") + f("10") + f("01");
//            break;
//        case 6 :
//            cout << f("000") + f("011") + f("00") + f("20");
//            break;
//        case 7 :
//            cout << f("000") + f("110") + f("00") + f("02");
//            break;
//    }
//}