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
//    vector<int> v(n);
//    for(int i=0; i<n; ++i)
//        cin >> v[i];
//    sort(ALL(v));
//    ll sum = 0;
//    for(int i=0; i<n-1; ++i) {
//        for (int j = i + 1; j < n; ++j) {
//            sum += 2 * (v[j] - v[i]);
//        }
//    }
//    cout << sum;
//}
