#pragma once
//����ͨ�õ�����
#include<iostream>
#include<fstream>
#include<string>
#include<vector>

#define INCOME "����"
#define EXPAND "֧��"
#define FILENAME "C:\\C++��Ŀ\\��Ŀһ_С�ȼ��±�\\�洢λ��\\AccountBook.txt"

using namespace std;

//ͨ�ù����Ժ�������
//���Ʋ˵��ĺ���
void showMainMenu();
void showAccountingMenu();
void showQueryMenu();

//��ȡ����������кϷ���У��ĺ���
char readMenuSelection(int option);
char readQuitConfirm();
int readAmount();