#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasian { // asosisasi
public:
    string nama;
    vector<dokter*> daftar_dokter;
};