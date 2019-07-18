//#include <iostream>
//#include <string.h>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<int> A, B;
//bool visited_B[9];
//int wins, loses;
//int fac[6] = {0, 1, 2, 6, 24, 120};
//
//void dfs(int cnt, int A_sum, int B_sum) {
//    if(cnt==9) {
//        if(A_sum > B_sum)
//            wins++;
//        else if(A_sum < B_sum)
//            loses++;
//        return;
//    }
//    if(A_sum > 85) {
//        wins += fac[9 - cnt];
//        return;
//    }
//    else if(B_sum > 85) {
//        loses += fac[9 - cnt];
//        return;
//    }
//    for(int i=0; i<9; ++i) {
//        if(!visited_B[i]) {
//            visited_B[i] = true;
//            if(A[cnt] > B[i])
//                dfs(cnt+1, A_sum + A[cnt] + B[i], B_sum);
//            else if(A[cnt] < B[i])
//                dfs(cnt+1, A_sum, B_sum + A[cnt] + B[i]);
//            else
//                dfs(cnt+1, A_sum, B_sum);
//            visited_B[i] = false;
//        }
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int t;
//    cin >> t;
//    for(int tc=1; tc <= t; ++tc) {
//        A.clear(); B.clear();
//        memset(visited_B, 0, sizeof(visited_B));
//        wins = 0; loses = 0;
//        bool check[19] = {false};
//        for(int i=0; i<9; ++i) {
//            int input;
//            cin >> input;
//            A.push_back(input);
//            check[input] = true;
//        }
//        for(int i=1; i<=18; ++i) {
//            if(!check[i]) B.push_back(i);
//        }
//        sort(A.begin(), A.end());
//        sort(B.begin(), B.end());
//
//        for(int i=0; i<9; ++i) {
//            visited_B[i] = true;
//            if(A[0] > B[i])
//                dfs(1, A[0]+B[i], 0);
//            else
//                dfs(1, 0, A[0]+B[i]);
//            visited_B[i] = false;
//        }
//
//        cout << '#' << tc << ' ' << wins << ' ' << loses << '\n';
//    }
//}