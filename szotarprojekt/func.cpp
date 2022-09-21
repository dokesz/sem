#include "func.hpp"

int read_db(ifstream *pf)
{
    cout << "Eddig eljutott";
    int line = 0;
    string text;
    // string* text = new string[MAX];
    if (pf->is_open())
    {
        while (!pf->eof())
        {
            getline(*pf, text);
            line++;
            // cout << "beolvasva";
        }
        // pf->close();
        cout << line << endl;
    }
    return line;
}
