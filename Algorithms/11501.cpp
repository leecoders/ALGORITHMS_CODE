//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int t;
//    cin >> t;
//    while(t--) {
//        int n;
//        cin >> n;
//        int stock[n+1];
//        long long profit = 0;
//        int max_price = 0;
//
//        for(int i=0; i<n; ++i) {
//            int input;
//            cin >> input;
//            stock[i] = input;
//        }
//        for(int i = n-1; i >= 0; --i) {
//            if(stock[i] > max_price) // 현재 가격이 지금 까지 가장 비쌀 때보다 크다면
//                max_price = stock[i];
//            else
//                profit += (max_price - stock[i]);
//        }
//        cout << profit << '\n';
//    }
//}

//#include <iostream>
//#include <queue>
//#include <string.h>
//
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int t;
//    cin >> t;
//    while(t--) {
//        int n;
//        cin >> n;
//        int price[n];
//        int profit[n];
//        int predict[n];
//        int cnt = 0;
//        int total_profit = 0;
//        for(int i=0; i<n; ++i) {
//            int input;
//            cin >> input;
//            price[i] = input;
//            if(i!=0) profit[i] = price[i] - price[i-1];
//        }
//        predict[n-1] = profit[n-1];
//        for(int i=n-2; i>0; --i) {
//            predict[i] = profit[i] + predict[i+1];
//        }
//        for(int i=1; i<n; ++i) {
//            if(profit[i] >= 0) {
//                cnt++;
//                total_profit += cnt * profit[i];
//            }
//            else {
//                if(predict[i] >= 0) {
//                    cnt++;
//                    total_profit += cnt * profit[i];
//                }
//                else
//                    cnt = 0;
//            }
//        }
//        cout << total_profit << '\n';
//    }
//}