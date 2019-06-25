/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   KNN.cpp
 * Author: lucap
 *
 * Created on 19 giugno 2019, 12.40
 */

#include "KNN.h"
#include"DistanzaFactory.h"
KNN::KNN()
{
}

KNN::KNN(const KNN& orig)
{
}

KNN::~KNN()
{
}


std::string KNN::Classify(Documento doc,const std::string& tipo)
{
    Distanza* dist=DistanzaFactory.Set(tipo);
    // ciclo distanza su tutti i documenti

    // categoria definita sulla maggioranza dei documenti vicini

}
