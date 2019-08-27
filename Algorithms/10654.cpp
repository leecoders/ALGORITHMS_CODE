//#include "bits/stdc++.h"
//using namespace std;
//
//vector<pair<long long, long long> > v;
//int ans = 1;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int n, t;
//    cin >> n >> t;
//    for(int i=0; i<n; ++i) {
//        int a, b;
//        cin >> a >> b;
//        v.push_back(make_pair(a, b));
//    }
//    for(int i=n-2; i>=0; --i) {
//        if(v[i].first + v[i].second * t >= v[i+1].first + v[i+1].second * t) {
//            v[i] = v[i+1];
//        }
//        else {
//            ++ans;
//        }
//    }
//    cout << ans;
//}