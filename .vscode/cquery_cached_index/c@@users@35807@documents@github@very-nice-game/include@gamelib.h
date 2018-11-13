/**
 * @Author: 岩哥
 * @Date:   2018-10-27T13:15:04+08:00
 * @Email:  3579046@qq.com
 * @Last modified by:   岩哥
 * @Last modified time: 2018-10-27T17:47:13+08:00
 */

#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <windows.h>

using namespace std;
class Interface {
public:
  Interface();
  ~Interface();
  /*在控制台中缓慢输出*/
  void slowPrint(char *Arr);
};
Interface::Interface() { printf("初始化中....\n完毕..."); }
Interface::~Interface() {}
void Interface::slowPrint(char *p) {
  while (1) {
    if (*p != 0)
      printf("%c", *p++);
    else
      break;
    Sleep(100);
  }
}
