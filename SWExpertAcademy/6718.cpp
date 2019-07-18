//#include <iostream>
//#include <string.h>
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int t;
//    cin >> t;
//    for(int tc=1; tc<=t; ++tc) {
//        int input;
//        cin >> input;
//        input /= 100;
//        if(input==0) {
//            cout << '#' << tc << ' ' << 0 << '\n';
//            continue;
//        }
//        else {
//            string s = to_string(input);
//            int len = s.length();
//            if(len > 5) len = 5;
//            cout << '#' << tc << ' ' << len << '\n';
//        }
//    }
//}