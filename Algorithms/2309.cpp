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
//vector<int> v(9), ans;
//
//int main() {
//    _upgrade;
//    int sum = 0;
//    for(int i=0; i<9; ++i) {
//        cin >> v[i];
//        sum += v[i];
//    }
//    for(int i=0; i<9; ++i) {
//        for(int j=0; j<9; ++j) {
//            if(i==j) continue;
//            int now = sum - v[i] - v[j];
//            if(now == 100) {
//                for(int k=0; k<9; ++k) {
//                    if(k==i || k==j) continue;
//                    ans.pb(v[k]);
//                }
//                break;
//            }
//        }
//        if(ans.size()) break;
//    }
//    sort(ALL(ans));
//    for(auto i : ans)
//        cout << i << '\n';
//}
