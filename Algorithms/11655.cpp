//#include "bits/stdc++.h"
//using namespace std;
//
//int main() {
//    string s;
//    getline(cin, s);
//    for(int i=0; i<s.size(); ++i) {
//        int n = int(s[i]);
//        if('a' <= s[i] && s[i] <= 'z') {
//            n = n - 'a' + 13;
//            if(n >= 26) n -= 26;
//            s[i] = char(n + 'a');
//        }
//        else if('A' <= s[i] && s[i] <= 'Z'){
//            n = n - 'A' + 13;
//            if(n >= 26) n -= 26;
//            s[i] = char(n + 'A');
//        }
//        else {
//            n = n - '0';
//            s[i] = char(n + '0');
//        }
//    }
//    cout << s;
//}