#include "func.hpp"

int read_db(ifstream *pf)
{
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

void read_file(ifstream *pf, int size)
{
    string *words = new string[size];
    if (pf->is_open())
    {
        for (int i = 0; i < size; i++)
        {
            getline(*pf, words[i]);
        }
        cout << "------------------------" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << words[i] << endl;
        }
    }
}  