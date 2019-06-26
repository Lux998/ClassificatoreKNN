

#include <cstdlib>
#include "Documento.h"
#include "KNN.h"
#include "DistanzaCos.h"
using namespace std;

int main(int argc, char** argv)
{
    std::vector<std::string> ciao;
    //ofstream SaveFile("ciao.txt");
    //ofstream Test2("Riciao.txt");
    //SaveFile <<"prova";
    //Test2<<"Milan";
    //Test2.close();
    //SaveFile.close();
    Documento D1("ciao.txt");
    Documento D2("Riciao.txt");
    KNN* knn=new KNN();
    std::cout<<"TIPO:" <<knn->Classify(D1,"cos")<<std::endl;
    return 0;
}
