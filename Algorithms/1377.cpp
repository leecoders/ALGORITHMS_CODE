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
//    int n;
//    cin >> n;
//    vector<pii> a(n);
//    for (int i=0; i<n; ++i) {
//        cin >> a[i].first;
//        a[i].second = i; // original
//    }
//    sort(ALL(a));
//    int ans = 0;
//    for (int i=0; i<n; ++i) {
//        if (ans < a[i].second - i) {
//            ans = a[i].second - i;
//        }
//    }
//    cout << ans + 1;
//}

