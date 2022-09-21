#include <func.hpp>

//#define MAX 10

int main()
{
    ifstream reading("szotar.txt");
    int db = 0;
    string text;
    // string* text = new string[MAX];
    if (reading.is_open())
    {
        while (!reading.eof())
        {
            getline(reading, text);
            db++;
        }

        reading.close();

        ifstream reading("szotar.txt");
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
    // cout << db;
    return 0;
}