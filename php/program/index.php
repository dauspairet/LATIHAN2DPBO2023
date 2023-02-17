<!-- Saya Muhamad Firdaus [2101995] mengerjakan
soal Latihan 2 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin. -->

<?php
    // Mengimport Mahasiswa.php
    include "Mahasiswa.php";

    // Deklarasi objek agar dapat menggunakan metode dalam Mahasiswa.cpp
    $mhs = new Mahasiswa();

    // Hard code input data Mahasiswa
    $mhs->setNik("17022023");
    $mhs->setNama("James Bond");
    $mhs->setJenis_kelamin("It? or Male?");
    $mhs->setUniversitas("UPI");
    $mhs->setEmail_edu("Jamezt2@upiedu");
    $mhs->setNim("231702");
    $mhs->setFakultas("Agent");
    $mhs->setProdi("Spy");

    // Output Data
    echo "<table border=1 align=center>";
        echo "<tr>";
            echo "<th>NIK</th>";
            echo "<th>Nama</th>";
            echo "<th>Jenis Kelamin</th>";
            echo "<th>Universitas</th>";
            echo "<th>Email</th>";
            echo "<th>NIM</th>";
            echo "<th>Fakultas</th>";
            echo "<th>Prodi</th>";
        echo "</tr>";
        // Output Data
        echo "<tr>";
            echo "<td>" . $mhs->getNIK()."</td>";
            echo "<td>" . $mhs->getNama()."</td>";
            echo "<td>" . $mhs->getJenis_kelamin()."</td>";
            echo "<td>" . $mhs->getUniversitas()."</td>";
            echo "<td>" . $mhs->getEmail_edu()."</td>";
            echo "<td>" . $mhs->getNIM()."</td>";
            echo "<td>" . $mhs->getFakultas()."</td>";
            echo "<td>" . $mhs->getProdi()."</td>";
        echo "</tr>";
    echo "</table>";
?>