//#include "bits/stdc++.h"
//using namespace std;
//
//int n, l;
//pair<int, int> light[1001];
//
//int main() {
//    cin >> n >> l;
//    for(int i=0; i<n; ++i) {
//        int d, r, g;
//        cin >> d >> r >> g;
//        light[d].first = r;
//        light[d].second = g;
//    }
//    int t = 0, now = 0;
//    while(1) {
//        if(!light[now].first) {
//            now++;
//        }
//        else {
//            int red = light[now].first;
//            int green = light[now].second;
//            int cycle = t % (red + green);
//            if(cycle >= red) {
//                now++;
//            }
//        }
//
//        t++;
//        if(now == l) {
//            cout << t;
//            break;
//        }
//    }
//}