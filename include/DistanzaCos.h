#ifndef DISTANZACOS_H
#define DISTANZACOS_H
#include "Distanza.h"
#include<math.h>
class DistanzaCos : public Distanza
{
public:
    DistanzaCos();
    virtual ~DistanzaCos();
    double getDistanza(Documento d1,Documento d2);
protected:

private:

};

#endif // DISTANZACOS_H
