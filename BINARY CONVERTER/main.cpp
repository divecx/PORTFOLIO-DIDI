#include <iostream>
#include<string.h>
#include<math.h>

using namespace std;
int main()
{
    // deklarasi semua variable yang digunakan
    int opsi;
    int bil_biner;
    int mul = 1;
    int chk = 1;
    int rem;
    int bil_desimal=0;
    char hexDecbil_hexdec[20];
    int hex = 0;
    char bil_hexdec[20];
    // 1. deklarasi variable yang digunakan di binary to decimal
    int i=1; 
    int did;
    string binary_conventer[13] = {"1. BINARY TO DECIMAL", "2. BINARY TO HEX", "3. BINARY TO OCTAL", "4. DECIMAL TO BINARY",
    "5. DECIMAL TO HEX", "6. DECIMAL TO OCTAL", "7. HEX TO BINARY", "8. HEX TO DECIMAL", "9. HEX TO OCTAL", "10. OCTAL TO BINARY", "11. OCTAL TO DECIMAL", "12. OCTAL TO HEX", "13. BACK TO HOME" };
    string binary_calculation[5] = {"1. BINARY ADDITION","2. BINARY SUBSTRACTION", "3. BINARY MULTIPLY", "4. BINARY DIVISION", "5. BACK TO HOME"};
    // 2. deklarasi variabel yang digunakan di binary to hex
    int j=0;
    // 3. deklarasi variable yang digunakan di binary to octal
    int octalDigit=0, octalbil_hexdec_biner[20];
    int k=0;
    // 4. deklarasi variable yang digunakan di desimal to biner
    int arr_bil_biner[20];
    int l = 0;
    // 5. deklalrasi variable yang digunaka di desimal to hex
    int m = 0;
    char hexaDecimalbil_hexdec[50];
    // 6. deklarasi variable yang digunakan di desimal to octal
    int octalbil_hexdec_dec[50];
    int n=0;
    // 7. deklarasi variable yang digunakan di hexa to biner
    int o = 0;
    char arr_hexDecbil_hexdec[10];
    int ar_hexDecbil_hexdec = 0;
    // 8. deklarasi variable yang digunakan di hex to decimal
    int b, r, len;
    // 9. deklarasi variable yang digunakan di hex to octal
    int c = 0, len_hex_oc = 0;
    // 11. deklarasi variable yang digunakan di octal to decimal
    int octal_number, decimal_number=0, p=0, rem_11;
    //deklarasi variable yang digunakan di calculation
    // 1. addition calculation
    long int bin_1, bin_2, t1, t2;
    int a = 0, sum[16], rem_add = 0;
    // variable sementara untuk perhitungan biner pengurangan, perkalian, pembagian
    int biner1;
    int biner2;
    int hasil_biner;

    system("cls");
    cout << "     BINARY CALCULATOR" << endl;
    cout << "===========================" << endl;
    cout << "1. Menu" << endl;
    cout << "2. Credit" << endl;
    cout << "3. EXIT" << endl;
    cout << "===========================" << endl;
    cout << "Masukkan pilihan: " ;
    cin >> opsi;
    cin.ignore();
    cout << "===========================" << endl;
    // pemilihan awal (menu,credit,exit program)
    if (opsi == 2)
    {
        system("cls");
        cout << "        CREDIT" << endl;
        cout << "===========================" << endl;
        cout << "Antonius Didi Kurniadi  - 2110033" << endl;
        cout << "Muhammad Azka Adhitama  - 2109981" << endl;
        cout << "Rafli Maulid Firmansyah - 2101233" << endl;
        cout << "Ahmad Ali Alhafidz      - 2101431" << endl;
        cout << "   Teknik Komputer Kelas 1B" << endl;
        cout << "Universitas Pendidikan Indonesia" << endl;
        cout << "    Kampus Daerah Cibiru" << endl;
        cout << "===========================" << endl;
        cout << "1. BACK TO HOME" << endl;
        cout << "2. EXIT" << endl;
        cout << "===========================" << endl;
        cout << "Masukkan pilihan: ";
        cin >> opsi;
        cin.ignore();
        cout << "===========================" << endl;

        if (opsi == 1)
        {
            system("cls");
            return main();
        }if (opsi == 2)
        {
            system("cls");
            cout << "END OF PROGRAM" << endl;
            return 0;
        }
        if (opsi > 3)
        {
            system("cls");
            cout << "Input yang anda masukkan tidak tersedia" << endl;
        }  
        }
        if (opsi == 3)
        {
            system("cls");
            cout << "END OF PROGRAM" << endl;
            return 0;
        } 
    switch(opsi)
    {
    case 1:
        system("cls");
        cout << "         MENU" << endl;
        cout << "==========================" << endl;
        cout << "1. BINARY CONVERTER" << endl;
        cout << "2. BINARY CALCULATION" << endl;
        cout << "3. BACK TO HOME" << endl;
        break;
    case 2:
        system("cls");
        cout << "END OF PROGRAM" << endl;
        return 0;
    default:
        system("cls");
        cout << "END OF PROGRAM" << endl;
        return 0;
    }
    cout << "===========================" << endl;
    cout << "Masukkan pilihan: ";
    cin >> opsi;
    cin.ignore();
    cout << "===========================" << endl;
    
    if (opsi == 1)
    {
        system("cls");
        cout << "  BINARY CONVERTER LIST" << endl;
        cout << "==========================" << endl;
        for (int i = 0; i < 13; i++)
            {
                cout <<  binary_conventer[i] << endl;
            }      
    cout << "===========================" << endl;
    cout << "Masukkan pilihan: ";
    cin >> opsi;
    cin.ignore();
    cout << "===========================" << endl;
    // PROGRAM BESAR BAGIAN BINARY CONVERTER
    // 1. BINARY TO DECIMAL
    switch (opsi)
    {
    case 1:
        system("cls");
        cout << "BINARY TO DECIMAL CONVERTER" << endl;
    do{
        cout << "===========================" << endl;
        cout << "Masukkan bilangan biner\t: ";
        cin >> bil_biner;
    //rumus merubah bilangan biner menjadi desimal
    while(bil_biner!=0)
    {
        did = bil_biner%10;
        bil_desimal = bil_desimal + (did*i);
        i = i*2;
        bil_biner = bil_biner/10;
    }
    cout << "Bilangan desimalnya\t: " << bil_desimal << endl;
    cout << "==========================" << endl;
    cout << "1. Lanjut mengkonversi " << endl;
    cout << "2. Kembali ke menu " << endl;
    cout << "3. EXIT" << endl;
    cout << "==========================" << endl;
    cout << "Masukan pilihan: ";
    cin >> opsi;
    
    //deklarasi ulang semua variable yang digunakan agar nilai kembali semula
    bil_biner = 0;
    bil_desimal = 0;
    did = 0;
    i = 1;
    }while (opsi == 1);

    if (opsi == 2)
    {
        system("cls");
        return main ();
    }else if  (opsi == 3)
    {
        system("cls");
        cout << "==========================" << endl;
        cout << "END OF PROGRAM" << endl;
        cout << "==========================" << endl;
    }else{
        system("cls");
        cout << "==========================" << endl;
        cout << "Pilihan yang anda inputkan tidak tersedia" << endl;
    } break;
    // 2. BINARY TO HEX
    case 2:
    system("cls");
    cout << "BINARY TO HEX CONVERTER" << endl;
    do{
    cout << "==========================" << endl;
    cout << "Masukan bilangan biner: ";
    cin >> bil_biner;
    // merubah dari biner ke hex
    while(bil_biner!=0)
    {
        rem = bil_biner % 10;
        hex = hex + (rem*mul);
        if(chk%4 == 0)
        {
            if (hex<10)
                {
                hexDecbil_hexdec[j] = hex+48;
                }
            else
                {
                hexDecbil_hexdec[j] = hex+55;
                mul = 1;
                hex = 0;
                chk = 1;
                j++;
                }
        }
        else
        {
            mul = mul*2;
            chk++;
        }
        bil_biner = bil_biner/10;
    }

    if (chk != 1)
        {
        hexDecbil_hexdec[j] = hex+48;
        }
    else if (chk ==1 )
        {
        j--;
        }
    cout << "Hexadesimalnya: ";
    for(j=j; j>=0; j--)
    {
        cout << hexDecbil_hexdec[j];
    } cout << endl;
    // deklarasi ulang agar variable bernilai semula
    bil_biner = 0;
    mul = 1;
    chk = 1;
    hex = 0;
    j = 0;
    // user menginputkan kembali pilihan
    cout << "==========================" << endl;
    cout << "1. Lanjut mengkonversi " << endl;
    cout << "2. Kembali ke menu " << endl;
    cout << "3. EXIT" << endl;
    cout << "==========================" << endl;
    cout << "Masukan pilihan: ";
    cin >> opsi;
    }while (opsi == 1);

    if (opsi == 2)
    {
        system("cls");
        return main ();
    }else if  (opsi == 3)
    {
        system("cls");
        cout << "==========================" << endl;
        cout << "END OF PROGRAM" << endl;
        cout << "==========================" << endl;
    }else{
        system("cls");
        cout << "==========================" << endl;
        cout << "Pilihan yang anda inputkan tidak tersedia" << endl;
    }
    break;
    //3. BINARY TO OCTAL
    case 3:
    system("cls");
    cout << "BINARY TO OCTAL CONVERTER" << endl;
    do{
    cout << "==========================" << endl;
    cout << "Masukkan bilangan biner: " ;
    cin >> bil_biner;
    while(bil_biner!=0)
    {
        rem = bil_biner%10;
        octalDigit = octalDigit + (rem*mul);
        if(chk%3==0)
        {
            octalbil_hexdec_biner[k] = octalDigit;
            mul = 1;
            octalDigit = 0;
            chk = 1;
            k++;
        }
        else
        {
            mul = mul*2;
            chk++;
        }
        bil_biner = bil_biner/10;
    }
    if(chk!=1)
    {
        octalbil_hexdec_biner[k] = octalDigit;
        cout << "Octadesimalnya: ";
        for(k=k; k>=0; k--)
        {
        cout << octalbil_hexdec_biner[k];
        }
        cout << endl;
    }
    //deklarasi varibel yang digunakan di desimal to octal
    bil_biner = 0;
    rem = 0;
    mul = 1;
    chk = 1;
    octalDigit = 0;
    k = 0;
    // user menginputkan kembali pilihan
    cout << "==========================" << endl;
    cout << "1. Lanjut mengkonversi " << endl;
    cout << "2. Kembali ke menu " << endl;
    cout << "3. EXIT" << endl;
    cout << "==========================" << endl;
    cout << "Masukan pilihan: ";
    cin >> opsi;
    }while (opsi == 1);

    if (opsi == 2)
    {
        system("cls");
        return main ();
    }else if  (opsi == 3)
    {
        system("cls");
        cout << "==========================" << endl;
        cout << "END OF PROGRAM" << endl;
        cout << "==========================" << endl;
    }else{
        system("cls");
        cout << "==========================" << endl;
        cout << "Pilihan yang anda inputkan tidak tersedia" << endl;
    }
    break;
    // DECIMAL TO BINARY
    case 4:
        system("cls");
        cout << "DECIMAL TO BINARY CONVERTER" << endl;
        do{
        cout << "===========================" << endl;
        cout<<"Masukkan bilangan desimal: ";
        cin>>bil_desimal;
        while(bil_desimal!=0)
        {
        arr_bil_biner[l] = bil_desimal%2;
        l++;
        bil_desimal = bil_desimal/2;
        }
        cout<<"Bilangan binernya: ";
        for(l=(l-1); l>=0; l--)
        {
        cout<<arr_bil_biner[l];
        }
        cout << endl;
        //deklarasi kembali variabel yang digunakan agar nilainya seperti semula
        bil_desimal = 0;
        l = 0;
        cout << "==========================" << endl;
        cout << "1. Lanjut mengkonversi " << endl;
        cout << "2. Kembali ke menu " << endl;
        cout << "3. EXIT" << endl;
        cout << "==========================" << endl;
        cout << "Masukan pilihan: ";
        cin >> opsi;
        }while (opsi == 1);

    if (opsi == 2)
    {
        system("cls");
        return main ();
    }else if  (opsi == 3)
    {
        system("cls");
        cout << "==========================" << endl;
        cout << "END OF PROGRAM" << endl;
        cout << "==========================" << endl;
    }else{
        system("cls");
        cout << "==========================" << endl;
        cout << "Pilihan yang anda inputkan tidak tersedia" << endl;
    }
    break;
    // DECIMAL TO HEX
    case 5:
        system("cls");
        cout << "DECIMAL TO HEX CONVERTER" << endl;
        do{
        cout << "========================" << endl;
        cout << "Masukkan bilangan desimal: ";
        cin >> bil_desimal;
        while(bil_desimal!=0)
        {
        rem = bil_desimal%16;
        if(rem<10)
            rem = rem+48;
        else
            rem = rem+55;
        hexaDecimalbil_hexdec[m] = rem;
        m++;
        bil_desimal = bil_desimal/16;
    }
        cout << "Hexadesimalnya: ";
        for(m=m-1; m>=0; m--)
        {
        cout << hexaDecimalbil_hexdec[m];
        }cout << endl;
        // deklarasi kembali variabel yang digunakan
        bil_desimal = 0;
        rem = 0;
        m = 0;
        //user menginputkan pilihan
        cout << "==========================" << endl;
        cout << "1. Lanjut mengkonversi " << endl;
        cout << "2. Kembali ke menu " << endl;
        cout << "3. EXIT" << endl;
        cout << "==========================" << endl;
        cout << "Masukan pilihan: ";
        cin >> opsi;
        }while (opsi == 1);

        if (opsi == 2)
        {
            system("cls");
            return main ();
        }else if  (opsi == 3)
        {
        system("cls");
        cout << "==========================" << endl;
        cout << "END OF PROGRAM" << endl;
        cout << "==========================" << endl;
        }else
        {
        system("cls");
        cout << "==========================" << endl;
        cout << "Pilihan yang anda inputkan tidak tersedia" << endl;
        return 0;
        }
    break;
    // DECIMAL TO OCTAL
    case 6:
        system("cls");
        cout << "DECIMAL TO OCTAL CONVERTER" << endl;
        do{
        cout << "==========================" << endl;
        cout << "Masukkan bilangan desimal: ";
        cin >> bil_desimal;
    while(bil_desimal != 0)
    {
        octalbil_hexdec_dec[n] = bil_desimal%8;
        n++;
        bil_desimal = bil_desimal/8;
    }
    cout<<"Octalnya: ";
    for(n=(n-1); n>=0; n--)
    {
        cout<<octalbil_hexdec_dec[n];
    }
        // deklarasi kembali variabel yang digunakan
        bil_desimal = 0;
        n = 0;
        cout << endl;
        //user menginputkan pilihan
        cout << "==========================" << endl;
        cout << "1. Lanjut mengkonversi " << endl;
        cout << "2. Kembali ke menu " << endl;
        cout << "3. EXIT" << endl;
        cout << "==========================" << endl;
        cout << "Masukan pilihan: ";
        cin >> opsi;
        }while (opsi == 1);

        if (opsi == 2)
        {
            system("cls");
            return main ();
        }else if  (opsi == 3)
        {
            system("cls");
        cout << "==========================" << endl;
        cout << "END OF PROGRAM" << endl;
        cout << "==========================" << endl;
        }else
        {
            system("cls");
        cout << "==========================" << endl;
        cout << "Pilihan yang anda inputkan tidak tersedia" << endl;
        }
    break;
    //HEX TO BINARY
    case 7:
        system("cls");
        cout << "HEX TO BINARY CONVERTER" << endl;
        do{
        cout << "=======================" << endl;
        cout << "Masukkan bilangan Hexadesimal: ";
        cin >> arr_hexDecbil_hexdec[o];
        cout << "Bilangan biner: ";
    while(arr_hexDecbil_hexdec[o])
    {
        switch(arr_hexDecbil_hexdec[o])
        {
            case '0':
                cout<<"0000";
                break;
            case '1':
                cout<<"0001";
                break;
            case '2':
                cout<<"0010";
                break;
            case '3':
                cout<<"0011";
                break;
            case '4':
                cout<<"0100";
                break;
            case '5':
                cout<<"0101";
                break;
            case '6':
                cout<<"0110";
                break;
            case '7':
                cout<<"0111";
                break;
            case '8':
                cout<<"1000";
                break;
            case '9':
                cout<<"1001";
                break;
            case 'A':
            case 'a':
                cout<<"1010";
                break;
            case 'B':
            case 'b':
                cout<<"1011";
                break;
            case 'C':
            case 'c':
                cout<<"1100";
                break;
            case 'D':
            case 'd':
                cout<<"1101";
                break;
            case 'E':
            case 'e':
                cout<<"1110";
                break;
            case 'F':
            case 'f':
                cout<<"1111";
                break;
            default:
                cout << " Hex Digit " << arr_hexDecbil_hexdec[o] << " Tidak Ada";
        }
        o++;
    }
    // deklarasi kembali variable yang digunakan di hexadesimal to biner
    o = 0;
    cout<<endl;
    //user menginputkan pilihan
        cout << "==========================" << endl;
        cout << "1. Lanjut mengkonversi " << endl;
        cout << "2. Kembali ke menu " << endl;
        cout << "3. EXIT" << endl;
        cout << "==========================" << endl;
        cout << "Masukan pilihan: ";
        cin >> opsi;
        }while (opsi == 1);

        if (opsi == 2)
        {
            return main ();
        }else if  (opsi == 3)
        {
        cout << "==========================" << endl;
        cout << "END OF PROGRAM" << endl;
        cout << "==========================" << endl;
        }else
        {
        cout << "==========================" << endl;
        cout << "Pilihan yang anda inputkan tidak tersedia" << endl;
        }
    break;
    // HEX TO DECIMAL (masih belum sempurna)
    case 8:
    system("cls");
    cout << "HEX TO DECIMAL CONVERTER" << endl;
    do{
    cout << "========================" << endl;
    cout << "Masukkan bilangan hexadesimal: ";
    cin >> bil_hexdec;
    len = strlen(bil_hexdec);
    for (b = 0; bil_hexdec[b] != '\0'; b++)
    {
        len--;
        if(bil_hexdec[b] >= '0' && bil_hexdec[b] <= '9')
            r = bil_hexdec[b] - 48;
        else if(bil_hexdec[b] >= 'a' && bil_hexdec[b] <= 'f')
                r = bil_hexdec[b] - 87;
             else if(bil_hexdec[b] >= 'A' && bil_hexdec[b] <= 'F')
                    r = bil_hexdec[b] - 55;
        hex += r * pow(16,len);
    }
    cout << "Bilangan desimalnya: " << hex;
     // deklarasi kembali variabel yang digunakan
        len = 0;
        b = 0;
        r = 0;
        return bil_hexdec [b];
        //user menginputkan pilihan
        cout << endl;
        cout << "==========================" << endl;
        cout << "1. Lanjut mengkonversi " << endl;
        cout << "2. Kembali ke menu " << endl;
        cout << "3. EXIT" << endl;
        cout << "==========================" << endl;
        cout << "Masukan pilihan: ";
        cin >> opsi;
    }while (opsi == 1);

        if (opsi == 2)
        {
            return main ();
        }else if  (opsi == 3)
        {
        cout << "==========================" << endl;
        cout << "END OF PROGRAM" << endl;
        cout << "==========================" << endl;
        }else
        {
        cout << "==========================" << endl;
        cout << "Pilihan yang anda inputkan tidak tersedia" << endl;
        }
    break;
    // HEX TO OCTAL
    case 9:
        system("cls");
        cout << "HEX TO OCTAL CONVERTER" << endl;
        do{
        cout << "=========================" << endl;
        cout << "Masukkan bilangan Hexadesimal: ";
        cin >> bil_hexdec;
    while(bil_hexdec[c]!='\0')
    {
        len_hex_oc++;
        c++;
    }
    len_hex_oc--;
    c=0;
    while(len_hex_oc >= 0)
    {
        rem = bil_hexdec[len_hex_oc];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=70)
            rem = rem-55;
        else if(rem>=97 && rem<=102)
            rem = rem-87;
        else
        {
            cout<<"\nInvalid Hex Digit!";
            cout<<endl;
            return 0;
        }
        bil_desimal = bil_desimal + (rem*pow(16, i));
        len_hex_oc--;
        c++;
    }
    cout << "bilangan desimal Value: " << bil_desimal;
    cout<<endl;
       // deklarasi kembali variabel yang digunakan
        len_hex_oc = 0;
        rem = 0;
        bil_desimal = 0;
        c = 0;
        //user menginputkan pilihan
        cout << "==========================" << endl;
        cout << "1. Lanjut mengkonversi " << endl;
        cout << "2. Kembali ke menu " << endl;
        cout << "3. EXIT" << endl;
        cout << "==========================" << endl;
        cout << "Masukan pilihan: ";
        cin >> opsi;
    }while (opsi == 1);

        if (opsi == 2)
        {
            return main ();
        }else if  (opsi == 3)
        {
        cout << "==========================" << endl;
        cout << "END OF PROGRAM" << endl;
        cout << "==========================" << endl;
        }else
        {
        cout << "==========================" << endl;
        cout << "Pilihan yang anda inputkan tidak tersedia" << endl;
        }
    break;
    // OCTAL TO BINARY
    case 10:
        system("cls");
        cout << "COMING SOON" << endl;
        break;
    // OCTAL TO DECIMAL
    case 11:
        system("cls");
        cout << "OCTAL TO DECIMAL CONVERTER" << endl;
        do{
        cout << "========================" << endl;
        cout << "Masukan bilangan oktal: ";
        cin>>octal_number;
        while(octal_number!=0)
        {
        rem_11 = octal_number % 10;
        decimal_number = decimal_number + (rem_11*pow(8,p));
        p++;
        octal_number = octal_number / 10;
        }
        cout <<"Bilangan desimalnya: "<<decimal_number;
        cout << endl;
        // deklarasi kembali variabel yang digunakan
        octal_number = 0;
        decimal_number = 0;
        rem_11 = 0;
        p = 0;
        //user menginputkan pilihan
        cout << "==========================" << endl;
        cout << "1. Lanjut mengkonversi " << endl;
        cout << "2. Kembali ke menu " << endl;
        cout << "3. EXIT" << endl;
        cout << "==========================" << endl;
        cout << "Masukan pilihan: ";
        cin >> opsi;
        }while (opsi == 1);

        if (opsi == 2)
        {
            return main ();
        }else if  (opsi == 3)
        {
        system ("cls");
        cout << "==========================" << endl;
        cout << "END OF PROGRAM" << endl;
        cout << "==========================" << endl;
        }else
        {
        system("cls");
        cout << "==========================" << endl;
        cout << "Pilihan yang anda inputkan tidak tersedia" << endl;
        }
    break;
    // OCTAL TO HEX
    case 12:
        system("cls");
        cout << "COMING SOON" << endl;
    break;
    // BACK TO MENU
    case 13:
        system("cls");
        return main();
        break;
    } 
    //end of switch          
    }else if (opsi == 2)
    {
        system ("cls");
         for (int j = 0; j < 5; j++)
             {
                 cout << binary_calculation[j] << endl;
             }  
    cout << "===========================" << endl;
    cout << "Masukkan pilihan: ";
    cin >> opsi;
    cin.ignore();
    cout << "===========================" << endl;
    // PROGRAM BESAR BAGIAN CALCULATION
    // 1. BINARY ADDITION
    switch (opsi)
    {
        case 1:
        system("cls");
        cout << "BINARY ADDITION CALCULATOR" << endl;
        do{
        cout << "==========================" << endl;
        cout << "Masukkan biner 1: ";
        cin >> bin_1;
        cout << "Masukkan biner 2: ";
        cin >> bin_2;
        
        t1 = bin_1;
        t2 = bin_2;

   while(bin_1 !=0 || bin_2 !=0)
   {
      sum[a++] = (bin_1 % 10 + bin_2 % 10 + rem_add) % 2;
      rem_add = (bin_1 % 10 + bin_2 % 10 + rem_add) / 2;
      bin_1 = bin_1/10;
      bin_2 = bin_2/10;
   }
   
   if(rem_add!=0)
   {
        sum[a++] = rem_add;
        a--;
        cout << "==============================" << endl;
        cout << t1 << endl;
        cout << t2 << " +" << endl;
        cout << "-------" << endl;
   }
   while(a >= 0)
   {
      cout << sum[a--];
   }
   cout << endl;
   // deklarasi kembali variabel yang digunakan
   bin_1 = 0;
   bin_2 = 0;
   t1 = 0;
   t2 = 0;
   a = 0;
   rem_add = 0;
   //user menginputkan pilihan
        cout << "==========================" << endl;
        cout << "1. Lanjut mengkonversi " << endl;
        cout << "2. Kembali ke menu " << endl;
        cout << "3. EXIT" << endl;
        cout << "==========================" << endl;
        cout << "Masukan pilihan: ";
        cin >> opsi;
    }while (opsi == 1);

        if (opsi == 2)
        {
            system ("cls");
            return main ();
        }else if  (opsi == 3)
        {
        system ("cls");
        cout << "==========================" << endl;
        cout << "END OF PROGRAM" << endl;
        cout << "==========================" << endl;
        }else
        {
        cout << "==========================" << endl;
        cout << "Pilihan yang anda inputkan tidak tersedia" << endl;
        }
    break;
    // 2. BINARY SUBSTRACTION
        case 2:
        cout << "BINARY SUBSTRACTION CALCULATOR" << endl;
        do{
        cout << "=============================" << endl;
        cout << "Masukkan biner 1: ";
        cin >> biner1;
        cout << "Masukkan biner 2: ";
        cin >> biner2;
        cout << "=============================" << endl;
        cout << biner1 << endl;
        cout << biner2 << " -" << endl;
        cout << "--------" << endl;
        cout << hasil_biner << endl;
        cout << "=============================" << endl;
        cout << "1. Lanjut mengkonversi " << endl;
        cout << "2. Kembali ke menu " << endl;
        cout << "3. EXIT" << endl;
        cout << "==========================" << endl;
        cout << "Masukan pilihan: ";
        cin >> opsi;
        }while (opsi == 1);

    if (opsi == 2)
    {
        return main ();
    }else if  (opsi == 3)
    {
        cout << "==========================" << endl;
        cout << "END OF PROGRAM" << endl;
        cout << "==========================" << endl;
    }else{
        cout << "==========================" << endl;
        cout << "Pilihan yang anda inputkan tidak tersedia" << endl;
    }
    break;
    // 3. BINARY MULTIPLY
    case 3:
        cout << "BINARY MULTIPLY CALCULATOR" << endl;
        do{
        cout << "=============================" << endl;
        cout << "Masukkan biner 1: ";
        cin >> biner1;
        cout << "Masukkan biner 2: ";
        cin >> biner2;
        cout << "=============================" << endl;
        cout << biner1 << endl;
        cout << biner2 << "  +" << endl;
        cout << "--------" << endl;
        cout << hasil_biner << endl;
        cout << "=============================" << endl;
        cout << "1. Lanjut mengkonversi " << endl;
        cout << "2. Kembali ke menu " << endl;
        cout << "3. EXIT" << endl;
        cout << "==========================" << endl;
        cout << "Masukan pilihan: ";
        cin >> opsi;
        }while (opsi == 1);

    if (opsi == 2)
    {
        return main ();
    }else if  (opsi == 3)
    {
        cout << "==========================" << endl;
        cout << "END OF PROGRAM" << endl;
        cout << "==========================" << endl;
    }else{
        cout << "==========================" << endl;
        cout << "Pilihan yang anda inputkan tidak tersedia" << endl;
    }
    break;
    // 4. BINARY DIVISION
    case 4:
        cout << "BINARY DIVISION CALCULATOR" << endl;
        do{
        cout << "=============================" << endl;
        cout << "Masukkan biner 1: ";
        cin >> biner1;
        cout << "Masukkan biner 2: ";
        cin >> biner2;
        cout << "=============================" << endl;
        cout << "    ------" << endl;
        cout << biner1 << "/" << biner2 << " = " << hasil_biner << endl;
        cout << "=============================" << endl;
        cout << "1. Lanjut mengkonversi " << endl;
        cout << "2. Kembali ke menu " << endl;
        cout << "3. EXIT" << endl;
        cout << "==========================" << endl;
        cout << "Masukan pilihan: ";
        cin >> opsi;
        }while (opsi == 1);

    if (opsi == 2)
    {
        return main ();
    }else if  (opsi == 3)
    {
        cout << "==========================" << endl;
        cout << "END OF PROGRAM" << endl;
        cout << "==========================" << endl;
    }else{
        cout << "==========================" << endl;
        cout << "Pilihan yang anda inputkan tidak tersedia" << endl;
    }
    break;
    case 5:
    system("cls");
    return main();
    break;
    }
    // end of switch 2 
    if (opsi == 3)
    {
    return main();
    }

}
return 0;
}