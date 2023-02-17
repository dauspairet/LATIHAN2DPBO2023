/*Saya Muhamad Firdaus [2101995] mengerjakan
soal Latihan 2 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

#include <iostream>
#include <string>

using namespace std;

// Mengimpor Mahasiswa.cpp
#include "Mahasiswa.cpp"

int main(){
    // Deklarasi objek agar dapat menggunakan metode dalam Mahasiswa.cpp
    Mahasiswa mhs;

    // Hard code input data Mahasiswa
    mhs.setNik("17022023");
    mhs.setNama("James Bond");
    mhs.setJenis_kelamin("It? or Male?");
    mhs.setUniversitas("UPI");
    mhs.setEmail_edu("Jamezt2@upi.edu");
    mhs.setNim("231702");
    mhs.setFakultas("Agent");
    mhs.setProdi("Spy");

    // Ouput Data
    cout << ("NIK           : " + mhs.getNik()) << endl;
    cout << ("Nama          : " + mhs.getNama()) << endl;
    cout << ("Jenis Kelamin : " + mhs.getJenis_kelamin()) << endl;
    cout << ("Universitas   : " + mhs.getUniversitas()) << endl;
    cout << ("Email         : " + mhs.getEmail_edu()) << endl;
    cout << ("NIM           : " + mhs.getNim()) << endl;
    cout << ("Fakultas      : " + mhs.getFakultas()) << endl;
    cout << ("Prodi         : " + mhs.getProdi()) << endl;


}