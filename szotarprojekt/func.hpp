//#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int read_db(ifstream *pf);
void read_file(ifstream *pf, int size);
void write_file(ofstream *out_f);