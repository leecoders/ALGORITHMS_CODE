//#include "bits/stdc++.h"
//using namespace std;
//
//vector<int> v;
//int ans = 1;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int n;
//    cin >> n;
//    for(int i=0; i<n; ++i) {
//        int a, b;
//        cin >> a >> b;
//        v.push_back(b);
//    }
//    for(int i=n-2; i>=0; --i) {
//        if(v[i] > v[i+1]) {
//            v[i] = v[i+1];
//        }
//        else {
//            ++ans;
//        }
//    }
//    cout << ans;
//}