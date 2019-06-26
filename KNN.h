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
#include "include/Distanza.h"
#include"DistanzaFactory.h"
#include "TrainingSet.h"
#include<iostream>

class KNN : public Classificatore
{
public:
    KNN();
    KNN(const KNN& orig);
    virtual ~KNN();
    virtual std::string Classify(Documento D,const std::string& tipo);
    Distanza* dist;
private:
    TrainingSet TS;

    std::vector<Documento*> vecFinanza;
    std::vector<Documento*> vecSport ;
    std::vector<Documento*> vecPolitica ;
    std::vector<double> distanzeFinanza;
    std::vector<double> distanzeSport;
    std::vector<double> distanzePolitica;

};

#endif /* KNN_H */

