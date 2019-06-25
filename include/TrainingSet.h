#ifndef TRAININGSET_H
#define TRAININGSET_H
#include "../Documento.h"

class TrainingSet
{
    public:
        TrainingSet();
        virtual ~TrainingSet();

    protected:
        void add(Documento* doc);
    private:
        void aggiungiDoc(const std::string& file,const std::string& cat);
};

#endif // TRAININGSET_H
