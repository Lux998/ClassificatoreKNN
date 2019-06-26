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
    TS = TrainingSet();
    vecFinanza = TS.getVecFinanza();
    vecSport = TS.getVecSport();
    vecPolitica = TS.getVecPolitica();
    distanzeFinanza=std::vector<double>(vecFinanza.size());
    distanzeSport=std::vector<double>(vecSport.size());
    distanzePolitica=std::vector<double>(vecPolitica.size());
}

KNN::KNN(const KNN& orig)
{
}

KNN::~KNN()
{
}


std::string KNN::Classify(Documento doc,const std::string& tipo)
{
    double mediaMin;
    dist=DistanzaFactory().Set(tipo);




    for(unsigned int i = 0; i<vecFinanza.size(); i++)
    {
        distanzeFinanza[i] = dist->getDistanza(doc,*vecFinanza[i]);
        std::cout<<"DISTANZA FINANZA "<<distanzeFinanza[i]<< std::endl;
    }

    for(unsigned int i = 0; i<vecSport.size(); i++)
    {
        distanzeSport[i] = dist->getDistanza(doc,*vecSport[i]);
        std::cout<<"DISTANZA SPORT "<<distanzeSport[i]<< std::endl;
    }

    for(unsigned int i = 0; i<vecPolitica.size(); i++)
    {
        distanzePolitica[i] = dist->getDistanza(doc,*vecPolitica[i]);
        std::cout<<"DISTANZA POL "<<distanzePolitica[i]<< std::endl;
    }

    double mediaFinanza = 0;
    double mediaSport = 0;
    double mediaPolitica = 0;

    for(unsigned int i = 0; i<distanzeFinanza.size(); i++)
    {
        mediaFinanza+=distanzeFinanza[i];
    }
    mediaFinanza = mediaFinanza/distanzeFinanza.size();

    for(unsigned int i = 0; i<distanzeSport.size(); i++)
    {
        mediaSport+=distanzeSport[i];
    }
    mediaSport = mediaSport/distanzeSport.size();

    for(unsigned int i = 0; i<distanzePolitica.size(); i++)
    {
        mediaPolitica+=distanzePolitica[i];
    }
    mediaPolitica = mediaPolitica/distanzePolitica.size();
    mediaMin=std::max(std::max(mediaFinanza,mediaPolitica),mediaSport);
    std::cout<<"MEDIA F: "<<mediaFinanza<<" MEDIA P: "<<mediaPolitica<<"MEDIA S: "<< mediaSport<<std::endl;
    if(mediaMin==mediaFinanza)
        return "finanza";
    else if(mediaMin==mediaSport)
        return "sport";
    else if(mediaMin==mediaPolitica)
        return "politica";
        else
            return "errore errore";
}
