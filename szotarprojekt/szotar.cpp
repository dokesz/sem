#include "func.hpp"
#include <iostream>

int main()
{
    cout << "Szotar program: " << endl;
    cout << "1-es gomb megnyomasaval beolvashatod a mar meglevo szavakat" << endl
         << "2-es gomb megnyomasaval uj szavakat adhatsz hozza";
    int gomb;
    cin >> gomb;
    if (gomb == 1)
    {
        ifstream f("szotar.txt");
        int u = read_db(&f);
        ifstream ff("szotar.txt");
        read_file(&ff, u);
        f.close();
        ff.close();
    }else
     //todo (ofstream)
    return 0;
}
