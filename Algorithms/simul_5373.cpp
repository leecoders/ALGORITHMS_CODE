//#include <iostream>
//#include <string.h>
//#include <algorithm>
//using namespace std;
//
//char U[4][4], F[4][4], D[4][4], B[4][4], L[4][4], R[4][4];
//
//void show() {
//    for(int i=1; i<=3; ++i) {
//        for(int j=1; j<=3; ++j) {
//            cout << U[i][j];
//        }
//        cout << '\n';
//    }
//    for(int i=1; i<=3; ++i) {
//        for(int j=1; j<=3; ++j) {
//            cout << F[i][j];
//        }
//        cout << '\n';
//    }
//    for(int i=1; i<=3; ++i) {
//        for(int j=1; j<=3; ++j) {
//            cout << D[i][j];
//        }
//        cout << '\n';
//    }
//    for(int i=1; i<=3; ++i) {
//        for(int j=1; j<=3; ++j) {
//            cout << B[i][j];
//        }
//        cout << '\n';
//    }
//    for(int i=1; i<=3; ++i) {
//        for(int j=1; j<=3; ++j) {
//            cout << L[i][j];
//        }
//        cout << '\n';
//    }
//    for(int i=1; i<=3; ++i) {
//        for(int j=1; j<=3; ++j) {
//            cout << R[i][j];
//        }
//        cout << '\n';
//    }
//}
//
//void init_cube() {
//    memset(U, 'w', sizeof(U));
//    memset(F, 'r', sizeof(F));
//    memset(D, 'y', sizeof(D));
//    memset(B, 'o', sizeof(B));
//    memset(L, 'g', sizeof(L));
//    memset(R, 'b', sizeof(R));
//}
//
//void rotate(char front, char direction) {
//    char (*u)[4] = U, (*f)[4] = F, (*d)[4] = D, (*b)[4] = B, (*l)[4] = L, (*r)[4] = R;
//    if(front=='U') {
//        u = B, f = U, d = F, b = B, l = L, r = R;
//    }
//    else if(front=='D') {
//        u = F, f = D, d = B, b = U, l = L, r = R;
//    }
//    else if(front=='B') {
//        u = U, f = B, d = D, b = F, l = R, r = L;
//    }
//    else if(front=='L') {
//        u = U, f = L, d = D, b = R, l = B, r = F;
//    }
//    else if(front=='R') {
//        u = U, f = R, d = D, b = L, l = F, r = B;
//    }
//    if(direction=='+') {
//        char temp[4][4];
//        for(int i=1; i<=3; ++i)
//            for(int j=1; j<=3; ++j)
//                temp[i][j] = f[i][j];
//        for(int i=1; i<=3; ++i)
//            for(int j=1; j<=3; ++j)
//                f[j][4-i] = temp[i][j];
//        temp[1][3] = l[1][3];
//        temp[2][3] = l[2][3];
//        temp[3][3] = l[3][3];
//        for(int i=1; i<=3; ++i) {
//            r[i][1] = u[3][i];
//        }
//        for(int i=1; i<=3; ++i) {
//            d[1][4-i] = r[i][1];
//        }
//        for(int i=1; i<=3; ++i) {
//            l[i][3] = d[1][i];
//        }
//        for(int i=1; i<=3; ++i) {
//            u[3][4-i] = temp[i][3];
//        }
//    }
//    else {
//        char temp[4][4];
//        for(int i=1; i<=3; ++i)
//            for(int j=1; j<=3; ++j)
//                temp[i][j] = f[i][j];
//        for(int i=1; i<=3; ++i)
//            for(int j=1; j<=3; ++j)
//                f[4-j][i] = temp[i][j];
//        temp[3][1] = u[3][1];
//        temp[3][2] = u[3][2];
//        temp[3][3] = u[3][3];
//        for(int i=1; i<=3; ++i) {
//            u[3][i] = r[i][1];
//        }
//        for(int i=1; i<=3; ++i) {
//            r[i][1] = d[1][4-i];
//        }
//        for(int i=1; i<=3; ++i) {
//            d[1][i] = l[i][3];
//        }
//        for(int i=1; i<=3; ++i) {
//            l[i][3] = temp[3][4-i];
//        }
//    }
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int t;
//    cin >> t;
//    while(t--) {
//        init_cube();
//        int n;
//        cin >> n;
//        while(n--) {
//            string comm;
//            cin >> comm;
//            rotate(comm[0], comm[1]);
////            show();
//        }
//        for(int i=1; i<=3; ++i) {
//            for(int j=1; j<=3; ++j) {
//                cout << U[i][j];
//            }
//            cout << '\n';
//        }
//    }
//}