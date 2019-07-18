//#include "bits/stdc++.h"
//using namespace std;
//
//int main() {
//    vector<string> v[101];
//    int n;
//    cin >> n;
//    for(int i=0; i<n; ++i) {
//        string s;
//        cin >> s;
//        string now = "";
//        for(int j=0; j <= s.size(); ++j) {
//            if(j != s.size() && ('0' <= s[j] && s[j] <= '9')) {
//                now += s[j];
//            }
//            else if(now.size() > 0) {
//                string real = "";
//                int k=0;
//                while(now[k] == '0') k++;
//                if(k == now.size()) {
//                    v[1].push_back("0");
//                }
//                else {
//                    for (; k < now.size(); ++k) {
//                        real += now[k];
//                    }
//                    v[real.size()].push_back(real);
//                }
//                now = "";
//            }
//        }
//    }
//    for(int i=1; i<=100; ++i) {
//        if(v[i].size()) {
//            sort(v[i].begin(), v[i].end());
//            for(int j=0; j<v[i].size(); ++j) {
//                cout << v[i][j] << '\n';
//            }
//        }
//    }
//}