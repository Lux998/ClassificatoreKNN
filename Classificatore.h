/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Classificatore.h
 * Author: lucap
 *
 * Created on 19 giugno 2019, 12.26
 */

#ifndef CLASSIFICATORE_H
#define CLASSIFICATORE_H
#include<string>
#include<vector>
#include "Documento.h"
class Classificatore
{
public:
    virtual std::string Classify(Documento d)=0;
//protected:
    double Distanza(int tipo,Documento d1,Documento d2);

};

#endif /* CLASSIFICATORE_H */

