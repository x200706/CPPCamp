// 加入要運行的程式
#include "guess.cpp"

// 加入要用的lib
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

// 範例函式宣告區
void f();

int main() {
  g::result(); // 冒冒以前抽換成你要Debug的檔案的命名空間
  return 0;
}

// 範例函式定義區
void f() { cout << "f()" << endl; }