#include <iostream>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    float ipk;
};

int main() {
    Mahasiswa dataMhs[10];
    
    dataMhs[0] = {
        "125140175",
        "Goklas Irvan Joshua Harianja",
        3.5
    };
    
    dataMhs[1] = {
        "125140176",
        "Fulana",
        2.7
    };
    
    dataMhs[2] = {
        "125140020",
        "Fulani",
        1.5
    };
    
    dataMhs[3] = {
        "125140030",
        "Budi",
        1.9
    };
    
    dataMhs[4] = {
        "125140080",
        "Seysar",
        3.0
    };
    
    dataMhs[5] = {
       "125140075" ,
       "Tegar",
       2.3
    
    };
    
    dataMhs[6] = {
        "125140098",
        "Alvaro",
        1.9
    };
    
    dataMhs[7] = {
        "125140089",
        "Rama",
        3.3
    };
    
    dataMhs[8] = {
        "125140203",
        "Nico",
        1.7
    };
    
    dataMhs[9] = {
        "125140034",
        "Zidan",
        3.0
    };
    
    for (int i = 0; i < 9; i++) {
        if (dataMhs[i].ipk < 2.0) {
            cout << "Nama : " << dataMhs[i].nama << endl;
            cout << "NIM  : " << dataMhs[i].nim << endl;
        }
    }

    return 0;
}