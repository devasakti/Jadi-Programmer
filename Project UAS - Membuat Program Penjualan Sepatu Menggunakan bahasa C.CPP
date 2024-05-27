#include<iostream.h>
#include<conio.h>



int main(){
    int pilihan,jml_barang;
    float harga,total,bayar,diskon;
    char *item;
    clrscr();

    cout<<"=========================================================================="<<endl;
    cout<<"                      SELAMAT DATANG DI DEVA SHOES STORE		"<<endl;
    cout<<"     	Toko yang menjual berbagai sepatu lokal dan branded     "<<endl;
    cout<<"=========================================================================="<<endl;
    cout<<""<<endl;
    cout<<"			Daftar Sepatu                           "<<endl;
    cout<<"1. Adidas Free Fire : Rp. 250.000  "<<"  6. Nike Point Blank : Rp. 300.000"<<endl;
    cout<<"2. Redknot Soul     : Rp. 200.000  "<<"  7. Adidas Superior  : Rp. 350.000"<<endl;
    cout<<"3. Compass Lite     : Rp. 150.000  "<<"  8. Aerostreet Cuda  : Rp. 400.000"<<endl;
    cout<<"4. Nike Crowbar     : Rp. 200.000  "<<"  9. Puma Queen       : Rp. 200.000"<<endl;
    cout<<"5. Puma King        : Rp. 100.000  "<<"  10. Selesai"<<endl;
    cout<<"=========================================================================="<<endl;endl;

    do{
	cout<<"Masukan no Pilihan : ";
	cin>>pilihan;

	switch(pilihan){
		case 1:
			item = "Adidas Free Fire";
			harga = 250000;
			cout<<"Jumlah Barang : ";
			cin>>jml_barang;
			total += harga*jml_barang;
			cout<<"Anda membeli "<<item<<" sebanyak "<<jml_barang<<" pasang, dengan harga = Rp. "<<harga*jml_barang<<endl<<endl;
			break;
		case 2:
			item = "Redknot Soul";
			harga = 200000;
			cout<<"Jumlah Barang : ";
			cin>>jml_barang;
			total += harga*jml_barang;
			cout<<"Anda membeli "<<item<<" sebanyak "<<jml_barang<<" pasang, dengan harga = Rp. "<<harga*jml_barang<<endl<<endl;
			break;
		case 3:
			item = "Compass Lite";
			harga = 150000;
			cout<<"Jumlah Barang : ";
			cin>>jml_barang;
			total += harga*jml_barang;
			cout<<"Anda membeli "<<item<<" sebanyak "<<jml_barang<<" pasang, dengan harga = Rp. "<<harga*jml_barang<<endl<<endl;
			break;
		case 4:
			item = "Nike Crowbar";
			harga = 200000;
			cout<<"Jumlah Barang : ";
			cin>>jml_barang;
			total += harga*jml_barang;
			cout<<"Anda membeli "<<item<<" sebanyak "<<jml_barang<<" pasang, dengan harga = Rp. "<<harga*jml_barang<<endl<<endl;
			break;
		case 5:
			item = "Puma King";
			harga = 100000;
			cout<<"Jumlah Barang : ";
			cin>>jml_barang;
			total += harga*jml_barang;
			cout<<"Anda membeli "<<item<<" sebanyak "<<jml_barang<<" pasang, dengan harga = Rp. "<<harga*jml_barang<<endl<<endl;
			break;
		case 6:
			item = "Nike Point Blank";
			harga = 300000;
			cout<<"Jumlah Barang : ";
			cin>>jml_barang;
			total += harga*jml_barang;
			cout<<"Anda membeli "<<item<<" sebanyak "<<jml_barang<<" pasang, dengan harga = Rp. "<<harga*jml_barang<<endl<<endl;
			break;
		case 7:
			item = "Adidas Superior";
			harga = 350000;
			cout<<"Jumlah Barang : ";
			cin>>jml_barang;
			total += harga*jml_barang;
			cout<<"Anda membeli "<<item<<" sebanyak "<<jml_barang<<" pasang, dengan harga = Rp. "<<harga*jml_barang<<endl<<endl;
			break;
		case 8:
			item = "Aerostreet Cuda";
			harga = 400000;
			cout<<"Jumlah Barang : ";
			cin>>jml_barang;
			total += harga*jml_barang;
			cout<<"Anda membeli "<<item<<" sebanyak "<<jml_barang<<" pasang, dengan harga = Rp. "<<harga*jml_barang<<endl<<endl;
			break;
		case 9:
			item = "Puma Queen";
			harga = 200000;
			cout<<"Jumlah Barang : ";
			cin>>jml_barang;
			total += harga*jml_barang;
			cout<<"Anda membeli "<<item<<" sebanyak "<<jml_barang<<" pasang, dengan harga = Rp. "<<harga*jml_barang<<endl<<endl;
			break;
		case 10:
			cout<<endl<<endl;
			cout<<"============================================================"<<endl;
			cout<<"Jumlah Bayar : "<<total<<endl;

			if(total >= 1000000){
				diskon = 0.10 * total;
			} else if(total >= 750000){
				diskon = 0.08 * total;
			} else if(total >= 500000){
				diskon = 0.05 * total;
			} else {
				diskon = 0;
			}
			cout<<"Diskon      : "<<diskon<<endl;
			cout<<"Total Bayar : "<<total - diskon<<endl;
			cout<<"Bayar       : ";
			cin>>bayar;
			cout<<"Kembali     : "<<(bayar-(total-diskon))<<endl<<endl;
			break;
		default:
			cout<<"Format Salah!"<<endl<<endl;
			break;
		       }

    } while(pilihan !=10);
    cout<<"Terima Kasih Telah Berbelanja di Deva Shoes Store!"<<endl;

getch();

}
