#ifndef DISTANZA_H
#define DISTANZA_H
#include "../Documento.h"
#include<map>
#include<vector>
#include<string>

class Distanza
{
public:
    virtual double getDistanza(Documento d1,Documento d2)=0;
    Distanza();
    virtual ~Distanza();

protected:
    std::vector<std::string> GetCommonKeys(std::map<std::string,int> m1,std::map<std::string,int> m2) const;
};
#endif // DISTANZA_H
