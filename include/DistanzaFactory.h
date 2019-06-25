#ifndef DISTANZAFACTORY_H
#define DISTANZAFACTORY_H
#include<string>
#include"Distanza.h"
#include"DistanzaCos.h"
#include"DistanzaEuclidea.h"
class DistanzaFactory
{
public:
    DistanzaFactory();
    virtual ~DistanzaFactory();
    static Distanza* Set(const std::string& typeofDistance);
protected:

private:
};

#endif // DISTANZAFACTORY_H
