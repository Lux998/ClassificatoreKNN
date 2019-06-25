#include "TrainingSet.h"


std::vector<Documento*> vec;

TrainingSet::TrainingSet()
{
    this->aggiungiDoc("ArticoloPolitica1.txt","politica");
    this->aggiungiDoc("ArticoloPolitica2.txt","politica");
    this->aggiungiDoc("ArticoloPolitica3.txt","politica");
    this->aggiungiDoc("ArticoloSport1.txt","sport");
    this->aggiungiDoc("ArticoloSport2.txt","sport");
    this->aggiungiDoc("ArticoloSport3.txt","sport");
    this->aggiungiDoc("ArticoloFinanza1.txt","finanza");
    this->aggiungiDoc("ArticoloFinanza2.txt","finanza");
    this->aggiungiDoc("ArticoloFinanza3.txt","finanza");

}

TrainingSet::~TrainingSet()
{

}

void TrainingSet::add(Documento* doc)
{
    vec.push_back(doc);
}

void TrainingSet::aggiungiDoc(const std::string& file,const std::string& cat)
{
    add(new Documento(file,cat));
}

std::vector<Documento*> getVec() const
{
    return vec;
}



