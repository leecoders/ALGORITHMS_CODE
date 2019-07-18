//#include"bits/stdc++.h"
//using namespace std;
//
//#define mp make_pair
//#define pb(x) push_back(x)
//#define ICPC ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
//#define ALL(a) (a.begin()),(a.end())
//#define ZERO(a) memset(a,0,sizeof(a))
//#define MINUS(a) memset(a,0xff,sizeof(a))
//
//typedef pair<int, int> pii;
//typedef tuple<int, int, int> t3;
//typedef tuple<int, int, int, int> t4;
//typedef long long ll;
//typedef double db;
//
//ll gcd(ll a, ll b) {
//    return (a == 0) ? b : gcd(b%a, a);
//}
//
//int main() {
//    ICPC;
//
//    int N;
//    cin >> N;
//    map<ll, int> m;
//    ll input;
//    for(int i=0; i<N; ++i) {
//        cin >> input;
//        if(m.count(input)) {
//            m[input]++;
//        }
//        else {
//            m.insert(mp(input, 1));
//        }
//    }
//    int cnt_max = 0, num_max = 0;
//    vector<ll> v;
//    for(auto it : m) {
//        if(cnt_max < it.second) {
//            num_max = it.first;
//            cnt_max = it.second;
//        }
//    }
//    for(auto it : m) {
//        if(cnt_max == it.second) {
//            v.pb(it.first);
//        }
//    }
//    sort(ALL(v));
//    cout << v[0];
//}