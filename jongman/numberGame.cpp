#include <iostream>
#include <algorithm>

using namespace std;

const int EMPTY = -984321;
int n;
int board[50];
int cache[50][50];

int play(int left, int right) {
    //모든 수가 없어졌을 때
    if (left > right) return 0;

    int& ret = cache[left][right];
    if (ret != EMPTY) return ret;		//해당 캐쉬이 비어있지 않는 경우 해당 값을 그대로 사용(DP)

    //수를 가져가는 경우
    ret = max(board[left] - play(left + 1, right),
              board[right] - play(left, right - 1));

    //수를 없애는 경우
    if (right - left + 1 >= 2) {
        ret = max(ret, -play(left + 2, right));
        ret = max(ret, -play(left, right - 2));
    }

    return ret;
}

int main()
{
    int c;
    cin >> c;
    for (int i = 0;i < c;i++) {
        cin >> n;
        for (int r = 0;r < 50;r++)
            for (int c = 0;c < 50;c++)
                cache[r][c] = EMPTY;

        for (int j = 0;j < n;j++) {
            cin >> board[j];
        }
        cout << play(0, n - 1) << '\n';
    }
}
