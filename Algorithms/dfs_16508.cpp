

//#include <iostream>
//#include <math.h>


//#include <cstring>
//using namespace std;
//
//string target;
//int target_cnt[26] = {0};
//int n;
//int ans = 2000000;
//pair<int, int[26] > book[17];
//
//void dfs(int now, int cnt[], int price) {
//    int now_cnt[26] = {0};
//    for(int i=0; i<26; ++i) {
//        now_cnt[i] = cnt[i] + book[now].second[i];
//    }
//
//    bool check = true;
//    for(int i=0; i<26; ++i) {
//        if(now_cnt[i] < target_cnt[i]) {
//            check = false;
//            break;
//        }
//    }
//    if(check) {
//        ans = min(ans, price);
//    }
//
//    for(int i=now+1; i<=n; ++i) {
//        dfs(i, now_cnt, price + book[i].first);
//    }
//}
//
//int main() {
//    cin >> target >> n;
//    for(int i=0; i<target.length(); ++i) {
//        target_cnt[target[i]-'A']++;
//    }
//    for(int i=1; i<=n; ++i) {
//        int input1;
//        string input2;
//        cin >> input1 >> input2;
//        book[i].first = input1;
//        memset(book[i].second, 0, sizeof(book[i].second));
//        for(int j=0; j<input2.length(); ++j) {
//            book[i].second[input2[j]-'A']++;
//        }
//    }
//    int cnt[26] = {0};
//    dfs(0, cnt, 0);
//    if(ans == 2000000) cout << -1;
//    else cout << ans;
//}
//
//// 무슨 차이..?
////#include <iostream>
////#include <math.h>
////#include <cstring>
////using namespace std;
////
////string target;
////int target_cnt[26] = {0};
////int n;
////int ans = 2000000;
////pair<int, int[26] > book[17];
////
////void dfs(int now, int cnt[], int price) {
//////    int now_cnt[26] = {0};
////    for(int i=0; i<26; ++i) {
////        cnt[i] += book[now].second[i];
////    }
////
////    for(int i=0; i<26; ++i) {
////        cout << cnt[i] << " ";
////    }
////    cout << endl;
////
////    bool check = true;
////    for(int i=0; i<26; ++i) {
////        if(cnt[i] < target_cnt[i]) {
////            check = false;
////            break;
////        }
////    }
////    if(check) {
////        ans = min(ans, price);
////    }
////
////    for(int i=now+1; i<=n; ++i) {
////        dfs(i, cnt, price + book[i].first);
////    }
////}
////
////int main() {
////    cin >> target >> n;
////    for(int i=0; i<target.length(); ++i) {
////        target_cnt[target[i]-'A']++;
////    }
////    for(int i=1; i<=n; ++i) {
////        int input1;
////        string input2;
////        cin >> input1 >> input2;
////        book[i].first = input1;
////        memset(book[i].second, 0, sizeof(book[i].second));
////        for(int j=0; j<input2.length(); ++j) {
////            book[i].second[input2[j]-'A']++;
////        }
////    }
////    int cnt[26] = {0};
////    dfs(0, cnt, 0);
////    if(ans == 2000000) cout << -1;
////    else cout << ans;
////}