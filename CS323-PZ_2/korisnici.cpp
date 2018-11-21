#include "korisnici.h"

void Korisnik::Registracija(){
    cout << "Registracija:\n-----------------------\nUnesite novi username:\n";
    cin >> username;

    cout << "\nUnesite novi password:\n";
    cin >> password;
    fstream fajl ("korisnici.txt", std::ofstream::out | std::ofstream::app); //Omogućeno dopisivanje u fajl.

    if (!fajl.is_open())
     {
        fajl.open("korisnici.txt", std::ofstream::out | std::ofstream::app);
     }

    fajl << username << " " << password << endl;

    fajl.close();
    login();
};

void Korisnik::login(){
    cout << "Log in:\n-----------------------\nUnesite username:\n";
    cin >> unosUsername;

    cout << "\nUnesite password:\n";
    cin >> unosPassword;

    string provera = unosUsername + " " + unosPassword; // Šablon za proveru.
    string linija;
    ifstream FajlKorisnika;
    FajlKorisnika.open ("korisnici.txt");

    bool pronadjen = false;
    if(FajlKorisnika.is_open()) {
        while(getline(FajlKorisnika,linija) && !pronadjen) {
            if (linija.compare(provera) == 0) { //Poređenje podataka.
                pronadjen = true;
            }
        }
	FajlKorisnika.close(); //Zatvaranje fajla.
	if(pronadjen) {
		cout << "Ulogovani ste kao: "<< unosUsername << '\n';
	}
	else {
		cout << "\nUsername ili password nisu tačni!\n\n";
		login(); //Ukoliko su podaci pogrešni daje se mogućnost za ponovni unos.
	}
      }
};

void Privilegovani_korisnik::info(){
    cout<<"\nPovlašćenim korisnicima konverzija je veća za 10%."<<endl;
}

void AdminLogin(){  //Username i password administratora su jedinstveni i uvek isti. Novi administratori se ne mogu dodavati u okviru programa.
    string unosUsername;
    string unosPassword;
    string username = "admin";
    string password = "admin";
    cout << "Log in:\n-----------------------\nUnesite username:\n";
    cin >> unosUsername;

    cout << "\nUnesite password:\n";
    cin >> unosPassword;
    
    bool pronadjen = false;
    if(unosUsername == username && unosPassword == password){
        cout << "\nUlogovani ste kao: "<< username << '\n';
    }
    else{
        cout << "\nUsername ili password nisu tačni!\n\n";
        AdminLogin();
    }
}