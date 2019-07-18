//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int a,b,c,ans1,ans2;
//char d,e;
//
//int f(char op, int num1, int num2) {
//    if(op=='+') {
//        return num1 + num2;
//    }
//    else if(op=='-') {
//        return num1 - num2;
//    }
//    else if(op=='*') {
//        return num1 * num2;
//    }
//    else if(op=='/') {
//        return num1 / num2;
//    }
//}
//
//int main() {
//    cin >> a >> d >> b >> e >> c;
//    ans1 = f(e,f(d,a,b),c);
//    ans2 = f(d,a,f(e,b,c));
//    if(ans1>ans2) swap(ans1, ans2);
//    cout << ans1 << '\n' << ans2;
//}