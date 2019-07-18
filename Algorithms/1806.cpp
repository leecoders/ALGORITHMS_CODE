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
//vector<int> v(100000);
//
//int main() {
//        _upgrade;
//    int n, s;
//    cin >> n >> s;
//    for(int i=0; i<n; ++i) {
//        cin >> v[i];
//    }
//    int lo = 0, hi = 0; // [lo, hi)
//    int sum = 0;
//    int mn = INT_MAX;
//    int len = 0;
//    while(1) {
//        if(sum < s) {
//            len++;
//            sum += v[hi++];
//        }
//        else {
//            mn = min(mn, len);
//            len--;
//            sum -= v[lo++];
//        }
//        if(sum < s && hi == n) {
//            break;
//        }
//    }
//    if(mn == INT_MAX) cout << 0;
//    else cout << mn;
//}
