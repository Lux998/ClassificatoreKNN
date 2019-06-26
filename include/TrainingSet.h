#ifndef TRAININGSET_H
#define TRAININGSET_H
#include "../Documento.h"
#include <vector>
#include <fstream>

class TrainingSet
{
public:
    TrainingSet();
    virtual ~TrainingSet();
    TrainingSet(const TrainingSet& orig);
    std::vector<Documento*> getVecPolitica() const;
    std::vector<Documento*> getVecSport() const;
    std::vector<Documento*> getVecFinanza() const;
private:
    void aggiungiDoc(const std::string& file,const std::string& cat);
    std::vector<Documento*> vecPolitica;
    std::vector<Documento*> vecFinanza;
    std::vector<Documento*> vecSport;
    bool DEBUG_TrainingSet;
};

#endif // TRAININGSET_H
