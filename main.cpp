#include <iostream>
#include <fstream>
//#include <windows.h>
//#include <locale.h>

using namespace std;

int main()
{
//    setlocale( LC_ALL, "Russian" );
//    system("chcp 1251");
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    system("chcp 65001");
    setlocale(LC_CTYPE,"Russian");

    string path = "data.txt";
    ofstream fout;

    fout.open(path);

    if (!fout.is_open())
    {
        cout << "Error" << endl;
    }
    else
    {
        fout << "Данные";
    }

    fout.close();

//    system("pause");

    return 0;
}
