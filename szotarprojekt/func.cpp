#include "func.hpp"

int read_db(ifstream *pf)
{
    int line = 0;
    string text;
    if (pf->is_open())
    {
        while (!pf->eof())
        {
            getline(*pf, text);
            line++;
        }
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

void write_file(ofstream *out_f)
{
    out_f->open("szotar.txt", ofstream::out | ofstream::app);
    string input = "stay";
    char text[100];
    //ofstream outfile("valami2.txt");
    while (input == "stay")
    {
        if (out_f->is_open())
        {
            cout << "Adjon meg szavakat, hasznaljon '-' a szavak "
                    "elvalasztasahoz: ";
            cin.getline(text, 100);

            // write inputted data into the file.
            *out_f << text << endl;
            // asking for more words
            cout << "Akarod folytatni a szavak bevitelet? (exit-re kilep, stay-re marad)"
                 << endl;
            cin >> input;
        }
    }
}