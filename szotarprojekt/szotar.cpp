#include "func.hpp"
#include <iostream>

int main()
{
    ifstream f("szotar.txt");
    read_db(&f);
    f.close();
    /*ifstream reading("szotar.txt");
    string *sorok = new string[db];
    for (int i = 0; i < db; i++)
    {
        getline(reading, sorok[i]);
        // cout << "Beolvasas" ;
    }

    reading.close();

    for (int i = 0; i < db; i++)
    {
        cout << sorok[i] << endl;
    }
}
else
    cout << "sikertelen nyitas";
// cout << db;*/
    return 0;
}
