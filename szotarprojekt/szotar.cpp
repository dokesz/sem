#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string text;
    ifstream reading("szotar.txt");
    while(getline (reading, text)){
        string* words = new string;
        
        //cout << text;
    }

    //cout << "Valami" << endl;
    return 0;
}