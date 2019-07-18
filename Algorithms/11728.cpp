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
//        _upgrade;
//    int n, m;
//    cin >> n >> m;
//    vector<int> a(n), b(m);
//    for(int i=0; i<n; ++i)
//        cin >> a[i];
//    for(int i=0; i<m; ++i)
//        cin >> b[i];
//    int i=0, j=0;
//    while(i<n && j<m) {
//        if(a[i] <= b[j]) cout << a[i++] << ' ';
//        else cout << b[j++] << ' ';
//    }
//    while(i<n) cout << a[i++] << ' ';
//    while(j<m) cout << b[j++] << ' ';
//}