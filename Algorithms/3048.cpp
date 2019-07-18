//#include "bits/stdc++.h"
//using namespace std;
//
//bool dir[26];
//int l1, l2;
//
//int main() {
//    cin >> l1 >> l2;
//    string s1, s2;
//    cin >> s1 >> s2;
//    reverse(s1.begin(), s1.end());
//    for(int i=0; i<l1; ++i) {
//        dir[s1[i] - 'A'] = 1;
//    }
//    string s = s1 + s2;
//    int T;
//    cin >> T;
//    for(int i=0; i<T; ++i) {
//        for(int j=0; j<s.size()-1; ++j) {
//            if(dir[s[j] - 'A'] == 1 && dir[s[j+1] - 'A'] == 0) {
//                swap(s[j], s[j+1]);
//                j++;
//            }
//        }
//    }
//    cout << s;
//}