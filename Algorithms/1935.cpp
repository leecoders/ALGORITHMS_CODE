//#include <iostream>
//#include <cstdio>
//#include <stack>
//using namespace std;
//
//int main() {
//    int n;
//    string s;
//    double val[26];
//    stack<double> S;
//    cin >> n >> s;
//    for(int i=0; i<n; ++i) {
//        double input;
//        cin >> input;
//        val[i] = input;
//    }
//    for(int i=0; i<s.length(); ++i) {
//        if('A' <= s[i] && s[i] <= 'Z') {
//            S.push(val[s[i]-'A']);
//        }
//        else if(s[i] == '*') {
//            double a = S.top(); S.pop();
//            double b = S.top(); S.pop();
//            S.push(b*a);
//        }
//        else if(s[i] == '/') {
//            double a = S.top(); S.pop();
//            double b = S.top(); S.pop();
//            S.push(b/a);
//        }
//        else if(s[i] == '+') {
//            double a = S.top(); S.pop();
//            double b = S.top(); S.pop();
//            S.push(b+a);
//        }
//        else if(s[i] == '-') {
//            double a = S.top(); S.pop();
//            double b = S.top(); S.pop();
//            S.push(b-a);
//        }
//    }
//    printf("%.2lf", S.top());
//}