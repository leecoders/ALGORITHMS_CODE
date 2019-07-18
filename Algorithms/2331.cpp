//#include <iostream>
//#include <math.h>
//#include <cstring>
//
//using namespace std;
//
//int main() {
//    int visited[1000001] = {0};
//    int A, P;
//    cin >> A >> P;
//    visited[A] = 1;
//    int start;
//    for(int i=2; ; ++i) {
//        string now = to_string(A);
//        int next = 0;
//        for(int j=0; j<now.length(); ++j) {
//            next += (int)pow((now[j]-'0'), P);
//        }
//        if(visited[next] != 0) {
//            start = visited[next];
//            break;
//        }
//        visited[next] = i;
//        A = next;
//    }
//    cout << start - 1;
//}