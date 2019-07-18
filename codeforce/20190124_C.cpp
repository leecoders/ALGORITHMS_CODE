//#include <iostream>
//#include <cstring>
//#include <queue>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//
//    string s;
//    cin >> s;
//
//    string v = "BGR";
//
//    int mn = INT_MAX;
//    string ans;
//
//    do {
//        int cnt = 0;
//        for(int i=0; i<n; i++) {
//            if(v[i % 3] != s[i]) cnt++;
//        }
//
//        if(cnt < mn) {
//            mn = cnt;
//            ans = "";
//            for(int i=0; i<n; i++) ans += v[i % 3];
//        }
//    } while(next_permutation(v.begin(), v.end()));
//
//    cout << mn << endl << ans << endl;
//}