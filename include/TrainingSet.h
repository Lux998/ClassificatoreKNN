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
        std::vector<Documento*> getVecPolitica() const;
        std::vector<Documento*> getVecSport() const;
        std::vector<Documento*> getVecFinanza() const;
    private:
        void aggiungiDocFinanza(const std::string& file,const std::string& cat);
        void aggiungiDocSport(const std::string& file,const std::string& cat);
        void aggiungiDocPolitica(const std::string& file,const std::string& cat);
        std::vector<Documento*> vecPolitica;
        std::vector<Documento*> vecFinanza;
        std::vector<Documento*> vecSport;
};

#endif // TRAININGSET_H
