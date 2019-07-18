//#include "bits/stdc++.h"
//using namespace std;
//
//int len;
//vector<int> v, p;
//
//int main() {
//    int n, k;
//    cin >> n >> k;
//    string s;
//    cin >> s;
//    len = n;
//    string num = "";
//    string ans = "";
//    bool minus = false;
//    if(k==0) {
//        cout << s;
//        return 0;
//    }
//    for(int i=0; i<=s.size(); ++i) {
//        if(i==s.size() || s[i] == ',') {
//            int input = stoi(num);
//            if(minus) input*=-1;
//            v.push_back(input);
//            minus = false;
//            num = "";
//        }
//        else {
//            if(s[i] == '-') {
//                minus = 1;
//            }
//            else {
//                num += s[i];
//            }
//        }
//    }
//    for(int i=0; i<k; ++i) {
//        if(i&1) {
//            v.clear();
//            for(int j=0; j<p.size()-1; ++j) {
//                v.push_back(p[j+1] - p[j]);
//            }
//        }
//        else {
//            p.clear();
//            for(int j=0; j<v.size()-1; ++j) {
//                p.push_back(v[j+1] - v[j]);
//            }
//        }
//
//        if(i == k-1) {
//            if(i&1) {
//                for(int j=0; j<v.size()-1; ++j) {
//                    ans += to_string(v[j]);
//                    ans += ",";
//                }
//                ans += to_string(v[v.size()-1]);
//            }
//            else {
//                for(int j=0; j<p.size()-1; ++j) {
//                    ans += to_string(p[j]);
//                    ans += ",";
//                }
//                ans += to_string(p[p.size()-1]);
//            }
//        }
//    }
//    cout << ans;
//}