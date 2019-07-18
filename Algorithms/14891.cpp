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
//string s[5];
//int dirs[5];
//bool check[5];
//
//void rotate(int num, int dir) {
//    ZERO(dirs);
//    ZERO(check);
//    check[num] = 1;
//    dirs[num] = dir;
//    for(int i=num; i>=1; --i) {
//        if(i == num) continue;
//        if(s[i][2] != s[i+1][6]) {
//            check[i] = 1;
//            if((num - i)%2 == 1) dirs[i] = dirs[num] * -1;
//            else dirs[i] = dirs[num];
//        }
//        else break;
//    }
//    for(int i=num; i<=4; ++i) {
//        if(i == num) continue;
//        if(s[i-1][2] != s[i][6]) {
//            check[i] = 1;
//            if((i - num)%2 == 1) dirs[i] = dirs[num] * -1;
//            else dirs[i] = dirs[num];
//        }
//        else break;
//    }
//
//    for(int i=1; i<=4; ++i) {
//        if(!check[i]) continue;
//        if (dirs[i] == 1) {
//            s[i].insert(s[i].begin(), s[i][7]);
//            s[i].pop_back();
//        }
//        else {
//            s[i].push_back(s[i][0]);
//            s[i].erase(s[i].begin());
//        }
//    }
//}
//
//int main() {
//    _upgrade;
//    for(int i=1; i<5; ++i)
//        cin >> s[i];
//    int k;
//    cin >> k;
//    for(int i=0; i<k; ++i) {
//        int num, dir;
//        cin >> num >> dir;
//        rotate(num, dir);
//    }
//
//    int sum = 0;
//    for(int i=1; i<=4; ++i) {
//        if(s[i][0] == '1') sum += pow(2, i-1);
//    }
//    cout << sum;
//}
