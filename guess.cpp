#include <iostream>

using namespace std;

namespace g {
void result() {
  // 提示遊戲開始
  cout << "遊戲開始，請輸入一個字母：";

  // 字母清單
  char charList[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k'};

  // 隨機索引號（未完成）
  int randomNum = 5;

  char guessTarget = charList[randomNum];

  // 玩家輸入
  char gamerInputChar;
  cin >> gamerInputChar;

  int checkFlag = 0;

  // 遊戲會持續到玩家猜中
  while (checkFlag == 0) {
    cout << "猜錯了再一次";
    cin >> gamerInputChar;

    // 檢查答案
    if (gamerInputChar == guessTarget) {
      checkFlag = 1;
    } else {
      checkFlag = 0;
    }
  }

  while (checkFlag == 1) {
    cout << "Bingo!";
    // 問玩家是否再玩一次
    cout << "要不要再玩一次？(Y or N)";
    char gamerDesire;
    cin >> gamerDesire;
    switch (gamerDesire) {
    case 'Y':
    case 'y':
      result(); //遞迴
      break;
    case 'N':
    case 'n':
      exit(0); //離開程式
      break;
    }
  }
}

} // namespace g