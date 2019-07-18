//#include "bits/stdc++.h"
//using namespace std;
//
//vector<int> pt[10];
//
//void pre() {
//    pt[0].push_back(0);
//    pt[1].push_back(1);
//    for(int i=2; i<=9; ++i) {
//        int now = i;
//        pt[i].push_back(now%10);
//        while(1) {
//            bool check = true;
//            for(auto it : pt[i]) {
//                if(it == (now * i) % 10) {
//                    check = false;
//                    break;
//                }
//            }
//            if(!check) break;
//            pt[i].push_back((now * i) % 10);
//            now *= i;
//        }
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    pre();
//    int t;
//    cin >> t;
//    while(t--) {
//        int a, b;
//        cin >> a >> b;
//        b %= pt[a%10].size();
//        if(b==0) b = pt[a%10].size();
//        if(pt[a%10][b-1] == 0) cout << 10 << '\n';
//        else cout << pt[a%10][b-1] << '\n';
//    }
//}