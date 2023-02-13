#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <vector>

using namespace std;

class Text_editor
{
public:
    virtual void create() = 0;
    virtual void open() = 0;
    virtual void save() = 0;
    virtual void save_as() = 0;
    virtual void print() = 0;
    virtual void close() = 0;
    virtual ~Text_editor() {}
};

class Word: public Text_editor
{
public:
    void create() { cout <<setw(20)<< "Create by word" << endl; }
    void open() { cout << setw(20) << "Open by word" << endl; }
    void save() { cout << setw(20) << "Save by word" << endl; }
    void save_as() { cout << setw(20) << "Save as by word" << endl; }
    void print() { cout << setw(20) << "Print by word" << endl; }
    void close() { cout << setw(20) << "Close by word" << endl; }
};

class Txt : public Text_editor
{
public:
    void create() { cout << setw(20) << "Create by txt" << endl; }
    void open() { cout << setw(20) << "Open by txt" << endl; }
    void save() { cout << setw(20) << "Save by txt" << endl; }
    void save_as() { cout << setw(20) << "Save as by txt" << endl; }
    void print() { cout << setw(20) << "Print by txt" << endl; }
    void close() { cout << setw(20) << "Close by txt" << endl; }
};

class Excel : public Text_editor
{
public:
    void create() { cout << setw(20) << "Create by excel" << endl; }
    void open() { cout << setw(20) << "Open by excel" << endl; }
    void save() { cout << setw(20) << "Save by excel" << endl; }
    void save_as() { cout << setw(20) << "Save as by excel" << endl; }
    void print() { cout << setw(20) << "Print by excel" << endl; }
    void close() { cout << setw(20) << "Close by excel" << endl; }
};

class Factory
{
public:
    virtual Text_editor* createText_editor() = 0;
    virtual ~Factory() {}
};

class WordFactory : public Factory
{
public:
    Text_editor* createText_editor()
    {
        return new Word;
    }
};

class TxtFactory : public Factory
{
public:
    Text_editor* createText_editor()
    {
        return new Txt;
    }
};

class ExcelFactory : public Factory
{
public:
    Text_editor* createText_editor()
    {
        return new Excel;
    }
};