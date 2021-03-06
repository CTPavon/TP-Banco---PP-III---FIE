#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

#include<fstream>
#include<string>
using namespace std;
class Cliente
{
    public:
        Cliente(int =0, string ="", string ="", string ="", int = 0);
        void setDni(int);
        int getDni();
        void setNombre(string);
        string getNombre();
        void setApellido(string);
        string getApellido();
        void setDireccion(string);
        string getDireccion();
        void setTelefono(int);
        int getTelefono();
        void setBorrado(bool);
        bool getBorrado();
        void buscar(fstream &);

    private:
        int dni;
        bool borrado; //true si lo tengo que borrar
        char nombre[25];
        char apellido[25];
        char direccion[40];
        int telefono;
};



#endif // CLIENTE_H_INCLUDED
