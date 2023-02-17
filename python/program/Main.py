# /*Saya Muhamad Firdaus [2101995] mengerjakan
# soal Latihan 2 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan 
# seperti yang telah dispesifikasikan. Aamiin.*/

# Mengimpor Mahasiswa.cpp
from Mahasiswa import Mahasiswa

# Deklarasi objek agar dapat menggunakan metode dalam Mahasiswa.cpp
mhs = Mahasiswa()

# Hard code input data Mahasiswa
mhs.setNik("17022023")
mhs.setNama("James Bond")
mhs.setJenis_kelamin("It? or Male?")
mhs.setUniversitas("UPI")
mhs.setEmail_edu("Jamezt2@upi.edu")
mhs.setNim("231702")
mhs.setFakultas("Agent")
mhs.setProdi("Spy")

# Ouput Data
print("NIK           : " + mhs.getNik())
print("Nama          : " + mhs.getNama())
print("Jenis Kelamin : " + mhs.getJenis_kelamin())
print("Universitas   : " + mhs.getUniversitas())
print("Email         : " + mhs.getEmail_edu())
print("NIM           : " + mhs.getNim())
print("Fakultas      : " + mhs.getFakultas())
print("Prodi         : " + mhs.getProdi())