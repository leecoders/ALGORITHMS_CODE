//#include "bits/stdc++.h"
//using namespace std;
//
//#define ll long long
//int n, k;
//string s;
//int len = n/4;
//vector<ll> value;
//
//ll f(string input) {
//    ll ret = 0;
//    for(int i=0; i<len; ++i) {
//        ll now;
//        if('A' <= input[i] && input[i] <= 'F') {
//            now = (ll)pow((ll)(input[i] - 'A' + 10), len-1-i);
//        }
//        ret += now;
//    }
//    return ret;
//}
//
//int main() {
//    int tt;
//    cin >> tt;
//    for(int tc = 1; tc <= tt; ++tc) {
//        cin >> n >> k;
//        cin >> s;
//    }
//    cout << f("B2");
//}