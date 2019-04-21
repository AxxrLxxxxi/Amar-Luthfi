#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;
void garis();
void menu();
void film();
void hargatiket();
void beli();
void kelass();
void daftarfilm();

main()
{
    system("color a");
	string user,pass;
	char ch;
    login :
    cout<<"\t";garis(); cout<<endl;
    cout<<"\t------------SELAMAT DATANG-----------"<<endl;
    cout<<"\t-----------Z1R0 Z1R0 TEATER----------"<<endl;
    cout<<"\t";garis(); cout<<endl;
    cout<<" \t |          Silakan Login          |"<<endl;
		cout<<"\t"; garis(); cout<<endl;
        cout << "\tUsername : "; cin >> user;
        cout << "\tPassword : ";
		ch = _getch();
            while(ch != 13)
            {
            pass.push_back(ch);
            cout << '*';
            ch = _getch();
            }
    beranda:
	if (user=="admin" && pass=="12345")
	{
	    system("cls");
		menu();
        getch();
	}
	else
	{
		system("cls");
		cout<<"\n\n Username atau Password salah, silakan login kembali"<<endl;
		goto login;
		return 0;
	}
}

void garis()
{
    cout<<"=====================================";
}

void menu()
{
    int p;
    system ("cls");
    cout<<"\t"<<"===";garis(); cout<<"==="<<endl;
    cout<<"\t    Selamat Datang di Z1R0 Z1R0 TEATER"<<endl;
    cout<<"\t"<<"===";garis(); cout<<"==="<<endl<<endl;
    cout<<"\t\t1. Cek Daftar Film"<<endl;
    cout<<"\t\t2. Cek Harga"<<endl;
    cout<<"\t\t3. Pembelian Tiket"<<endl<<endl;
    cout<<"\t"<<"===";garis(); cout<<"==="<<endl;
    cout<<"\tMasukkan Pilihan : "; cin>>p;
    switch(p)
    {
    case 1:
        film();
        break;
    case 2:
        system("cls");
        hargatiket();
        break;
    case 3:
        beli();
        break;
    }
}

void film()
{
    char b;
    daftarfilm();
    cout << "\nPress B For Back : ";
    cin >> b;
    if(b == 'b' || b == 'B')
    {
        menu();
    }
    getch();
}

void hargatiket()
{
    char b;
    kelass();
    cout << "\nPress B For Back : ";
    cin >> b;
    if(b == 'b' || b == 'B')
    {
        menu();
    }
    getch();
}

void daftarfilm()
{
    system("cls");
    cout<<"                               ***- FILM -***"<<endl;
    cout<<"   ____________________________________________________________________________________"<<endl;
    cout<<"   |     ACTION        |     COMEDY         |     HORROR       |    INDONESIA         |"<<endl;
    cout<<"   |-------------------|--------------------|------------------|----------------------|"<<endl;
    cout<<"   | 1. |FAST FURIOUS 7| 3. |MR.BEAN HOLIDAY| 5. |THE CONJURING| 7. |   DILAN 1991    |"<<endl;
    cout<<"   |    |              |    |               |    |             |    |                 |"<<endl;
    cout<<"   | 2. | IRON MAN 3   | 4. |JOHNNY ENGLISH | 6. | INSIDIOUS 3 | 8. | MY STUPID BOSS 2|"<<endl;
    cout<<"   |-------------------|--------------------|------------------|----------------------|"<<endl<<endl;
}

void kelass()
{
    int a,b,c,d;

    cout<<"\n                       ===HARGA TIKET==="<<endl;
    cout<<"           _____________________________________________"<<endl;
    cout<<"           |    KELAS    |    JENIS    |     HARGA     |"<<endl;
    cout<<"           |-------------|-------------|---------------|"<<endl;
    cout<<"           |             |      2D     |   Rp30.000,00 |"<<endl;
    cout<<"           |   REGULER   |-------------|---------------|"<<endl;
    cout<<"           |             |      3D     |   Rp45.000,00 |"<<endl;
    cout<<"           |-------------|-------------|---------------|"<<endl;
    cout<<"           |             |      2D     |   Rp50.000,00 |"<<endl;
    cout<<"           |     GOLD    |-------------|---------------|"<<endl;
    cout<<"           |             |      3D     |   Rp70.000,00 |"<<endl;
    cout<<"           |-------------|-------------|---------------|"<<endl;
}

void beli()
{
    char *nama,*kelas,*jenis,*studio,n,mf,kls,t;
    float harga,jml,tot;
    daftarfilm();
    kelass();
    cout<<"\n\n   Masukkan kode film [1-8]  : "; cin>>mf;
    cout<<"   Masukkan kelas [R/G]      : "; cin>>n;
    cout<<"   Masukkan jenis [2/3]D     : "; cin>>kls;
    cout<<"   Masukkan jumlah pemesanan : "; cin>>jml;
    switch(mf)
    {
    case '1':
        studio="STUDIO 1";
        nama="FAST FURIOUS 7";
        if(n=='R' || n=='r')
        {
            kelas="Reguler";
            if(kls==2)
            {
                jenis="2D";
                harga=30000;
            }
            else
            {
                jenis="3D";
                harga=45000;
            }
        }
        else if(n=='g' || n=='G')
        {
            kelas="Gold";
            if(kls==2)
            {
                jenis="2D";
                harga=50000;
            }
            else
            {
                jenis="3D";
                harga=70000;
            }
        }
    break;
    case '2':
        studio="STUDIO 1";
        nama="IRON MAN 3";
        if(n=='R' || n=='r')
        {
            kelas="Reguler";
            if(kls==2)
            {
                jenis="2D";
                harga=30000;
            }
            else
            {
                jenis="3D";
                harga=45000;
            }
        }
        else if(n=='g' || n=='G')
        {
            kelas="Gold";
            if(kls==2)
            {
                jenis="2D";
                harga=50000;
            }
            else
            {
                jenis="3D";
                harga=70000;
            }
        }
    break;
    case '3':
        studio="STUDIO 2";
        nama="MR.BEAN HOLIDAY";
        if(n=='R' || n=='r')
        {
            kelas="Reguler";
            if(kls==2)
            {
                jenis="2D";
                harga=30000;
            }
            else
            {
                harga=45000;
            }
        }
        else if(n=='g' || n=='G')
        {
            kelas="Gold";
            if(kls==2)
            {
                jenis="2D";
                harga=50000;
            }
            else
            {
                jenis="3D";
                harga=70000;
            }
        }
    break;
    case '4':
        studio="STUDIO 2";
        nama="JOHNNY ENGLISH";
        if(n=='R' || n=='r')
        {
            kelas="Reguler";
            if(kls==2)
            {
                jenis="2D";
                harga=30000;
            }
            else
            {
                jenis="3D";
                harga=45000;
            }
        }
        else if(n=='g' || n=='G')
        {
            kelas="Gold";
            if(kls==2)
            {
                jenis="2D";
                harga=50000;
            }
            else
            {
                jenis="3D";
                harga=70000;
            }
        }
    break;
    case '5':
        studio="STUDIO 3";
        nama="THE CONJURING";
        if(n=='R' || n=='r')
        {
            kelas="Reguler";
            if(kls==2)
            {
                jenis="2D";
                harga=30000;
            }
            else
            {
                jenis="3D";
                harga=45000;
            }
        }
        else if(n=='g' || n=='G')
        {
            kelas="Gold";
            if(kls==2)
            {
                jenis="2D";
                harga=50000;
            }
            else
            {
                jenis="3D";
                harga=70000;
            }
        }
    break;
    case '6':
        studio="STUDIO 3";
        nama="INSIDIOUS 3";
        if(n=='R' || n=='r')
        {
            kelas="Reguler";
            if(kls==2)
            {
                jenis="2D";
                harga=30000;
            }
            else
            {
                jenis="3D";
                harga=45000;
            }
        }
        else if(n=='g' || n=='G')
        {
            kelas="Gold";
            if(kls==2)
            {
                jenis="2D";
                harga=50000;
            }
            else
            {
                jenis="3D";
                harga=70000;
            }
        }
    break;
    case '7':
        studio="STUDIO 4";
        nama="DILAN 1991";
        if(n=='R' || n=='r')
        {
            kelas="Reguler";
            if(kls==2)
            {
                jenis="2D";
                harga=30000;
            }
            else
            {
                jenis="3D";
                harga=45000;
            }
        }
        else if(n=='g' || n=='G')
        {
            kelas="Gold";
            if(kls==2)
            {
                jenis="2D";
                harga=50000;
            }
            else
            {
                jenis="3D";
                harga=70000;
            }
        }
    break;
    case '8':
        studio="STUDIO 5";
        nama="MY STUPID BOSS ";
        if(n=='R' || n=='r')
        {
            kelas="Reguler";
            if(kls==2)
            {
                jenis="2D";
                harga=30000;
            }
            else
            {
                jenis="3D";
                harga=45000;
            }
        }
        else if(n=='g' || n=='G')
        {
            kelas="Gold";
            if(kls==2)
            {
                jenis="2D";
                harga=50000;
            }
            else
            {
                jenis="3D";
                harga=70000;
            }
        }
    break;
    }
    system("cls");
    tot=jml*harga;
    cout<<"\t  TRANSAKSI PENJUALAN TIKET BIOSKOP"<<endl;
    cout<<"\t";garis(); cout<<endl;
    cout<<"\n\t  Nama Film        : "<<nama<<endl;
    cout<<"\t  Studio           : "<<studio<<endl;
    cout<<"\t  Kelas            : "<<kelas<<endl;
    cout<<"\t  Jenis            : "<<jenis<<endl;
    cout<<"\t  Harga Tiket      : Rp"<<harga<<",00"<<endl;
    cout<<"\t  Jumlah Pemesanan : "<<jml<<endl;
    cout<<"\t";garis(); cout<<endl;
    cout<<"\t  Total Bayar      : Rp"<<tot<<",00"<<endl;
    cout<<"\n\n\t=====";garis(); cout<<endl;
    cout<<"\tApakah anda ingin membeli lagi ? [Y/T] : "; cin>>t;
    while(t=='y' || t=='Y')
    {
        menu();
    }
    cout<<"\n\n\t    ==========TERIMA KASIH==========";
}
