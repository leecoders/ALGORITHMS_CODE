//#include "bits/stdc++.h"
//using namespace std;
//
//int visited[201][201];
//bool C[201];
//int a, b, c;
//int sum;
//
//int main() {
//    cin >> a >> b >> c;
//    sum = c;
//    C[c] = 1;
//    visited[0][0] = 1;
//    queue<pair<int, int>> q;
//    q.push(make_pair(0, 0));
//    while(!q.empty()) {
//        int y = q.front().first;
//        int x = q.front().second;
//        q.pop();
//        int now_c = sum - y - x;
//        int na, nb, nc;
//
//        //a to c
//        nc = now_c + y;
//        nb = x;
//        na = 0;
//        if(nc > c) {
//            na = nc - c;
//            nc = c;
//        }
//        if(!visited[na][nb]) {
//            visited[na][nb] = 1;
//            if(na == 0) C[nc] = 1;
//            q.push(make_pair(na, nb));
//        }
//
//        // b to c
//        nc = now_c + x;
//        nb = 0;
//        na = y;
//        if(nc > c) {
//            nb = nc - c;
//            nc = c;
//        }
//        if(!visited[na][nb]) {
//            visited[na][nb] = 1;
//            if(na == 0) C[nc] = 1;
//            q.push(make_pair(na, nb));
//        }
//
//        // a to b
//        nc = now_c;
//        nb = x + y;
//        na = 0;
//        if(nb > b) {
//            na = nb - b;
//            nb = b;
//        }
//        if(!visited[na][nb]) {
//            visited[na][nb] = 1;
//            if(na == 0) C[nc] = 1;
//            q.push(make_pair(na, nb));
//        }
//
//        // b to a
//        nc = now_c;
//        nb = 0;
//        na = y + x;
//        if(na > a) {
//            nb = na - a;
//            na = a;
//        }
//        if(!visited[na][nb]) {
//            visited[na][nb] = 1;
//            if(na == 0) C[nc] = 1;
//            q.push(make_pair(na, nb));
//        }
//
//        // c to a
//        nc = 0;
//        nb = x;
//        na = y + now_c;
//        if(na > a) {
//            nc = na - a;
//            na = a;
//        }
//        if(!visited[na][nb]) {
//            visited[na][nb] = 1;
//            if(na == 0) C[nc] = 1;
//            q.push(make_pair(na, nb));
//        }
//
//        // c to b
//        nc = 0;
//        nb = x + now_c;
//        na = y;
//        if(nb > b) {
//            nc = nb - b;
//            nb = b;
//        }
//        if(!visited[na][nb]) {
//            visited[na][nb] = 1;
//            if(na == 0) C[nc] = 1;
//            q.push(make_pair(na, nb));
//        }
//    }
//    for(int i=0; i<=c; ++i) {
//        if(C[i]) cout << i << " ";
//    }
//}