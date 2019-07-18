//#include <stdio.h>
//
//const int MAX_SIZE = 20000;
//
//char str[51][MAX_SIZE][51], buf[MAX_SIZE][51];
//int cnt[51];
//int n;
//
//void my_strcpy(char a[], char b[]);
//
//void swap(char a[], char b[]) {
//    char temp[51];
//    my_strcpy(temp, a);
//    my_strcpy(a, b);
//    my_strcpy(b, temp);
//}
//
//int my_strcmp(char a[], char b[]) {
//    int i = 0, j = 0;
//    while(a[i]) {
//        if(a[i++] != b[j++]) {
//            --i, --j;
//            break;
//        }
//    }
//    return a[i] - b[j];
//}
//
//void my_strcpy(char a[], char b[]) { // 문자열은 사실 포인터 형이다!
//    int i;
//    for(i=0; b[i] != 0; ++i) {
//        a[i] = b[i];
//    }
//    a[i] = 0;
//}
//
//int my_strlen(char a[]) {
//    int i;
//    while(a[i++]);
//    return i-1;
//}
//
//void merge_sort(char v[][51], int len) {
//    if(len < 2) return;
//    int mid = len / 2;
//    int i=0, j = mid, k=0;
//
//    merge_sort(v, mid);
//    merge_sort(v + mid, len - mid);
//
//    while(i < mid && j < len) {
//        if(my_strcmp(v[i], v[j]) < 0) {
//            my_strcpy(buf[k++], v[i++]);
//        }
//        else {
//            my_strcpy(buf[k++], v[j++]);
//        }
//    }
//    while(i < mid) {
//        my_strcpy(buf[k++], v[i++]);
//    }
//    while(j < len) {
//        my_strcpy(buf[k++], v[j++]);
//    }
//    for(int i=0; i<len; ++i) {
//        my_strcpy(v[i], buf[i]);
//    }
//}
//
//int main() {
//    scanf("%d", &n);
//    for(int i=0; i<n; ++i) {
//        char input[51];
//        scanf("%s", input);
//        int len = my_strlen(input);
//        my_strcpy(str[len][cnt[len]++], input);
//    }
//    for(int i=1; i<51; ++i) {
//        if(cnt[i]) {
//            merge_sort(str[i], cnt[i]);
//            for(int j=0; j < cnt[i]; ++j) {
//                if (j > 0 && my_strcmp(str[i][j], str[i][j - 1]) == 0) continue;
//                printf("%s\n", str[i][j]);
//            }
//        }
//    }
//}
