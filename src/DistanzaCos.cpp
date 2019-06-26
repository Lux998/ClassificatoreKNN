#include "DistanzaCos.h"

DistanzaCos::DistanzaCos()
{
    DEBUG_DistCos = false;
}

DistanzaCos::~DistanzaCos()
{
}

//Ottiene la distanza "similarità coseno" (1 -> completamente uguale, 0 -> completamente diverso)
double DistanzaCos::getDistanza(Documento d1,Documento d2)
{
    double numerator=0.0;
    double den1=0.0;
    double den2=0.0;
    double result;
    std::vector<std::string> words;
    /*
        Il contenuto dei due vettori è la frequenza dei termini, ossia il numero di
         volte in cui una certa parola ricorre all'interno del testo.
         Il k-simo elemento di ogni vettore conterrà dunque il numero di volte
         in cui la parola numerata con k ricorre nel testo,
         oppure 0 se non ricorre mai.
         A,B: vettori
         Formula:
                 similarity = cos(θ) = AB/||A||||B||
         k=1, n: dimensione vettore, sommatoria da k a n

         Σ A(k)B(k) / (ΣA(k)^2)^1/2 (ΣB(k)^2)^1/2

    */
    words=GetCommonKeys(d1.getBag(),d2.getBag());
    if(words.size()==0) //controllo se ci sono parole comuni
    {
          return 0;
    }
    for(unsigned int i=0; i<words.size(); ++i)
    {
        numerator+=d1.getBag().at(words[i])*d2.getBag().at(words[i]);

        den1+=d1.getBag().at(words[i])*d1.getBag().at(words[i]);

        den2+=d2.getBag().at(words[i])*d2.getBag().at(words[i]);
    }
    result =(numerator)/(sqrt(den1)*sqrt(den2));
    if(DEBUG_DistCos)
        std::cout<< std::endl<<"RISULTATO : "<<result<<std::endl;
    return result;
}

