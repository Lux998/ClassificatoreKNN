#ifndef TRAININGSET_H
#define TRAININGSET_H
#include "../Documento.h"

class TrainingSet
{
    public:
        TrainingSet();
        virtual ~TrainingSet();
        std::vector<Documento*> getVec() const;
    protected:
        void add(Documento* doc);
    private:
        void aggiungiDoc(const std::string& file,const std::string& cat);
        std::vector<Documento*> vec;

};

#endif // TRAININGSET_H
