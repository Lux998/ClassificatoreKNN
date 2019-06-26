#include "TrainingSet.h"

//Aggiungo casi di test
TrainingSet::TrainingSet()
{
    DEBUG_TrainingSet = false;

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

TrainingSet::TrainingSet(const TrainingSet& orig)
{
   vecFinanza = orig.getVecFinanza();
   vecSport = orig.getVecSport();
   vecPolitica = orig.getVecPolitica();
}


TrainingSet::~TrainingSet()
{
    /*
        The simplest and most reliable way to deallocate a vector is to declare it on the stack and simply do nothing.
        C++ guarantees that the destructor of v will be called when the method executes. The destructor of std::vector will ensure any memory it allocated is freed.
        As long as the T type of the vector<T> has proper C++ deallocation semantics all will be well.
    */
}

void TrainingSet::aggiungiDoc(const std::string& file,const std::string& cat)
{
    if(cat == "finanza")
    {
        vecFinanza.push_back(new Documento(file,cat));
        if(DEBUG_TrainingSet)
            std::cout<<"Cat. aggiunta in finanza:"<<vecFinanza.back()->getCategoria()<<std::endl;
    }
    else if(cat == "sport")
    {
        vecSport.push_back(new Documento(file,cat));
        if(DEBUG_TrainingSet)
            std::cout<<"Cat. aggiunta in sport:"<<vecSport.back()->getCategoria()<<std::endl;
    }
    else if(cat == "politica")
    {
        vecPolitica.push_back(new Documento(file,cat));
        if(DEBUG_TrainingSet)
            std::cout<<"Cat. aggiunta in politica:"<<vecPolitica.back()->getCategoria()<<std::endl;
    }
    else
        throw std::invalid_argument("Categoria non valida");
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




