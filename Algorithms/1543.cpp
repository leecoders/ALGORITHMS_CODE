//#include"bits/stdc++.h"
//using namespace std;
//
//int start = 0;
//vector<int> ret;
//
//vector<int> getPartialMatch(const string& N) {
//    int m = N.size();
//    vector<int> pi(m, 0);
//    int begin = 1, matched = 0;
//
//    while(begin + matched < m) {
//        if(N[begin + matched] == N[matched]) {
//            ++matched;
//            pi[begin + matched - 1] = matched;
//        }
//        else {
//            if(matched == 0)
//                ++begin;
//            else {
//                begin += matched - pi[matched - 1];
//                matched = pi[matched - 1];
//            }
//        }
//    }
//    return pi;
//}
//
//void kmpSearch(int from, const string& H, const string& N) {
//    int n = H.size(), m = N.size();
//    vector<int> pi = getPartialMatch(N);
//    int matched = 0;
//    for(int i=from; i<n; ++i) {
//        while(matched > 0 && H[i] != N[matched])
//            matched = pi[matched - 1];
//        if(H[i] == N[matched]) {
//            ++matched;
//            if(matched == m) {
//                ret.push_back(i - m + 1);
//                start = i + 1;
//                return;
//            }
//        }
//    }
//    start++;
//}
//
//int main() {
//    string t;
//    string p;
//    getline(cin, t);
//    getline(cin, p);
//    while(start < t.size()) {
//        kmpSearch(start, t, p);
//    }
//    cout << ret.size() << '\n';
//}

//#include"bits/stdc++.h"
//using namespace std;
//
//int main() {
//    string h, n;
//    getline(cin, h);
//    getline(cin, n);
//    int cnt=0, matched=0;
//    for(int i=0; i<h.size(); ++i) {
//        matched = 0;
//        for(int j=0; j<n.size(); ++j) {
//            if(h[i + j] == n[j]) {
//                matched++;
//            }
//            else break;
//            if(matched == n.size()) {
//                cnt++;
//                i += matched-1;
//            }
//        }
//    }
//    cout << cnt;
//}