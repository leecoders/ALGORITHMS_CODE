//#include <cstdio>
//int n;
//int board[20][20];
//int dy[] = {0, 0, 1, -1, 1, -1, 1, -1};
//int dx[] = {1, -1, 0, 0, 1, -1, -1, 1};
//
//int check(int a, int b, int color) {
//    for(int i=0; i<4; ++i) {
//        int y = a;
//        int x = b;
//        int cnt = 0;
//        while(!(y+dy[2*i]<1||x+dx[2*i]<1||y+dy[2*i]>19||x+dx[2*i]>19)&&board[y+dy[2*i]][x+dx[2*i]]==color) {
//            y += dy[2*i];
//            x += dx[2*i];
//            cnt++;
//        }
//        y = a;
//        x = b;
//        while(!(y+dy[2*i+1]<1||x+dx[2*i+1]<1||y+dy[2*i+1]>19||x+dx[2*i+1]>19)&&board[y+dy[2*i+1]][x+dx[2*i+1]]==color) {
//            y += dy[2*i+1];
//            x += dx[2*i+1];
//            cnt++;
//        }
//        if(cnt == 4) return true;
//    }
//    return false;
//}
//
//int main() {
//    scanf("%d", &n);
//    for(int i=0; i<n; ++i) {
//        int a, b;
//        scanf("%d %d", &a, &b);
//        board[a][b] = (i%2)+1;
//        if(check(a, b, (i%2)+1)) {
//            printf("%d", i+1);
//            return 0;
//        }
//    }
//    printf("%d", -1);
//}