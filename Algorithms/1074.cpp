//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int cnt = 0;
//int r, c;
//
//void f(int n, int by, int bx) {
//    int now = (int)pow(2, n) / 2;
//    if((by==r && bx==c)) return;
//
//    if(r < by + now && c < bx + now) {
//        f(n-1, by, bx);
//    }
//    else if(r < by + now && c >= bx + now) {
//        cnt += now * now;
//        f(n-1, by, bx + now);
//    }
//    else if(r >= by + now && c < bx + now) {
//        cnt += now * now * 2;
//        f(n-1, by + now, bx);
//    }
//    else {
//        cnt += now * now * 3;
//        f(n-1, by + now, bx + now);
//    }
//}
//
//int main() {
//    int n;
//    cin >> n >> r >> c;
//    f(n, 0, 0);
//    cout << cnt;
//}