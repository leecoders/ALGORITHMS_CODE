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
//int n;
//int arr[55];
//vector<int> lotto;
//
//void dfs(int now, int cnt) {
//    if(cnt == 6) {
//        for(int i=0; i<6; ++i)
//            cout << lotto[i] << ' ';
//        cout << '\n';
//    }
//    for(int i = now+1; i<n; ++i) {
//        lotto.pb(arr[i]);
//        dfs(i, cnt + 1);
//        lotto.pop_back();
//    }
//}
//
//int main() {
//    _upgrade;
//    while(1) {
//        cin >> n;
//        if(n==0) break;
//        for(int i=0; i<n; ++i) {
//            int input;
//            cin >> input;
//            arr[i] = input;
//        }
//        dfs(-1, 0);
//        cout << '\n';
//    }
//}
