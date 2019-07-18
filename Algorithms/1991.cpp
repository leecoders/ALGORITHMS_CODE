//#include"bits/stdc++.h"
//using namespace std;
//
//#define mp make_pair
//#define pb(x) push_back(x)
//#define _upgrade ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
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
//struct Node {
//    char me;
//    Node* l;
//    Node* r;
//};
//Node tree['Z' + 1];
//
//void order(int which, Node* now) {
//    if(now == nullptr) return;
//    if(which == 1) cout << now -> me;
//    order(which, now -> l);
//    if(which == 2) cout << now -> me;
//    order(which, now -> r);
//    if(which == 3) cout << now -> me;
//}
//
//int main() {
//    _upgrade;
//    int n;
//    cin >> n;
//    for(int i=0; i<n; ++i) {
//        char node, l, r;
//        cin >> node >> l >> r;
//        tree[node].me = node;
//        if(l != '.') tree[node].l = &tree[l];
//        if(r != '.') tree[node].r = &tree[r];
//    }
//    order(1, &tree['A']);
//    cout << '\n';
//    order(2, &tree['A']);
//    cout << '\n';
//    order(3, &tree['A']);
//    cout << '\n';
//}
