#include "DistanzaEuclidea.h"

DistanzaEuclidea::DistanzaEuclidea()
{
    //ctor
}

DistanzaEuclidea::~DistanzaEuclidea()
{
    //dtor
}
double DistanzaEuclidea::getDistanza(Documento d1,Documento d2)
{
    double result=0;
    std::vector<std::string> words=this->GetCommonKeys(d1.getBag(),d2.getBag());
    for(unsigned int i =0;i<words.size();i++)
    {
        result+=(d1.getBag().at(words[i]) - d2.getBag().at(words[i]))*(d1.getBag().at(words[i]) - d2.getBag().at(words[i]));
    }
    return sqrt(result);
}
