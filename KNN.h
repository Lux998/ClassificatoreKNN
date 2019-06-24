/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   KNN.h
 * Author: lucap
 *
 * Created on 19 giugno 2019, 12.40
 */

#ifndef KNN_H
#define KNN_H
#include<string>
#include "Classificatore.h"
class KNN : public Classificatore
{
public:
    KNN();
    KNN(const KNN& orig);
    virtual ~KNN();
    virtual std::string Classify(Documento D);
private:

};

#endif /* KNN_H */

