/*Saya Muhamad Firdaus [2101995] mengerjakan
soal Latihan 2 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

public class Main{
    public static void main(String[] args){
        // Contoh data
        Mahasiswa mhs = new Mahasiswa("15022023", "Testing", "Pria", "Upi", "contoh@upi.edu", "230205", "FPMIPA", "IT");

        // Output NIK
        System.out.println("NIK: " + mhs.getNIK());
        
        // Output Nama
        System.out.println("Name: " + mhs.getNama());
        
        // Output Jenis Kelamin
        System.out.println("Jenis Kelamin: " + mhs.getJenis_kelamin());
        
        // Output Universitas
        System.out.println("Universitas: " + mhs.getUniversitas());
        
        // Output Email
        System.out.println("Email: " + mhs.getEmail_edu());
        
        // Output NIM
        System.out.println("NIM: " + mhs.getNIM());
        
        // Output Fakultas
        System.out.println("Fakultas: " + mhs.getFakultas());
        
        // Output Prodi
        System.out.println("Prodi: " + mhs.getProdi());
    }
}