//#include "bits/stdc++.h"
//using namespace std;
//
//vector<int> v;
//vector<int> ans;
//stack<int> mx;
//
//int main() {
//    int n;
//    cin >> n;
//    for(int i=0; i<n; ++i) {
//        int input;
//        cin >> input;
//        v.push_back(input);
//    }
//    mx.push(v[n-1]);
//    ans.push_back(-1);
//    for(int i=n-2; i>=0; --i) {
//        if(v[i] > mx.top()) {
//            mx.push(v[i]);
//            ans.push_back(-1);
//        }
//        else {
//            ans.push_back(mx.top());
//        }
//    }
//    for(int i=n-1; i>=0; --i) {
//        cout << ans[i] << ' ';
//    }
//}