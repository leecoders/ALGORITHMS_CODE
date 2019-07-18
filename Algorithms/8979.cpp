//#include "bits/stdc++.h"
//using namespace std;
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//    vector<tuple<int, int, int, int>> v;
//    for(int i=0; i<n; ++i) {
//        int a,b,c,d;
//        cin>>a>>b>>c>>d;
//        v.push_back(make_tuple(b,c,d,a));
//    }
//    sort(v.begin(), v.end());
//    int order;
//    for(int i=0; i<n; ++i) {
//        if(get<3>(v[i])==m) {
//            order = i;
//            break;
//        }
//    }
//    int ans = order;
//    for(int i=order+1; i<=n; ++i) {
//        int a = get<0>(v[i]);
//        int b = get<1>(v[i]);
//        int c = get<2>(v[i]);
//        if(get<0>(v[order]) == a && get<1>(v[order]) == b && get<2>(v[order]) == c) {
//            ans++;
//        }
//        else break;
//    }
//    cout << n - ans;
//}