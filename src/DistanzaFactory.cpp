#include "DistanzaFactory.h"

DistanzaFactory::DistanzaFactory()
{
    //ctor
}

DistanzaFactory::~DistanzaFactory()
{
    //dtor
}
<<<<<<< HEAD

=======
>>>>>>> 4ae41b4bb56a6edfcfd7d1d2097451faa7767663
Distanza* DistanzaFactory::Set(const std::string& typeofDistance)
{
    Distanza* d=nullptr;
    if(typeofDistance=="cos")
    {
        d=new DistanzaCos();
    }
    return d;
}
