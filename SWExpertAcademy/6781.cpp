//#include <iostream>
//#include <vector>
//#include <string.h>
//#include <algorithm>
//using namespace std;
//
//string card;
//string color;
//int visited[9];
//bool ans;
//
//bool color_check() {
//    int R=0, G=0, B=0;
//    for(int i=0; i<9; ++i) {
//        if(color[i] == 'R') R++;
//        else if(color[i] == 'G') G++;
//        else B++;
//    }
//    return !(R%3 || G%3 || B%3);
//}
//
//bool card_check(string& cards, int num) {
//    int arr[3];
//    arr[0] = cards[num-1] - '0';
//    arr[1] = cards[num-2] - '0';
//    arr[2] = cards[num-3] - '0';
//    sort(arr, arr+3);
//    if(arr[0]==arr[1] && arr[1]==arr[2]) return true;
//    if(arr[0]+1==arr[1] && arr[1]+1==arr[2]) return true;
//    return false;
//}
//
//void dfs(int cnt, int now, string cards, string colors) {
//    if(ans) return;
//    if(cnt==3) {
//        if(colors[cnt-2] != colors[cnt-1]) return;
//        if(!card_check(cards, 3)) return;
//    }
//    else if(cnt==6) {
//        if(colors[cnt-2] != colors[cnt-1]) return;
//        if(!card_check(cards, 6)) return;
//    }
//    else if(cnt==9) {
//        if(colors[cnt-2] != colors[cnt-1]) return;
//        if(!card_check(cards, 9)) return;
//        ans = true;
//    }
//    else if(cnt==2 || cnt==5 || cnt==8){
//        if(colors[cnt-2] != colors[cnt-1]) return;
//    }
//    for(int i = 0; i < 9; ++i) {
//        if(!visited[i]) {
//            visited[i] = true;
//            dfs(cnt + 1, i, cards + card[i], colors + color[i]);
//            visited[i] = false;
//        }
//    }
//}
//
//int main() {
//    int t;
//    cin >> t;
//    for(int tc=1; tc <= t; ++tc) {
//        memset(visited, 0, sizeof(visited));
//        ans = false;
//        cin >> card;
//        cin >> color;
//        if(!color_check()) {
//            cout << '#' << tc << ' ' << "Continue" << '\n';
//            continue;
//        }
//        for(int i=0; i<9; ++i) {
//            visited[i] = true;
//            string temp1 = "";
//            string temp2 = "";
//            dfs(1, i, temp1 + card[i], temp2 + color[i]);
//            visited[i] = false;
//            if(ans) break;
//        }
//        if(ans)
//            cout << '#' << tc << ' ' << "Win" << '\n';
//        else
//            cout << '#' << tc << ' ' << "Continue" << '\n';
//    }
//}