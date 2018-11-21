#ifndef KORISNICI_H
#define KORISNICI_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Korisnik {

public:
    string username;
    string password;
    string unosUsername;
    string unosPassword;

    void Registracija();
    void login();
};

class Privilegovani_korisnik: public Korisnik{
public:
    void info();
};
#endif /* KORISNICI_H */
