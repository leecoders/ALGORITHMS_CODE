//#include "bits/stdc++.h"
//using namespace std;
//
//int q[10001];
//int front, back = -1;
//
//int main() {
//    int t;
//    cin >> t;
//    while(t--) {
//        string c;
//        cin >> c;
//        int n;
//        if(c=="push") {
//            cin >> n;
//            q[back+1] = n;
//            back++;
//        }
//        else if(c=="front") {
//            if(back-front==-1) {
//                cout << -1 << '\n';
//            }
//            else {
//                cout << q[front] << '\n';
//            }
//        }
//        else if(c=="back") {
//            if(back-front==-1) {
//                cout << -1 << '\n';
//            }
//            else {
//                cout << q[back] << '\n';
//            }
//        }
//        else if(c=="size") {
//            cout << back - front + 1 << '\n';
//        }
//        else if(c=="pop") {
//            if(back-front==-1) {
//                cout << -1 << '\n';
//            }
//            else {
//                cout << q[front++] << '\n';
//            }
//        }
//        else {
//            cout << (back-front==-1) << '\n';
//        }
//    }
//}