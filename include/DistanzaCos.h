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
        std::vector<std::string> GetCommonKeys(std::map<std::string,int> m1,std::map<std::string,int> m2) const ;

};

#endif // DISTANZACOS_H
