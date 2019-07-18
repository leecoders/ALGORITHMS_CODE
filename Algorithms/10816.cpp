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
//int n, m;
//vector<int> have;
//
//int main() {
//    _upgrade;
//    cin >> n;
//    int input;
//    for(int i=0; i<n; ++i) {
//        cin >> input;
//        have.pb(input);
//    }
//    sort(ALL(have));
//    cin >> m;
//    while(m--) {
//        cin >> input;
//        auto l = lower_bound(ALL(have), input);
//        auto r = upper_bound(ALL(have), input);
//        cout << r - l << ' ';
//    }
//}