//
// Created by 김영준 on 24. 12. 25.
//
#include<bits/stdc++.h>
using namespace std;

// 점수를 계산하는 함수
int determineScore(const vector<int>& diceCounts) {
    for (int i = 6; i > 0; i--) {
        if (diceCounts[i] == 3) {
            return 10000 + 1000 * i; // 같은 숫자 3개
        }
        if (diceCounts[i] == 2) {
            return 1000 + 100 * i; // 같은 숫자 2개
        }
        if (diceCounts[i] == 1) {
            return 100 * i; // 가장 큰 숫자
        }
    }
    return 0;
}

int main() {
    int n;
    cin >> n;

    int highestScore = 0;

    for (int k = 0; k < n; k++) {
        vector<int> diceCounts(7, 0); // 주사위 숫자 카운트 (1~6)

        // 주사위 입력
        for (int j = 0; j < 3; j++) {
            int dice;
            cin >> dice;
            diceCounts[dice]++;
        }

        // 점수 계산 및 최고 점수 갱신
        int currentScore = determineScore(diceCounts);
        highestScore = max(highestScore, currentScore);
    }

    cout << highestScore << endl;
    return 0;
}