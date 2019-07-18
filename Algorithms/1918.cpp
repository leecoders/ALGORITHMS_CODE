//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main() {
//    string s, ans="";
//    cin >> s;
//    s = '(' + s + ')';
//    stack<char> S;
//    for(int i=0; i < s.length(); ++i) {
//        if('A' <= s[i] && s[i] <= 'Z') {
//            ans += s[i];
//        }
//        else if(s[i] == ')') {
//            while(S.top() != '(') {
//                ans += S.top();
//                S.pop();
//            }
//            S.pop();
//        }
//        else if(s[i] == '(') {
//            S.push(s[i]);
//        }
//        else if(s[i] == '*' || s[i] == '/') {
//            while((S.top() == '*' || S.top() == '/')) {
//                ans += S.top();
//                S.pop();
//            }
//            S.push(s[i]);
//        }
//        else if(s[i] == '+' || s[i] == '-') {
//            while(S.top() != '(') {
//                ans += S.top();
//                S.pop();
//            }
//            S.push(s[i]);
//        }
//    }
//    cout << ans;
//}