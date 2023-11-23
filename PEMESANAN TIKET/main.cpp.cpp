#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	int user_input, input_pembelian, jml_kursi;
	string nama, baris;
	int no_ktp;
	char yes_no;

	cout << "==================================================" << endl;
	cout << "\t\tBajaktiket.com" << endl;
	cout << "==================================================" << endl;

	menu:
	cout << "\t\t    MENU" << endl;
	cout << "==================================================" << endl;
	cout << "1. Lihat Jadwal" << endl;
	cout << "2. Beli Tiket"  << endl;
	cout << "3. Riwayat" << endl;
	cout << "4. EXIT" << endl;
	cout << "==================================================" << endl;
	do{
	cout << "Masukkan pilihan ->";
	cin >> user_input;

	if (user_input == 1)
		{
			system("cls");
			cout << "==================================================" << endl;
			cout << "	JADWAL KEBERANGKATAN KERETA API" << endl;
			cout << "		 Bandung - Jakarta        " << endl;
			cout << "==================================================" << endl;
			cout << "NO| HARI | JAM KEBERANGKATAN | HARGA" << endl;
    		cout << "==================================================" << endl;
			cout << "1. Senin\t08.00\t\t50.000" << endl;
    		cout << "2. Selasa\t06.30\t\t50.000" << endl;
    		cout << "3. Rabu\t\t09.00\t\t50.000" << endl;
   		 	cout << "4. Kamis\t08.00\t\t50.000" << endl;
    		cout << "5. Jumat\t08.00\t\t50.000" << endl;
    		cout << "6. Sabtu\t08.00\t\t50.000" << endl;
    		cout << "7. Minggu\t09.00\t\t50.000" << endl;
		}if (user_input == 2)
	 		{
		 		goto beli_tiket;
	 		}if (user_input == 3)
			 {
				cout << "==================================================" << endl;
				cout << "RIWAYAT PEMBELIAN";
				ifstream myFiles("Struk Tiket.txt");
				while (getline(myFiles,baris ))
					{
						cout << baris << endl;
					}
				system("pause");;
			 }if (user_input == 4)
			 {
				 return 0;
			 }if(user_input != 1 && user_input != 2 && user_input != 3 && user_input != 4)
			 	{
					cout << "==================================================" << endl;
					cout << "Pilihan tidak tersedia!" << endl;
					cout << "Silahkan pilih kembali" << endl;
					cout << "==================================================" << endl;
			 	}
		}while(user_input != 1 && user_input != 2 && user_input != 3 && user_input != 4);
	do
	{
	cout << "==================================================" << endl;
	cout << "1. BACK TO MENU" << endl;
	cout << "2. EXIT" << endl;
	cout << "==================================================" << endl;
	cout << "Masukan pilihan ->";
	cin >> user_input;

	if (user_input == 1)
		{
			system("cls");
			goto menu;
		}if(user_input == 2)
				{
					system("cls");
					cout << "==================================================" << endl;
					cout << "Program Finished" << endl;
					cout << "==================================================" << endl;
					return 0;
				}else
					{
						cout << "==================================================" << endl;
						cout << "Pilihan tidak tersedia!" << endl;
						cout << "Silahkan pilih kembali" << endl;
						cout << "==================================================" << endl;
					}
	}while(user_input != 1 && user_input != 2);


beli_tiket:
cout << "==================================================" << endl;
cout << "Form Pembelian Tiket Kereta Api" << endl;
cout << "==================================================" << endl;
cout << "Nama Lengkap\t: ";
cin.ignore();
getline(cin,nama);
cout << "No KTP\t\t: ";
cin >> no_ktp;
cout << "==================================================" << endl;
cout << "	     PILIH JADWAL KEBERANGKATAN              " << endl;
cout << "==================================================" << endl;
cout << "NO| HARI | JAM KEBERANGKATAN | HARGA" << endl;
cout << "==================================================" << endl;
cout << "1. Senin\t08.00\t\t50.000" << endl;
cout << "2. Selasa\t06.30\t\t50.000" << endl;
cout << "3. Rabu\t\t09.00\t\t50.000" << endl;
cout << "4. Kamis\t08.00\t\t50.000" << endl;
cout << "5. Jumat\t08.00\t\t50.000" << endl;
cout << "6. Sabtu\t08.00\t\t50.000" << endl;
cout << "7. Minggu\t09.00\t\t50.000" << endl;
cout << "==================================================" << endl;
cout << "Masukkan pilihan -> ";
cin >> input_pembelian;
cout << "==================================================" << endl;
cout << "Masukkan jumlah kursi: ";
cin >> jml_kursi;

ofstream myfile;
myfile.open ("Struk Tiket.txt", std::ios_base::app);
myfile << endl;
myfile << "==================================================" << endl;
myfile << "            TIKET BAJAKTIKET.COM                " << endl;
myfile << "==================================================" << endl;
myfile << "Nama Lengkap\t\t: " << nama << endl;
myfile << "No. KTP\t\t\t: " << no_ktp << endl;
myfile << "Jadwal Keberangkatan\t: ";
if(input_pembelian == 1)
	{
		myfile << "Senin pukul 08.00 " << endl;
	}
	if(input_pembelian == 2)
		{
			myfile << "Selasa pukul 08.00 " << endl;
		}
		if(input_pembelian == 3)
		{
			myfile << "Rabu pukul 06.30 " << endl;
		}
		if(input_pembelian == 4)
		{
			myfile << "Kamis pukul 09.00 " << endl;
		}
		if(input_pembelian == 5)
		{
			myfile << "Jumat pukul 08.00 " << endl;
		}
		if(input_pembelian == 6)
		{
			myfile << "Sabtu pukul 08.00 " << endl;
		}
		if(input_pembelian == 7)
		{
			myfile << "Minggu pukul 09.00 " << endl;
		}
myfile << "Jumlah kursi\t\t: " << jml_kursi << endl;
myfile << "Harga yang harus dibayar: " << jml_kursi*50000 << endl;
myfile << "==================================================" << endl;
myfile << "          Silahkan bayar diloket" << endl;
myfile << "               Terima Kasih" << endl;
myfile << "==================================================" << endl;
myfile.close();
cout << "==================================================" << endl;
cout << "            Pembelian telah selesai" << endl;
cout << "    Silahkan cek riwayat untuk melihat struk" << endl;
cout << "==================================================" << endl;

do
{
cout << "1. BACK TO MENU" << endl;
cout << "2. EXIT" << endl;
cout << "Masukkan pilihan-> ";
cin >> user_input;
	if (user_input == 1)
		{
			system("cls");
			goto menu;
		}if(user_input == 2)
				{
					system("cls");
					return 0;
				}else
					{
						cout << "==================================================" << endl;
						cout << "Pilihan tidak tersedia!" << endl;
						cout << "Silahkan pilih kembali" << endl;
						cout << "==================================================" << endl;
					}
	}while(user_input != 1 && user_input != 2);

return 0;
}