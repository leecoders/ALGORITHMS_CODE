//#include <iostream>
//using namespace std;
//
//void dfs(int now, int num, int cnt[]) {
//    num += 1; // 정수 파라미터 값 변화
//    for(int i=0; i<10; ++i) {
//        cnt[i] += 1; // 배열 파라미터 값 변화
//    }
//
//
//    cout << num << '\n';
//    for(int i=0; i<10; ++i) {
//        cout << cnt[i] << " ";
//    }
//    cout << '\n';
//
//
//    for(int i=now+1; i<5; ++i) {
//        dfs(i, num, cnt);
//    }
//}
//
//int main() {
//    int cnt[10] = {0};
//    dfs(0, 0, cnt);
//    cout << "after dfs" << '\n';
//    for(int i=0; i<10; ++i) {
//        cout << cnt[i] << " ";
//    }
//    cout << '\n';
//}