#include "Documento.h"

//Costruttore con categoria ignota
Documento::Documento(const std::string& FILE)
{
    std::string word;
    std::ifstream is(FILE.c_str());
    categoria="";
    if(!is.good())
    {
        throw std::string("File no bueno");
    }
    //Costruisco la bag of words da file
    while(is>>word)
    {
        bag[word]++;
    }
}

//Costruttore con categoria conosciuta, da parametro
Documento::Documento(const std::string& FILE, const std::string& cat)
{
    std::string word;
    std::ifstream is(FILE.c_str());
    categoria=cat;
    if(!is.good())
    {
        throw std::string("File no bueno");
    }
    while(is>>word)
    {
        bag[word]++;
    }
}


Documento::Documento(const Documento& orig)
{
   bag=orig.getBag();
}

Documento::~Documento()
{
}

void Documento::stampa() const
{
    std::map<std::string,int>::const_iterator iter;

    for(iter=bag.begin(); iter!=bag.end(); ++iter)
    {
        std::cout<<iter->first<<" --> "<<iter->second<<std::endl;
    }
}

std::map<std::string, int> Documento::getBag() const
{
    return this->bag;
}
void Documento::setCategoria(const std::string& cat)
{
    categoria=cat;
}

std::string Documento::getCategoria() const
{
    return categoria;
}
