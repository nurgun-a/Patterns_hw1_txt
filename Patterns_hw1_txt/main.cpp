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
        cout << "Выберите действие:" << endl;
        cout << "1 - Создание" << endl;
        cout << "2 - Открытие" << endl;
        cout << "3 - Сохранение" << endl;
        cout << "4 - Сохранение под новым именем" << endl;
        cout << "5 - Печать" << endl;
        cout << "6 - Закрытие" << endl;
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
            cout << "Ошибка ввода!" << endl;
            system("pause");
            break;
        }
    } while (key);   
     
    cout << "\n\n\t\t\t\tThe End!" << endl;
}