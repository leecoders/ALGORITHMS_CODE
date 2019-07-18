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
//    int n;
//    cin >> n;
//    set<string> myset;
//    string s[n];
//    for(int i=0;i<n;++i) cin>>s[i];
//    for(int i=0;i<n;++i) {
//        myset.insert(s[i]);
//        string r;
//        for(int j=0;j<s[i].size();++j)
//            r.pb(s[i][s[i].size()-1-j]);
//        if(myset.count(r)) {
//            cout << s[i].size() << ' ' << s[i][s[i].size()/2];
//            break;
//        }
//    }
//}
