#include <iostream>

using namespace std;

int main(){
    string pill;
    int rek,x;
    int nominal;

menu:
    system("cls");
    cout<<" ______________________________________"<<endl;
    cout<<"|              MINI BANK               |"<<endl;
    cout<<"|______________________________________|"<<endl;
    cout<<"|___________DAFTAR TRANSAKSI___________|"<<endl;
    cout<<"| 1. Tarik Tunai                       |"<<endl;
    cout<<"| 2. Simpan uang                       |"<<endl;
    cout<<"| 3. Transfer uang                     |"<<endl;
    cout<<"| 4. Pinjam uang                       |"<<endl;
    cout<<"| 5. Daftar nasabah                    |"<<endl;
    cout<<"|______________________________________|"<<endl;
    cout<<" Masukan no pilihan : ";
    cin>>pill;

    if(pill=="1"){
        cout<<endl<<"==========TARIK TUNAI=========="<<endl;

        cout<<endl<<"  masukkan no rek \t: ";
        cin>>rek;
        
        cout<<"  masukkan nominal \t: ";
        cin>>nominal;

        cout<<endl<<"  Anda menarik uang sebesar "<<nominal<<endl;
        
        cout<<endl<<"========TERIMA KASIH=======";

        cout<<endl<<" masukkan angka 0 untuk kembali ke menu : ";cin>>x;goto menu;


    }
    if(pill=="2"){
        cout<<endl<<"========SIMPAN UANG========="<<endl;

        cout<<endl<<"   masukkan no rek \t: ";
        cin>>rek;

        cout<<"   masukan nominal \t: ";
        cin>>nominal;

        cout<<endl<<"  Anda menyimpan uang sebesar "<<nominal<<endl;

        cout<<endl<<"========TERIMA KASIH=======";

        cout<<endl<<" masukkan angka 0 untuk kembali ke menu : ";cin>>x;goto menu;

    }

    if(pill=="3"){
        cout<<endl<<"========TRANSFER UANG========="<<endl;

        cout<<endl<<"   masukkan no rek \t: ";
        cin>>rek;

        cout<<"   masukan nominal \t: ";
        cin>>nominal;

        cout<<endl<<"  Anda mentransfer uang sebesar "<<nominal<<endl;

        cout<<endl<<"========TERIMA KASIH=======";

        cout<<endl<<" masukkan angka 0 untuk kembali ke menu : ";cin>>x;goto menu;

    }

    if(pill=="4"){
        cout<<endl<<"========PINJSM UANG========="<<endl;

        cout<<endl<<"   masukkan no rek \t: ";
        cin>>rek;

        cout<<"   masukan nominal \t: ";
        cin>>nominal;

        cout<<endl<<"  Anda meminjam uang sebesar "<<nominal<<endl;

        cout<<endl<<"========TERIMA KASIH=======";

        cout<<endl<<" masukkan angka 0 untuk kembali ke menu : ";cin>>x;goto menu;

    }


     
    return 0;
}