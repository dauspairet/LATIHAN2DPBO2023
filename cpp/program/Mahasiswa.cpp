/*Saya Muhamad Firdaus [2101995] mengerjakan
soal Latihan 2 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

#include <iostream>
#include <string>

using namespace std;

// Deklaras class Human
class Human{
    // Atribut private
    private:
        string Nik;
        string nama;
        string jenis_kelamin;
    
    public:
        // Constructor tanpa parameter 
        Human(){
            this->Nik = "";
            this->nama = "";
            this->jenis_kelamin = "";
        }

        // Constructor dengan parameter
        Human(string Nik, string nama, string jenis_kelamin){
        this->Nik = Nik;
        this->nama = nama;
        this->jenis_kelamin = jenis_kelamin;
        }

        // Set Nik
        void setNik(string Nik){
            this->Nik = Nik;
        }

        // Get Nik
        string getNik(){
            return this->Nik;
        }

        // Set Nama
        void setNama(string nama){
            this->nama = nama;
        }

        // Get Nama
        string getNama(){
            return this->nama;

        }

        // Set Jenis Kelamin
        void setJenis_kelamin(string jenis_kelamin){
            this->jenis_kelamin = jenis_kelamin;
        }

        // Get Jenis Kelamin
        string getJenis_kelamin(){
            return this->jenis_kelamin;

        }

        // Destructor
        ~Human(){
        }
};

// Deklarasi class SivitasAkademik
class SivitasAkademik : public Human{
    // Atribut private
    private:
        string universitas;
        string email_edu;
    
    public:
        // Constructor tanpa parameter
        SivitasAkademik(){
            this->universitas = "";
            this->email_edu = "";
        }

        // Constructor dengan parameter
        SivitasAkademik(string Nik, string nama, string jenis_kelamin, string universitas, string email_edu){
            this->setNik(Nik);
            this->setNama(nama);
            this->setJenis_kelamin(jenis_kelamin);
            this->universitas = universitas;
            this->email_edu = email_edu;
        }

        // Set Universitas
        void setUniversitas(string universitas){
            this->universitas = universitas;
        }

        // Get Universitas
        string getUniversitas(){
            return this->universitas;

        }

        // Set email_edu
        void setEmail_edu(string email_edu){
            this->email_edu = email_edu;
        }

        // Get email_edu 
        string getEmail_edu(){
            return this->email_edu;

        }

        // Destructor
        ~SivitasAkademik(){
        }
};

// Deklarasi class Mahasiswa
class Mahasiswa : public SivitasAkademik{
    // Atribut private
    private:
        string Nim;
        string fakultas;
        string prodi;
    
    public:
        // Constructor kosong
        Mahasiswa(){
            this->Nim = "";
            this->fakultas = "";
            this->prodi = "";
        }

        // Constructors dengan parameter
        Mahasiswa(string Nik, string nama, string jenis_kelamin, string universitas, string email_edu, string NIM, string fakultas, string prodi)
        : SivitasAkademik(Nik, nama, jenis_kelamin, universitas, email_edu) {
        this->Nim = Nim;
        this->fakultas = fakultas;
        this->prodi = prodi;
    }

        // Set NIM
        void setNim(string nim){
            this->Nim = nim;
        }

        // Get NIM
        string getNim(){
            return this->Nim;

        }

        // Set Fakultas
        void setFakultas(string fakultas){
            this->fakultas = fakultas;
        }

        // Get Fakultas
        string getFakultas(){
            return this->fakultas;

        }

        // Set Prodi
        void setProdi(string prodi){
            this->prodi = prodi;
        }

        // Get Prodi
        string getProdi(){
            return this->prodi;

        }

        // Destructor
        ~Mahasiswa(){
        }
};