#include "Header.h"

void main()
{
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    WordFactory* Word_Factory = new WordFactory;
    TxtFactory* Txt_Factory = new TxtFactory;
    ExcelFactory* Excel_Factory = new ExcelFactory;

    vector<Text_editor*> v;
    v.push_back(Word_Factory->createText_editor());
    v.push_back(Txt_Factory->createText_editor());
    v.push_back(Excel_Factory->createText_editor());

    bool key = 1;
    char ch;
   

    do
    {
        system("cls");
        cout << "�������� ��������:" << endl;
        cout << "1 - ��������" << endl;
        cout << "2 - ��������" << endl;
        cout << "3 - ����������" << endl;
        cout << "4 - ���������� ��� ����� ������" << endl;
        cout << "5 - ������" << endl;
        cout << "6 - ��������" << endl;
        cout << "Enter: "; cin >> ch;
        switch (ch)
        {
        case '1':
        {
            for (int i = 0; i < v.size(); i++)
            {
                v[i]->create();
                cout << "--------------------------------------------------------" << endl;
            }
            system("pause");
        }break;
        case '2':
        {
            for (int i = 0; i < v.size(); i++)
            {
                v[i]->open();
                cout << "--------------------------------------------------------" << endl;
            }
            system("pause");
        }break;
        case '3':
        {
            for (int i = 0; i < v.size(); i++)
            {
                v[i]->save();
                cout << "--------------------------------------------------------" << endl;
            }
            system("pause");
        }break;
        case '4':
        {
            for (int i = 0; i < v.size(); i++)
            {
                v[i]->save_as();
                cout << "--------------------------------------------------------" << endl;
            }
            system("pause");
        }break;
        case '5':
        {
            for (int i = 0; i < v.size(); i++)
            {
                v[i]->print();
                cout << "--------------------------------------------------------" << endl;
            }
            system("pause");
        }break;
        case '6':
        {
            for (int i = 0; i < v.size(); i++)
            {
                v[i]->close();
                cout << "--------------------------------------------------------" << endl;               
            }
            system("pause");
            key = 0;
        }break;
        case '0':
        {
            key = 0;
        }break;
        default:
            cout << "������ �����!" << endl;
            system("pause");
            break;
        }
    } while (key);   
     
    cout << "\n\n\t\t\t\tThe End!" << endl;
}