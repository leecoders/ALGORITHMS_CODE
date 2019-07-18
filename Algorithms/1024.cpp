//#include"bits/stdc++.h"
//using namespace std;
//
//int sum(int a, int b) {
//    return b*(b+1)/2 - a*(a-1)/2;
//}
//int main() {
//    int n, l;
//    cin >> n >> l;
//    bool check = false;
//    int start, ans;
//    for(int i=l; i<=100; ++i) {
//        int pivot = n - sum(0, i-1);
//        if(pivot < 0) break;
//        if( pivot % i == 0) {
//            check = true;
//            start = pivot / i;
//            ans = i;
//            break;
//        }
//    }
//    if(!check) cout << -1;
//    else {
//        for(int i=0; i<ans; ++i) {
//            cout << start+i << ' ';
//        }
//    }
//}
