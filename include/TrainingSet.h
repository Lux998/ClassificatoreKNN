#ifndef TRAININGSET_H
#define TRAININGSET_H
#include "../Documento.h"
#include <vector>
#include <fstream>
class TrainingSet
{
<<<<<<< HEAD
    public:
        TrainingSet();
        virtual ~TrainingSet();
        std::vector<Documento*> getVec() const;
    protected:
        void add(Documento* doc);
    private:
        void aggiungiDoc(const std::string& file,const std::string& cat);
        std::vector<Documento*> vec;

=======
public:
    TrainingSet();
    virtual ~TrainingSet();

protected:
    void add(Documento* doc);
private:
    void aggiungiDoc(const std::string& file,const std::string& cat);
>>>>>>> 4ae41b4bb56a6edfcfd7d1d2097451faa7767663
};

#endif // TRAININGSET_H
