//#include "bits/stdc++.h"
//using namespace std;
//
//int cube[25];
//
//bool check() {
//    if(cube[1] != cube[2] || cube[2] != cube[3] || cube[3] != cube[4]) {
//        return false;
//    }
//    if(cube[5] != cube[6] || cube[6] != cube[7] || cube[7] != cube[8]) {
//        return false;
//    }
//    if(cube[17] != cube[18] || cube[18] != cube[19] || cube[19] != cube[20]) {
//        return false;
//    }
//    if(cube[21] != cube[22] || cube[22] != cube[23] || cube[23] != cube[24]) {
//        return false;
//    }
//    if(cube[13] != cube[14] || cube[14] != cube[15] || cube[15] != cube[16]) {
//        return false;
//    }
//    if(cube[9] != cube[10] || cube[10] != cube[11] || cube[11] != cube[12]) {
//        return false;
//    }
//    return true;
//}
//
//bool f() {
//    for(int i=0; i<4; ++i) {
//        int temp1 = cube[7];
//        int temp2 = cube[8];
//        cube[7] = cube[19];
//        cube[8] = cube[20];
//        cube[19] = cube[23];
//        cube[20] = cube[24];
//        cube[23] = cube[15];
//        cube[24] = cube[16];
//        cube[15] = temp1;
//        cube[16] = temp2;
//        if((i==0 || i==2) && check()) {
//            return true;
//        }
//    }
//    return false;
//}
//
//bool u() {
//    for(int i=0; i<4; ++i) {
//        int temp1 = cube[3];
//        int temp2 = cube[4];
//        cube[3] = cube[17];
//        cube[4] = cube[19];
//        cube[17] = cube[10];
//        cube[19] = cube[9];
//        cube[10] = cube[16];
//        cube[9] = cube[14];
//        cube[16] = temp1;
//        cube[14] = temp2;
//        if((i==0 || i==2) && check()) {
//            return true;
//        }
//    }
//    return false;
//}
//
//bool r() {
//    for(int i=0; i<4; ++i) {
//        int temp1 = cube[6];
//        int temp2 = cube[8];
//        cube[6] = cube[2];
//        cube[8] = cube[4];
//        cube[2] = cube[23];
//        cube[4] = cube[21];
//        cube[23] = cube[10];
//        cube[21] = cube[12];
//        cube[10] = temp1;
//        cube[12] = temp2;
//        if((i==0 || i==2) && check()) {
//            return true;
//        }
//    }
//    return false;
//}
//
//int main() {
//    for(int i=1; i<=24; ++i)
//        cin >> cube[i];
//    if(u() || r() || f()) cout << 1;
//    else cout << 0;
//}