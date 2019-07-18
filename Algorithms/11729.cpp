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
//void hanoi(int n, int x, int y) {
//    if(n==0) return;
//    hanoi(n-1, x, 6-x-y);
//    cout << x << ' ' << y << '\n';
//    hanoi(n-1, 6-x-y, y);
//}
//
//int main() {
//        _upgrade;
//    int n;
//    cin >> n;
//    cout << (1<<n)-1 << '\n';
//    hanoi(n, 1, 3);
//}