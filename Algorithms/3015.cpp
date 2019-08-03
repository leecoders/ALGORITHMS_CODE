//#include "bits/stdc++.h"
//using namespace std;
//
//vector<pair<int, int> > v;
//stack<pair<int, int> > st;
//long long ans;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int n;
//    cin >> n;
//    for(int i=0; i<n; ++i) {
//        int input;
//        cin >> input;
//        v.push_back(make_pair(input, 1));
//    }
//    st.push(make_pair(v[0].first, 0));
//    for(int i=1; i<n; ++i) {
//        while(!st.empty() && st.top().first <= v[i].first) {
//            if(st.top().first == v[i].first) {
//                v[i].second += v[st.top().second].second;
//            }
//            ans += v[st.top().second].second; // 자기 자신까지 연속으로 같은 키 수
//            st.pop();
//        }
//        if(!st.empty()) {
//            ans += 1;
//        }
//        st.push(make_pair(v[i].first, i));
//    }
//    cout << ans;
//}