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
//    return (a == 0) ? b : gcd(b % a, a);
//}
//
//vector<int> v;
//int temp[100007];
//ll ans = 0;
//
//void merge(int lo, int hi) {
//    int mid = (lo + hi) / 2;
//    int i = lo, j = mid + 1, k = 0;
//    while(i <= mid && j <= hi) {
//        if(v[i] <= v[j]) {
//            temp[k++] = v[i++];
//        }
//        else {
//            ans += mid - i + 1;
//            temp[k++] = v[j++];
//        }
//    }
//    while(i <= mid) temp[k++] = v[i++];
//    while(j <= hi) temp[k++] = v[j++];
//    for(int i=lo; i<=hi; ++i)
//        v[i] = temp[i-lo];
//}
//
//void sort(int lo, int hi) {
//    if(lo == hi)
//        return;
//    int mid = (lo + hi) / 2;
//    sort(lo, mid);
//    sort(mid + 1, hi);
//    merge(lo, hi);
//}
//
//int main() {
//    _upgrade;
//    int n;
//    cin >> n;
//    for(int i=0; i<n; ++i) {
//        int input;
//        cin >> input;
//        v.pb(input);
//    }
//    merge(0, n-1);
//    cout << ans;
//}
