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
    dist=DistanzaFactory().Set(tipo);
    TrainingSet TS();

    std::vector<Documento*> vecFinanza = TS.getVecFinanza();
    std::vector<Documento*> vecSport = TS.getVecPolitica();
    std::vector<Documento*> vecPolitica = TS.getVecSport();

    std::vector<double> distanzeFinanza(vecFinanza.size());
    std::vector<double> distanzeSport(vecSport.size());
    std::vector<double> distanzePolitca(vecPolitica.size());

    for(int i = 0;i<vecFinanza.size();i++)
    {
        distanzeFinanza[i] = dist.getDistanza(doc,vecFinanza[i]);
    }

    for(int i = 0;i<vecSport.size();i++)
    {
        distanzeSport[i] = dist.getDistanza(doc,vecSport[i]);
    }

    for(int i = 0;i<vecPolitica.size();i++)
    {
        distanzePolitca[i] = dist.getDistanza(doc,vecPolitica[i]);
    }

    double mediaFinanza = 0;
    double mediaSport = 0;
    double mediaPolitica = 0;

    for(int i = 0;i<distanzeFinanza.size();i++)
    {
        mediaFinanza+=distanzeFinanza[i];
    }
    mediaFinanza = mediaFinanza/distanzeFinanza.size();

    for(int i = 0;i<distanzeSport.size();i++)
    {
        mediaSport+=distanzeSport[i];
    }
    mediaSport = mediaSport/distanzeSport.size();

    for(int i = 0;i<distanzePolitica.size();i++)
    {
        mediaPolitica+=distanzePolitca[i];
    }
    mediaPolitica = mediaPolitica/distanzePolitca.size();

    switch(std::min(std::min(mediaFinanza,mediaSport),mediaPolitica))
    case mediaFinanza:
        return "finanza";
    case mediaPolitica:
        return "politca";
    case mediaSport:
        return "sport";
}
