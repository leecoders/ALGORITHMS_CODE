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
//    int t;
//    cin >> t;
//    int n, m;
//    cin >> n;
//    vector<int> v1(n);
//    for(int i=0; i<n; ++i)
//        cin >> v1[i];
//    cin >> m;
//    vector<int> v2(m);
//    for(int i=0; i<m; ++i)
//        cin >> v2[i];
//    int cnt = 0;
//    for(int i=0; i<n; ++i) {
//        int sum = 0;
//        for(int j=i; j<n; ++j) {
//            sum += v1[j];
//            cout << sum << '\n';
//
//            int lo2 = 0, hi2 = 0;
//            int t2 = t - sum;
//            int sum2 = 0;
//            while (1) {
//                if (sum2 >= t2) sum2 -= v2[lo2++];
//                else if (hi2 == m) break;
//                else sum2 += v2[hi2++];
//
//                if (sum2 == t2) cnt++;
//            }
//        }
//    }
//    cout << cnt;
//}
