//#include "bits/stdc++.h"
//using namespace std;
//
//#define ll long long
//int n, k;
//string s;
//int len;
//
//ll f(string input) {
//    ll ret = 0;
//    for(int i=0; i<len; ++i) {
//        ll now;
//        if('A' <= input[i] && input[i] <= 'F') {
//            now = (ll)(input[i] - 'A' + 10);
//        }
//        else {
//            now = (ll)(input[i] - '0');
//        }
//        ret += now * pow(16, len-i-1);
//    }
//    return ret;
//}
//
//int main() {
//    int tt;
//    cin >> tt;
//    for(int tc = 1; tc <= tt; ++tc) {
//        vector<ll> value;
//        set<ll> check;
//        cin >> n >> k;
//        len = n / 4;
//        cin >> s;
//        for(int i=0; i<len; ++i) {
//            for(int j=0; j<4; ++j) {
//                int start = j*len;
//                ll now = f(s.substr(start, len));
//                if(!check.count(now)) {
//                    check.insert(now);
//                    value.push_back(now);
//                }
//            }
//            s = s[n-1] + s;
//            s.pop_back();
//        }
//        sort(value.begin(), value.end());
//        cout << "#" << tc << ' ' << value[value.size() - k] << '\n';
//    }
//}