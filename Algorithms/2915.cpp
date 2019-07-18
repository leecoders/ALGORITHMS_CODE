//#include "bits/stdc++.h"
//using namespace std;
//
//string s;
//string ten[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
//string one[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
//int len;
//int mn = 100;
//
//int main() {
//    cin >> s;
//    len = s.size();
//    sort(s.begin(), s.end());
//    do {
//        for(int i=0; i<=len; ++i) {
//            int now = 0;
//            string check = "";
//            string a = s.substr(0, i);
//            string b = s.substr(i);
//            for(int j=0; j<10; ++j) {
//                if(ten[j] == a) {
//                    now += j * 10;
//                    check += a;
//                }
//            }
//            for(int j=0; j<10; ++j) {
//                if(one[j] == b) {
//                    now += j;
//                    check += b;
//                }
//            }
//            if(check == s) {
//
//                mn = min(mn, now);
//            }
//        }
//    } while(next_permutation(s.begin(), s.end()));
//    cout << ten[mn/10] + one[mn%10];
//}