#include <iostream>
#include "korisnici.h"

using namespace std;

void ObicniKorisnik();
void PrivilegovaniKorisnik();
void AdminLogin();
void IzmenaKursa();
void RSDuEUR();
void RSDuBAM();
void RSDuUSD();
void RSDuEURp();
void RSDuBAMp();
void RSDuUSDp();
void Meni();
void Meni1();

int main(int argc, char** argv) {
    cout<<"$ KONVERZIJA VALUTA $\n\n"
            "1. Administrator\n2. Korisnik sa povlašćenjem\n3. Obični korisnik\n-----------------------\n";
    cout<<"-> "; 
    int izbor;
    cin>>izbor;
    switch(izbor){   
        case 1:
            AdminLogin();
            IzmenaKursa();
            break ;
        case 2:
            PrivilegovaniKorisnik();
            Meni1();
            break ;
        case 3:
            ObicniKorisnik();
            Meni();
            break ;
     }

    return 0;
}
void Meni(){
    cout<<"\nOdaberite u koju valutu želite da konvertujete:\n1. RSD u EUR\n2. RSD u BAM\n3. RSD u USD\n-> ";
    int izbor;
    cin>>izbor;
    switch(izbor){   
        case 1:
            RSDuEUR();
            break ;
        case 2:
            RSDuBAM();
            break ;
        case 3:
            RSDuUSD();
            break ;
     }
}

void Meni1(){
    cout<<"\nOdaberite u koju valutu želite da konvertujete:\n1. RSD u EUR\n2. RSD u BAM\n3. RSD u USD\n-> ";
    int izbor;
    cin>>izbor;
    switch(izbor){   
        case 1:
            RSDuEURp();
            break ;
        case 2:
            RSDuBAMp();
            break ;
        case 3:
            RSDuUSDp();
            break ;
     }
}

void ObicniKorisnik(){
    Korisnik korisnik1;
    ifstream usersFile("korisnici.txt");
    long pocetak, kraj;

    if (usersFile.good())
    {
        cout << "Fajl korisnici.txt je pronađen!\n\n";
    }
    
    else {
        korisnik1.Registracija(); //Ukoliko fajl nije pronađen pokreće se registracija pri kojoj će se kreirati fajl.
    }

    if(usersFile.is_open())
    {
        pocetak = usersFile.tellg(); //Čita dužinu podataka u fajlu.
        usersFile.seekg (0, ios::end); //Postavlja startnu poziciju.

        kraj = usersFile.tellg();
        usersFile.close();

        if(pocetak == kraj)
        {
            korisnik1.Registracija();
        }

        else
            {
                int izbor;
                cout<<"1. Registracija\n2. Log in\n-----------------------\n";
                cout<<"-> "; 
                cin>>izbor;
                switch(izbor){   
                case 1:
                    korisnik1.Registracija();
                    break ;
                case 2:
                    korisnik1.login();
                    break ;
                }
            }
    }
}

void PrivilegovaniKorisnik(){
    Privilegovani_korisnik korisnik1;
    ifstream usersFile("korisnici.txt");
    long pocetak, kraj;

    if (usersFile.good())
    {
        cout << "Fajl korisnici.txt je pronađen!\n\n";
    }
    
    else {
        korisnik1.Registracija();
    }

    if(usersFile.is_open())
    {
        pocetak = usersFile.tellg(); //Čita dužinu podataka u fajlu.
        usersFile.seekg (0, ios::end); //Postavlja startnu poziciju.

        kraj = usersFile.tellg();
        usersFile.close();

        if(pocetak == kraj)
        {
            korisnik1.Registracija();
        }

        else
            {
                int izbor;
                cout<<"1. Registracija\n2. Log in\n-----------------------\n";
                cout<<"-> "; 
                cin>>izbor;
                switch(izbor){   
                case 1:
                    korisnik1.Registracija();
                    break ;
                case 2:
                    korisnik1.login();
                    korisnik1.info();
                    break ;
                }
            }
    }
}
