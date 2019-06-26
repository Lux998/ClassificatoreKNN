#include <cstdlib>
#include "Documento.h"
#include "KNN.h"
#include "DistanzaCos.h"
using namespace std;

int main(int argc, char** argv)
{
    TrainingSet* TS=new TrainingSet();
    Documento D1("prova.txt");
    KNN* knn=new KNN(*TS);
    std::cout<<"\nTIPO: " <<knn->Classify(D1,"cos")<<std::endl;
    return 0;
}
