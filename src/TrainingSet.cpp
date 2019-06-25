#include "TrainingSet.h"

std::vector<Documento*> vecPolitica;
std::vector<Documento*> vecSport;
std::vector<Documento*> vecFinanza;


TrainingSet::TrainingSet()
{
    this->aggiungiDocPolitica("ArticoloPolitica1.txt","politica");
    this->aggiungiDocPolitica("ArticoloPolitica2.txt","politica");
    this->aggiungiDocPolitica("ArticoloPolitica3.txt","politica");

    this->aggiungiDocSport("ArticoloSport1.txt","sport");
    this->aggiungiDocSport("ArticoloSport2.txt","sport");
    this->aggiungiDocSport("ArticoloSport3.txt","sport");

    this->aggiungiDocFinanza("ArticoloFinanza1.txt","finanza");
    this->aggiungiDocFinanza("ArticoloFinanza2.txt","finanza");
    this->aggiungiDocFinanza("ArticoloFinanza3.txt","finanza");

}

TrainingSet::~TrainingSet()
{

}

void TrainingSet::aggiungiDocPolitica(const std::string& file,const std::string& cat)
{
    vecPolitica.push_back(new Documento(file,cat));
}

void TrainingSet::aggiungiDocSport(const std::string& file,const std::string& cat)
{
    vecSport.push_back(new Documento(file,cat));
}

void TrainingSet::aggiungiDocFinanza(const std::string& file,const std::string& cat)
{
    vecFinanza.push_back(new Documento(file,cat));
}

std::vector<Documento*> TrainingSet::getVecPolitica() const
{
    return vecPolitica;
}

std::vector<Documento*> TrainingSet::getVecSport() const
{
    return vecSport;
}

std::vector<Documento*> TrainingSet::getVecFinanza() const
{
    return vecFinanza;
}




