
#include "Documento.h"

Documento::Documento(const std::string& FILE)
{
    std::string word;
    std::ifstream is(FILE.c_str());
    categoria="";
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
    std::map<std::string,int>::iterator iter;
    for(iter=orig.getBag().begin(); iter!=orig.getBag().end(); ++iter)
    {
        bag[iter->first]==orig.getBag()[iter->first];
    }
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
