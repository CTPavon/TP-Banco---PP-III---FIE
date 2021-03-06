#include "Cliente.h"
#include "Cuenta.h"
#include "Movimiento.h"

#include <string.h>
#include <fstream>
#include <ctime>

using namespace std;

Movimiento::Movimiento(int nc, int dt, string ape, string nom, bool tc, bool tm, double m)
{
    setNroCuenta(nc);
    setDniTitular(dt);
    setTipoCuenta(tc);
    setTipoMovimiento(tm);
    setApellido(ape);
    setNombre(nom);
    setMonto (m);
}

void Movimiento::setNroCuenta(int nc)
{
    numeroCuenta = nc;
}

int Movimiento::getNroCuenta()
{
    return numeroCuenta;
}

void Movimiento::setDniTitular(int d)
{
    dniTitular = d;
}

int Movimiento::getDniTitular()
{
    return dniTitular;
}

void Movimiento::setTipoCuenta(bool tc)
{
    tipoCuenta = tc;
}

bool Movimiento::getTipoCuenta()
{
    return tipoCuenta;
}

void Movimiento::setTipoMovimiento(bool tm)
{
    tipoMovimiento = tm;
}

bool Movimiento::getTipoMovimiento()
{
    return tipoMovimiento;
}

void Movimiento::setMonto(double m)
{
    monto = m;
}

double Movimiento::getMonto()
{
    return monto;
}

void Movimiento::setNombre(string nom)
{
    const char *valorNombre = nom.data();
    int longitud = nom.size();
    longitud = longitud<25 ? longitud:24;
    strncpy(nombre,valorNombre,longitud);
    nombre[longitud] = '\0';
}

string Movimiento::getNombre()
{
    return nombre;
}

void Movimiento::setApellido(string ape)
{
    const char *valorApellido = ape.data();
    int longitud = ape.size();
    longitud = longitud<25 ? longitud:24;
    strncpy(apellido,valorApellido,longitud);
    apellido[longitud] = '\0';
}

string Movimiento::getApellido()
{
    return apellido;
}


Cuenta::Cuenta(int nc, int dt, bool b, double s, float i)
{
    setNroCuenta(nc);
    setDniTitular(dt);
    setTipo(b);
    setSaldo(s);
    setInteres(i);
}

void Cuenta::setNroCuenta(int nc)
{
    numero = nc;
}

int Cuenta::getNroCuenta()
{
    return numero;
}

void Cuenta::setDniTitular(int d)
{
    dniTitular = d;
}

int Cuenta::getDniTitular()
{
    return dniTitular;
}

void Cuenta::setTipo(bool b)
{
    tipo = b;
}

bool Cuenta::getTipo()
{
    return tipo;
}

void Cuenta::setSaldo(double s)
{
    if (s>-0.01 && s<0.01)
        s = 0;
    saldo = s;
}

double Cuenta::getSaldo()
{
    return saldo;
}

void Cuenta::setInteres(float i)
{
    interes = i;
}

float Cuenta::getInteres()
{
    return interes;
}

void Cuenta::setBorrado(bool b)
{
    if(b)
        borrado=true;
    else
        borrado=false;
}

bool Cuenta::getBorrado()
{
    return borrado;
}

void Cuenta::buscar(fstream &a)
{
    Cuenta reg;
    a.clear();
    a.seekg(0,ios::beg);
    a.read(reinterpret_cast<char *>(&reg),sizeof(Cuenta));
    while(!a.eof()&&reg.getNroCuenta()!=numero)
    {
        a.read(reinterpret_cast<char *>(&reg),sizeof(Cuenta));
    }
}


Cliente::Cliente(int d,string nom, string ape, string dir,int tel)
{
    setDni(d);
    setNombre(nom);
    setApellido(ape);
    setDireccion(dir);
    setTelefono(tel);
}

void Cliente::setDni(int d)
{
    dni = d;
}

int Cliente::getDni()
{
    return dni;
}

void Cliente::setNombre(string nom)
{
    const char *valorNombre = nom.data();
    int longitud = nom.size();
    longitud = longitud<25 ? longitud:24;
    strncpy(nombre,valorNombre,longitud);
    nombre[longitud] = '\0';
}

string Cliente::getNombre()
{
    return nombre;
}

void Cliente::setApellido(string ape)
{
    const char *valorApellido = ape.data();
    int longitud = ape.size();
    longitud = longitud<25 ? longitud:24;
    strncpy(apellido,valorApellido,longitud);
    apellido[longitud] = '\0';
}

string Cliente::getApellido()
{
    return apellido;
}

void Cliente::setDireccion(string dir)
{
    const char *valorDir = dir.data();
    int longitud = dir.size();
    longitud = longitud<40 ? longitud:39;
    strncpy(direccion,valorDir,longitud);
    direccion[longitud] = '\0';
}

string Cliente::getDireccion()
{
    return direccion;
}

void Cliente::setTelefono(int tel)
{
    telefono = tel;
}

int Cliente::getTelefono()
{
    return telefono;
}

void Cliente::setBorrado(bool b)
{
    if(b)
        borrado=true;
    else
        borrado=false;
}

bool Cliente::getBorrado()
{
    return borrado;
}

void Cliente::buscar(fstream &a)
{
    Cliente reg;
    a.clear();
    a.seekg(0,ios::beg);
    a.read(reinterpret_cast<char *>(&reg),sizeof(Cliente));
    while(!a.eof()&&reg.getDni()!=dni)
    {
        a.read(reinterpret_cast<char *>(&reg),sizeof(Cliente));
    }
}


