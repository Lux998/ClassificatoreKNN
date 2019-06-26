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
    KNN(TrainingSet& T);
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
    bool DEBUG_KNN;
};

#endif /* KNN_H */

