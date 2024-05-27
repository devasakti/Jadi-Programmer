def garis():
    print("===================================")

def uangbansos(pendidikan) :
    global bansos
    if pendidikan[a] == "SD" :
        bansos.append(1000000)   
    elif pendidikan[a] == "SMP" :
        bansos.append(900000)
    elif pendidikan[a] == "SMA" :
        bansos.append(700000)
    elif pendidikan[a] == "D3" :
        bansos.append(600000)
    elif pendidikan[a] == "S1" :
        bansos.append(500000)
    else :
        print("Data Tidak Ditemukan.")

def status(bekerja) :
    global bonus_bansos
    if bekerja[a] == "Tidak" or bekerja[a] == "tidak" :
        hari.append(int(input("Sudah berapa hari anda tidak bekerja ? ")))
        if hari[a] >= 30 :
                bonus_bansos.append( bansos[a] + 500000)
        else :
            bonus_bansos.append(bansos[a])
    else :
        bonus_bansos.append(bansos[a])


nama = []
pendidikan = []
tgl_lahir = []
bansos = []
bekerja = []
hari = []
total_bansos = []
bonus_bansos = []

garis()
print("         KANTOR DESA SUKAKAMU           ")
print("      Kecamatan Pancoran Kota Depok      ")
garis()
print("")
print("     Penerimaan Dana Bantuan Sosial      ")
print("")
total = 0

nama_kepala = input("Masukkan nama kepala keluarga : ")
alamat = input("Masukkan alamat rumah : ")


jumlah = int(input("Silahkan masukan jumlah anggota keluarga :"))
print("Silahkan sebutkan nama anggota keluarga.")
for a in range(jumlah) :
    nama.append(input("Nama :"))
    tgl_lahir.append(input("Masukkan Tanggal lahir :"))    
    pendidikan.append(input("Masukkan tingkat pendidikan terakhir [SD/SMP/SMA/D3/S1] :"))
    uangbansos(pendidikan)

    bekerja.append(input("Apakah saat ini sedang bekerja? [Ya/Tidak] "))
    status(bekerja)

    
    total = total + bonus_bansos[a]
    

garis()
print("         KANTOR DESA DEPOK           ")
print("     Kecamatan Depok Kota Depok      ")
garis()
print("")
print("             Menyatakan")
print("")
print("Keluarga %s yang beralamat di %s dan beranggotakan %i orang, berhak mendapatkan bantuan sosial sebesar %i rupiah, dengan rincian sebagai berikut : " %(nama_kepala,alamat,jumlah,total))

print("No       Nama        Tanggal lahir       Pendidikan      Besar uang")

for a in range(jumlah) :
    print(a+1,"\t",nama[a],"\t","\t",tgl_lahir[a],"\t",pendidikan[a],"\t","\t",bonus_bansos[a])

print("")
print("                                                         Total", total)
print("")
print("UNTUK PENGAMBILAN, SILAHKAN DATANG KE KANTOR DESA DENGAN MEMBAWA KTP DAN KARTU KELUARGA")
print("                                                                           Terima kasih")
