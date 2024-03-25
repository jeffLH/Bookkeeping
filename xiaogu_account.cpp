#include"account_item.h"
#include"common.h"

int main()
{
	//1.�����ļ��е���Ŀ����
	vector<AccountItem> items;
	loadDataFromFile(items);

	bool quit = false;
	while (!quit) 
	{
		//2.��ʾ���˵�
		showMainMenu();

		//3.��ȡ����ѡ�񣬲����Ϸ���У��
		char key = readMenuSelection(3);

		switch (key)
		{
		case '1': //���˹���
			showAccountingMenu();
			accounting(items);
			break;
		case '2': //��ѯ
			showQueryMenu();
			query(items);
			break;
		case '3': //�˳�
			cout << "\nȷ���˳��� (Y/N)��";
			if (readQuitConfirm() == 'Y')
				quit = true;
			break;

		default:
			break;
		}
		cout << endl;
	}
}