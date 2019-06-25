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


std::string KNN::Classify(Documento d,const std::string& tipo)
{
    Distanza* dist=DistanzaFactory.Set(tipo);
    TrainingSet TS();
    std::vector<Documento*> vec = TS.getVec();
    std::vector<double> distanze(vec.size());

    for(int i = 0;i<vec.size;i++)
    {
        //distanze[i] = distanza(doc,vec[i]);

    }
}
