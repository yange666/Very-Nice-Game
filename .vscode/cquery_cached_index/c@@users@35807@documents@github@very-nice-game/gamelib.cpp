/**
 * @Author: 岩哥
 * @Date:   2018-10-27T14:18:00+08:00
 * @Email:  3579046@qq.com
 * @Last modified by:   岩哥
 * @Last modified time: 2018-10-27T14:20:27+08:00
 */



#include"../include/gamelib.h"
Interface::Interface()
{

}
Interface::~Interface()
{

}
void Interface::slowPrint(char*Arr)
{
    while(Arr!='\0'){
        cout<<Arr;
        Arr++;
        Sleep(50);
    }
}
