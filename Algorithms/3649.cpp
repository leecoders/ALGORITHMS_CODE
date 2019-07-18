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
//    while(cin >> n) {
//        n *= 10000000;
//        int s;
//        cin >> s;
//        vector<int> v(s);
//        for(int i=0; i<s; ++i)
//            cin >> v[i];
//        sort(ALL(v));
//        int lo = 0;
//        int hi = v.size()-1;
//        int sum=-1;
//        while(lo < hi) {
//            sum = v[lo] + v[hi];
//            if(sum == n) {
//                cout << "yes " << v[lo] << ' ' << v[hi] << '\n';
//                break;
//            }
//            if(sum < n) lo++;
//            else hi--;
//        }
//        if(sum != n)
//            cout << "danger" << '\n';
//    }
//}
