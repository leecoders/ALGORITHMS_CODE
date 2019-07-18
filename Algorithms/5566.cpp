//#include "bits/stdc++.h"
//using namespace std;
//
//int n, m, now;
//vector<int> rule, dice;
//
//int main() {
//    cin >> n >> m;
//    for(int i=0; i<n; ++i) {
//        int input;
//        cin >> input;
//        rule.push_back(input);
//    }
//    for(int i=0; i<m; ++i) {
//        int input;
//        cin >> input;
//        dice.push_back(input);
//    }
//
//    for(int i=0; i<m; ++i) {
//        now += dice[i];
//        if(now >= n-1) {
//            cout << i+1;
//            break;
//        }
//        now += rule[now];
//        if(now >= n-1) {
//            cout << i+1;
//            break;
//        }
//    }
//}