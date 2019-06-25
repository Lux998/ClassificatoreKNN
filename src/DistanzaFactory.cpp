#include "DistanzaFactory.h"

DistanzaFactory::DistanzaFactory()
{
    //ctor
}

DistanzaFactory::~DistanzaFactory()
{
    //dtor
}
Distanza* DistanzaFactory::Set(const std::string& typeofDistance)
{
    Distanza* d=nullptr;
    if(typeofDistance=="cos")
    {
        d=new DistanzaCos();
    }
    if(typeofDistance=="euc")
    {
        d=new DistanzaEuclidea();
    }
    return d;
}
