#include <iostream>

using namespace std;

int main(){
    int a,b,c,k,x;
    float L;
    string pill;

menu:
    system("cls");
    cout<<" ____________________________"<<endl;
    cout<<"|__________TUGAS DDP_________|"<<endl;
    cout<<"| 1. Luas segitiga           |"<<endl;
    cout<<"| 2. Keliling segitiga       |"<<endl;
    cout<<"| 3. Pertukaran              |"<<endl;
    cout<<"|                            |"<<endl;
    cout<<"|____________________________|"<<endl;
    cout<<" Masukan nomor pilihan :  ";
    cin>>pill;cout<<endl;

    if(pill=="1"){
        cout<<"_______LUAS SEGITIGA_______"<<endl<<endl;
        cout<<" masukan alas segitiga : ";
        cin>>a;
        cout<<" masukan tinggi segitiga : ";
        cin>>b;

        L=0.5*a*b;

        cout<<endl;
        cout<<" luas segitiga adalah "<<L<<endl;
        cout<<"_______________________________"<<endl;
        cout<<" masukkan angka 0 untuk kembali ke menu : ";cin>>x; goto menu;
    }

    if(pill=="2"){
        cout<<"_______KELILING SEGITIGA_______"<<endl<<endl;
        cout<<" masukan sisi a : ";
        cin>>a;
        cout<<" masukan sisi b : ";
        cin>>b;
        cout<<" masukan sisi c : ";
        cin>>c;

        k=a+b+c;

        cout<<endl;
        cout<<" keliling segitiga adalah "<<k<<endl;
        cout<<"_______________________________"<<endl;
        cout<<" masukkan angka 0 untuk kembali ke menu : ";cin>>x; goto menu;
    }

    if(pill=="3"){
        cout<<"_________PERTUKARAN_________"<<endl<<endl;
        cout<<" masukan nilai a : ";
        cin>>a;
        cout<<" masukan nilai b : ";
        cin>>b;

        // proses pertukaran
        c=a;
        a=b;
        b=c;

        cout<<endl;
        cout<<"______HASIL PERTUKARAN NILAI______"<<endl<<endl;
        cout<<" Nilai a adalah : "<<a<<endl;
        cout<<" Nilai b adalah : "<<b<<endl;
        cout<<"_______________________________"<<endl;
        cout<<" masukkan angka 0 untuk kembali ke menu : ";cin>>x; goto menu;
    }

    if(pill>"3"){
        cout<<"________maaf pilihan tidak tersedi________"<<endl;
        cout<<" masukkan angka 0 untuk kembali ke menu : ";cin>>x; goto menu;
    }

    return 0;

}