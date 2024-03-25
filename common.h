#pragma once
//定义通用的配置
#include<iostream>
#include<fstream>
#include<string>
#include<vector>

#define INCOME "收入"
#define EXPAND "支出"
#define FILENAME "C:\\C++项目\\项目一_小谷记事本\\存储位置\\AccountBook.txt"

using namespace std;

//通用功能性函数声明
//绘制菜单的函数
void showMainMenu();
void showAccountingMenu();
void showQueryMenu();

//读取键盘输入进行合法性校验的函数
char readMenuSelection(int option);
char readQuitConfirm();
int readAmount();