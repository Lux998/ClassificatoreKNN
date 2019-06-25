#include "TrainingSet.h"
#include <vector>
#include <fstream>

std::vector<Documento*> vec;

TrainingSet::TrainingSet()
{
    this->aggiungiDoc("ArticoloPolitica1.txt","politica");
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



