# /*Saya Muhamad Firdaus [2101995] mengerjakan
# soal Latihan 2 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan 
# seperti yang telah dispesifikasikan. Aamiin.*/

# Deklarasi class Human
class Human:
    # Atribut private
    __Nik = ""
    __nama = ""
    __jenis_kelamin= ""
    
    # Constructor
    def __init__(self, Nik="", nama="", jenis_kelamin=""):
        self.__Nik = Nik
        self.__nama = nama
        self.__jenis_kelamin = jenis_kelamin

    # Set NIK
    def setNik(self, Nik):
        self.__Nik = Nik

    # Get NIK
    def getNik(self):
        return self.__Nik

    # Set Nama
    def setNama(self, nama):
        self.__nama = nama

    # Get Nama
    def getNama(self):
        return self.__nama

    # Set Jenis Kelamin
    def setJenis_kelamin(self, jenis_kelamin):
        self.__jenis_kelamin = jenis_kelamin

    # Get Jenis Kelamin
    def getJenis_kelamin(self):
        return self.__jenis_kelamin

# Deklarasi Sivitas Akademik
class SivitasAkademik(Human):
    # Atribut private
    __universitas = ""
    __email_edu = ""
    
    # Constructor
    def __init__(self, Nik="", nama="", jenis_kelamin="", universitas="", email_edu=""):
        super().__init__(Nik, nama, jenis_kelamin)
        self.__universitas = universitas
        self.__email_edu = email_edu

    # Set Universitas
    def setUniversitas(self, universitas):
        self.__universitas = universitas

    # Get Universitas
    def getUniversitas(self):
        return self.__universitas

    # Set email_edu
    def setEmail_edu(self, email_edu):
        self.__email_edu = email_edu

    # get email_edu
    def getEmail_edu(self):
        return self.__email_edu

# Deklarasi class Mahasiswa
class Mahasiswa(SivitasAkademik):
    # Atribut private
    __Nim = ""
    __fakultas = ""
    __prodi = ""
    
    # Constructor
    def __init__(self, Nik="", nama="", jenis_kelamin="", universitas="", email_edu="", Nim="", fakultas="", prodi=""):
        super().__init__(Nik, nama, jenis_kelamin, universitas, email_edu)
        self.__Nim = Nim
        self.__fakultas = fakultas
        self.__prodi = prodi

    # Set NIM
    def setNim(self, Nim):
        self.__Nim = Nim

    # Get NIM
    def getNim(self):
        return self.__Nim

    # Set Fakultas
    def setFakultas(self, fakultas):
        self.__fakultas = fakultas

    # Get Fakultas
    def getFakultas(self):
        return self.__fakultas

    # Set Prodi
    def setProdi(self, prodi):
        self.__prodi = prodi

    # Get Prodi
    def getProdi(self):
        return self.__prodi