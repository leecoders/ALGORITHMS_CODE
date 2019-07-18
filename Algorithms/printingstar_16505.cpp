//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    int powNum = pow(2, n);
//    string arr[powNum];
//    string temp[powNum];
//    arr[0] = "*";
//    for(int i=0; i<n; ++i) {
//        for(int j=0; j<pow(2, i); ++j) {
//            temp[j] = arr[j];
//        }
//        for(int j=0; j<pow(2, i); ++j) {
//            for(int k=0; k<j; ++k) {
//                arr[j] += " ";
//            }
//            arr[j] += temp[j];
//        }
//        for(int j=pow(2, i); j<pow(2, i+1); ++j) {
//            int powTemp = pow(2, i);
//            arr[j] += temp[j - powTemp];
//        }
//    }
//    for(int i=0; i<powNum; ++i) {
//        cout << arr[i] << '\n';
//    }
//}

//koosaga's code
//#include<iostream>
//using namespace std;
//const int MAXN = 1000005;
//
//int main() {
//    int n; cin >> n;
//    n = (1 << n);
//    for(int i=0; i<n; i++){
//        for(int j=0; j<n-i; j++) putchar((i & j) ? ' ' : '*');
//        puts("");
//    }
//}
