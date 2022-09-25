#include "func.hpp"
#include <iostream>

int main()
{
    int temp = 0;
    while (temp < 3)
    {
        cout << "Szotar program: " << endl;
        cout << "1-es gomb megnyomasaval beolvashatod a mar meglevo szavakat"
             << endl
             << "2-es gomb megnyomasaval uj szavakat adhatsz hozza a text file-hoz"
             << endl
             << "3-as vagy nagyobb szam eseten kilep a program" << endl
             << "Add meg a megfelelo szamot: ";
        cin >> temp;
        if (temp == 1)
        {
            ifstream f("szotar.txt");
            int u = read_db(&f);
            ifstream ff("szotar.txt");
            read_file(&ff, u);
            // f.close();
            cout << endl;
            // ff.close();
        }
        else if (temp == 2)
        {
            cin.ignore(10000, '\n');
            ofstream out_f;
            write_file(&out_f);
        }
        else
            cout << "Goodbye!";
    }
    return 0;
}
