//#include "bits/stdc++.h"
//using namespace std;
//
//int top;
//int st[10001];
//
//int main() {
//    int n;
//    cin >> n;
//    while(n--) {
//        string com;
//        int input;
//        cin >> com;
//        if(com == "push") {
//            cin >> input;
//            st[top++] = input;
//        }
//        else if(com == "size") {
//            cout << top << '\n';
//        }
//        else if(com == "pop") {
//            if(top == 0) {
//                cout << -1 << '\n';
//            }
//            else {
//                cout << st[top-1] << '\n';
//                top--;
//            }
//        }
//        else if(com == "empty") {
//            if(top == 0) {
//                cout << 1 << '\n';
//            }
//            else {
//                cout << 0 << '\n';
//            }
//        }
//        else if(com == "top") {
//            if(top == 0) {
//                cout << -1 << '\n';
//            }
//            else {
//                cout << st[top - 1] << '\n';
//            }
//        }
//    }
//}