//#include"bits/stdc++.h"
//using namespace std;
//
//#define mp make_pair
//#define pb(x) push_back(x)
//#define ALL(a) (a.begin()),(a.end())
//#define ZERO(a) memset(a,0,sizeof(a))
//#define MINUS(a) memset(a,0xff,sizeof(a))
//#define _upgrade ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
//
//typedef pair<int, int> pii;
//typedef tuple<int, int, int> t3;
//typedef tuple<int, int, int, int> t4;
//typedef long long ll;
//
//ll gcd(ll a, ll b) {
//    return (a == 0) ? b : gcd(b%a, a);
//}
//
//int main() {
//    _upgrade;
//    int r, c, cnt=0;
//    cin >> r >> c;
//    vector<string> s, t(c);
//    for(int i=0; i<r; ++i) {
//        string input;
//        cin >> input;
//        s.pb(input);
//        for(int j=0; j<c; ++j) {
//            t[j].pb(input[j]);
//        }
//    }
//    for(int i=1; i<r; ++i) {
//        set<string> myset;
//        for(int j=0; j<c; ++j) {
//            string temp = t[j].substr(i);
//            if(myset.count(temp)) {
//                cout << cnt;
//                return 0;
//            }
//            myset.insert(temp);
//        }
//        cnt++;
//    }
//    cout << cnt;
//}
