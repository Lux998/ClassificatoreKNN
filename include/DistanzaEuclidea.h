#ifndef DISTANZAEUCLIDEA_H
#define DISTANZAEUCLIDEA_H
#include "Distanza.h"
#include<math.h>


class DistanzaEuclidea : public Distanza
{
public:
    DistanzaEuclidea();
    virtual ~DistanzaEuclidea();
    double getDistanza(Documento d1,Documento d2);
protected:

private:

};

#endif // DISTANZAEUCLIDEA_H
