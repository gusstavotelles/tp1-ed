#ifndef NAVE_HPP
#define NAVE_HPP

class Nave 
{
    public:
        Nave();
        Nave(int codNave);
        int GetCodigo();
        void SetCodigo(int codNave);
        void Combate(); 
        void Avaria(); 
        void Consertada(); 
    private:
        int codigo;
};
#endif