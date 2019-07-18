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
//int n, m=0;
//vector<int> A;
//vector<int> op(4);
//vector<int> order;
//int mx = INT_MIN;
//int mn = INT_MAX;
//
//void dfs(int cnt) {
//    if(cnt == n-1) {
//        int ret = A[0];
//        for(int i=1; i<n; ++i) {
//            switch(order[i-1]) {
//                case 0:
//                    ret += A[i];
//                    break;
//                case 1:
//                    ret -= A[i];
//                    break;
//                case 2:
//                    ret *= A[i];
//                    break;
//                case 3:
//                    ret /= A[i];
//                    break;
//            }
//        }
//        mx = max(mx, ret);
//        mn = min(mn, ret);
//
//        return;
//    }
//
//    for(int i=0; i<4; ++i) {
//        if(op[i]==0) continue;
//        --op[i];
//        order.pb(i);
//
//        dfs(cnt+1);
//
//        order.pop_back();
//        ++op[i];
//    }
//}
//
//int main() {
//    _upgrade;
//    cin >> n;
//    for(int i=0; i<n; ++i) {
//        int input;
//        cin >> input;
//        A.pb(input);
//    }
//    for(int i=0; i<4; ++i) {
//        cin >> op[i];
//    }
//    dfs(0);
//    cout << mx << '\n' << mn;
//}
