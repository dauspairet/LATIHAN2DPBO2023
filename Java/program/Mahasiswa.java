/*Saya Muhamad Firdaus [2101995] mengerjakan
soal Latihan 2 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

// Deklarasi class human
class Human{
    // Atribut
    private String NIK;
    private String nama;
    private String jenis_kelamin;

    // Contructors tanpa parameter
    public Human(){
        this.NIK = "";
        this.nama = "";
        this.jenis_kelamin = "";
    }

    // Contructors dengan parameter
    public Human(String NIK, String nama, String jenis_kelamin){
        this.NIK = NIK;
        this.nama = nama;
        this.jenis_kelamin = jenis_kelamin;
    }

    // Get NIK
    public String getNIK(){
        return NIK;
    }

    // Set NIK
    public void setNIK(String NIK){
        this.NIK = NIK;
    }

    // Get Nama
    public String getNama(){
        return nama;
    }

    // Set Nama
    public void setNama(String nama){
        this.nama = nama;
    }

    // Get Jenis_kelamin
    public String getJenis_kelamin(){
        return jenis_kelamin;
    }

    // Set Jenis_kelamin
    public void setJenis_kelamin(String jenis_kelamin){
        this.jenis_kelamin = jenis_kelamin;
    }
}

// Deklarasi class SivitasAkademik extend class Human
class SivitasAkademik extends Human{
    // Atribut
    private String universitas;
    private String email_edu;

    // Constructors dengan parameter
    public SivitasAkademik(String NIK, String nama, String jenis_kelamin, String universitas, String email_edu){
        this.setNIK(NIK);
        this.setNama(nama);
        this.setJenis_kelamin(jenis_kelamin);
        this.universitas = universitas;
        this.email_edu = email_edu;
    }

    // Get Universitas
    public String getUniversitas(){
        return universitas;
    }

    // Set Universitas
    public void setUniversitas(String universitas){
        this.universitas = universitas;
    }

    // Get Email_edu
    public String getEmail_edu(){
        return email_edu;
    }

    // Set Email_edu
    public void setEmail_edu(String email_edu){
        this.email_edu = email_edu;
    }
}

// Deklarasi class SivitasAkademik extend class Mahasiswa
class Mahasiswa extends SivitasAkademik{
    // Atribut
    private String NIM;
    private String fakultas;
    private String prodi;

    // Constructors dengan parameter
    public Mahasiswa(String NIK, String nama, String jenis_kelamin, String universitas, String email_edu, String NIM, String fakultas, String prodi){
        // Menggunakan method super agar dapat mengakses Human
        super(NIK, nama, jenis_kelamin, universitas, email_edu);
        this.NIM = NIM;
        this.fakultas = fakultas;
        this.prodi = prodi;
    }

    // Get NIM
    public String getNIM(){
        return NIM;
    }

    // Set NIM
    public void setNIM(String NIM){
        this.NIM = NIM;
    }

    // Get Fakultas
    public String getFakultas(){
        return fakultas;
    }

    // Set Fakultas
    public void setFakultas(String fakultas){
        this.fakultas = fakultas;
    }

    // Get Prodi
    public String getProdi(){
        return prodi;
    }

    // Set Prodi
    public void setProdi(String prodi){
        this.prodi = prodi;
    }
}
