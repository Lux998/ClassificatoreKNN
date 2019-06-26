#ifndef CLASSIFICATORE_H
#define CLASSIFICATORE_H
#include<string>
#include<vector>
#include "Documento.h"
#include<math.h>

class Classificatore
{
public:
    virtual std::string Classify(Documento d,const std::string& tipo)=0;
};

#endif /* CLASSIFICATORE_H */

