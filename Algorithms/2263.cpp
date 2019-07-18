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
//vector<int> in, post;
//int pos[100007];
//int n;
//
//void pre(int is, int ie, int ps, int pe) {
//    if(is > ie) return;
//
//    int root = post[pe];
//    int ir = pos[root];
//    int left_cnt = ir - is;
//    cout << root << ' ';
//    pre(is, ir - 1, ps, ps + left_cnt - 1);
//    pre(ir + 1, ie, ps + left_cnt, pe - 1);
//}
//
//int main() {
//    _upgrade;
//    cin >> n;
//    for(int i=0; i<n; ++i) {
//        int input;
//        cin >> input;
//        in.pb(input);
//        pos[input] = i;
//    }
//    for(int i=0; i<n; ++i) {
//        int input;
//        cin >> input;
//        post.pb(input);
//    }
//    pre(0, n-1, 0, n-1);
//}
