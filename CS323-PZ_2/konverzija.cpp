#include <iostream>
#include <fstream>

using namespace std;

void IzmenaKursa(){
    std::fstream fajl("valute.txt", std::ios_base::in);

    double a, b, c;

    fajl >> a >> b >> c; //Kurs se iz fajla učitava u lokalne promenljive.
    fajl.close();
    cout<<"Kursna lista po RSD:\n";
    cout<<"1. EUR->"<<a<<"\n2. BAM->"<<b<<"\n3. USD->"<<c<<endl;
    
    int izbor;
    cout<<"Odaberite valutu za izmenu:\n-> ";
    cin>>izbor;
    switch(izbor){   
        case 1:
            cout<<"Unesite novi kurs: ";
            cin>>a;
            break ;
        case 2:
            cout<<"Unesite novi kurs: ";
            cin>>b;
            break ;
        case 3:
            cout<<"Unesite novi kurs: ";
            cin>>c;
            break ;
     }
    
    fstream upis ("valuta.txt");
    upis.open("valute.txt");
    upis << a << " " << b << " " << c;
    cout<<"Izmene su sačuvane!"<<endl;

    upis.close();
}

//Funkcije za konveriju učitavju podatke iz fajla zatim vrše računicu i rezultat ispisuju na ekranu.
void RSDuEUR(){
    std::fstream fajl("valute.txt", std::ios_base::in);

    double a, b, c, iznos, broj;

    fajl >> a >> b >> c;
    fajl.close();
    
    cout<<"Unesite iznos: ";
    cin>>iznos;
    broj = a*iznos;
    cout<<iznos<<" RSD je "<<broj<<" EUR"<<endl;
}

void RSDuBAM(){
    std::fstream fajl("valute.txt", std::ios_base::in);

    double a, b, c, iznos, broj;

    fajl >> a >> b >> c;
    fajl.close();
    
    cout<<"Unesite iznos: ";
    cin>>iznos;
    broj = b*iznos;
    cout<<iznos<<" RSD je "<<broj<<" BAM"<<endl;
}

void RSDuUSD(){
    std::fstream fajl("valute.txt", std::ios_base::in);

    double a, b, c, iznos, broj;

    fajl >> a >> b >> c;
    fajl.close();
    
    cout<<"Unesite iznos: ";
    cin>>iznos;
    broj = c*iznos;
    cout<<iznos<<" RSD je "<<broj<<" USD"<<endl;
}

//Funkcije za povlašćene korisnike koji imaju bolju konverziju za 10%
void RSDuEURp(){
    std::fstream fajl("valute.txt", std::ios_base::in);

    double a, b, c, iznos, broj, broj1;

    fajl >> a >> b >> c;
    fajl.close();
    
    cout<<"Unesite iznos: ";
    cin>>iznos;
    broj = a*iznos;
    broj1 = broj*10/100+broj;
    cout<<iznos<<" RSD je "<<broj1<<" EUR"<<endl;
}

void RSDuBAMp(){
    std::fstream fajl("valute.txt", std::ios_base::in);

    double a, b, c, iznos, broj, broj1;

    fajl >> a >> b >> c;
    fajl.close();
    
    cout<<"Unesite iznos: ";
    cin>>iznos;
    broj = b*iznos;
    broj1 = broj*10/100+broj;
    cout<<iznos<<" RSD je "<<broj1<<" BAM"<<endl;
}

void RSDuUSDp(){
    std::fstream fajl("valute.txt", std::ios_base::in);

    double a, b, c, iznos, broj, broj1;

    fajl >> a >> b >> c;
    fajl.close();
    
    cout<<"Unesite iznos: ";
    cin>>iznos;
    broj = c*iznos;
    broj1 = broj*10/100+broj;
    cout<<iznos<<" RSD je "<<broj1<<" USD"<<endl;
}