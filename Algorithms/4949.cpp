//#include "bits/stdc++.h"
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    while(1) {
//        string s;
//        getline(cin, s);
//        if(s == ".") break;
//
//        string ss = "";
//        for(int i=0; i<s.size(); ++i) {
//            if(s[i] == '(' || s[i] == ')' || s[i] == '[' || s[i] == ']') {
//                ss += s[i];
//            }
//        }
//        stack<char> st;
//        bool check = true;
//        for(int i=0; i<ss.size(); ++i) {
//            if(ss[i] == '(') {
//                st.push(ss[i]);
//            }
//            else if(ss[i] == '[') {
//                st.push(ss[i]);
//            }
//            else if(ss[i] == ')') {
//                if(st.empty() || st.top() != '(') {
//                    check = false;
//                    break;
//                }
//                else{
//                    st.pop();
//                }
//            }
//            else if(ss[i] == ']') {
//                if(st.empty() || st.top() != '[') {
//                    check = false;
//                    break;
//                }
//                else{
//                    st.pop();
//                }
//            }
//        }
//        if(st.size() || !check) {
//            cout << "no" << '\n';
//        }
//        else {
//            cout << "yes" << '\n';
//        }
//    }
//}