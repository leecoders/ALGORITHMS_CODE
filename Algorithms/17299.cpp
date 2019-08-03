//#include "bits/stdc++.h"
//using namespace std;
//
//stack<int> st;
//vector<int> v, ans;
//int cnt[1000001];
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
//        v.push_back(input);
//        cnt[input]++;
//    }
//    st.push(-1);
//    for(int i=n-1; i>=0; --i) {
//        while(st.top() != -1 && cnt[st.top()] <= cnt[v[i]]) st.pop();
//        ans.push_back(st.top());
//        st.push(v[i]);
//    }
//    for(int i=n-1; i>=0; --i) {
//        cout << ans[i] << ' ';
//    }
//}