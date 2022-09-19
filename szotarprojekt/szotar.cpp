#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string* text=new string;
    ifstream reading("szotar.txt");
    if(reading.is_open()){
        for(int i=0; i != reading.eof(); i++){
            getline(reading, text[i]);
        }
    reading.close();
    for (int i = 0; i < text->size(); i++){
        cout << text[i];
    }
    }else
        cout << "sikertelen nyitas";
    return 0;
}