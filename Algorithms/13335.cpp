//#include"bits/stdc++.h"
//using namespace std;
//
//int n, w, l;
//
//int main() {
//    cin >> n >> w >> l;
//    queue<int> q;
//    queue<pair<int, int>> bridge;
//    for(int i=0; i<n; ++i) {
//        int input;
//        cin >> input;
//        q.push(input);
//    }
//    int t = 0;
//    int cnt = 0;
//    int weight = 0;
//    while(cnt < n) {
//        t++;
//        if(!bridge.empty() && bridge.front().first == t) {
//            cnt++;
//            weight -= bridge.front().second;
//            bridge.pop();
//        }
//        if(!q.empty() && bridge.size() < w) {
//            int next_weight = weight + q.front();
//            if(next_weight <= l) {
//                weight = next_weight;
//                bridge.push(make_pair(t + w, q.front()));
//                q.pop();
//            }
//        }
//    }
//    cout << t;
//}