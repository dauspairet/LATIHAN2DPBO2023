<!-- Saya Muhamad Firdaus [2101995] mengerjakan
soal Latihan 2 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin. -->

<?php

// Deklarasi class Human
class Human{

    // Atribut private
    private $nik;
    private $nama;
    private $jenis_kelamin;

    // Constructor kosong
    function __construct(){
    }

    // Set NIK
    function setNik($nik){
        $this->nik = $nik;
    }

    // Get NIK
    function getNik(){
        return $this->nik;
    }

    // Set Nama
    function setNama($nama){
        $this->nama = $nama;
    }

    // Get Nama
    function getNama(){
        return $this->nama;
    }

    // Set Jenis Kelamin
    function setJenis_kelamin($jenis_kelamin){
        $this->jenis_kelamin = $jenis_kelamin;
    }

    // Get Jenis Kelamin
    function getJenis_kelamin(){
        return $this->jenis_kelamin;
    }

    // Destructor
    function __destruct(){
    }

}

// Deklarasi Class SivitasAkademik
class SivitasAkademik extends Human{
    // 
    private $universitas;
    private $email_edu;
    
    function __construct(){
    }

    function setUniversitas($universitas){
        $this->universitas = $universitas;
    }

    function getUniversitas(){
        return $this->universitas;
    }
    
    function setEmail_edu($email_edu){
        $this->email_edu = $email_edu;
    }

    function getEmail_edu(){
        return $this->email_edu;
    }

    function __destruct(){
    }

}

class Mahasiswa extends SivitasAkademik{
    // Atribut private
    private $Nim;
    private $fakultas;
    private $prodi;
    
    // Constructor tanpa parameter
    function __construct(){
    }

    // Set NIM
    function setNim($Nim){
        $this->Nim = $Nim;
    }

    // Get NIM
    function getNim(){
        return $this->Nim;
    }
    
    // Set Fakultas
    function setFakultas($fakultas){
        $this->fakultas = $fakultas;
    }

    // Get Fakultas
    function getFakultas(){
        return $this->fakultas;
    }

    // Set Prodi
    function setProdi($prodi){
        $this->prodi = $prodi;
    }

    // Get Prodi
    function getProdi(){
        return $this->prodi;
    }

    // Destructor
    function __destruct(){
    }

}

?>