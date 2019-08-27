//#include "bits/stdc++.h"
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int t;
//    cin >> t;
//    while(t--) {
//        int ans = 0;
//        int n, m;
//        cin >> n >> m;
//        queue<pair<int, int> > q;
//        priority_queue<int, vector<int>, less<int> > pq;
//        for(int i=0; i<n; ++i) {
//            int input;
//            cin >> input;
//            pair<int, int> p;
//            p.first = input;
//            p.second = i;
//            q.push(p);
//            pq.push(input);
//        }
//        while(1) {
//            pair<int, int> now = q.front(); q.pop();
//            if(now.first == pq.top()) {
//                ans++;
//                pq.pop();
//                if(now.second == m) {
//                    cout << ans << '\n';
//                    break;
//                }
//            }
//            else {
//                q.push(now);
//            }
//        }
//    }
//}