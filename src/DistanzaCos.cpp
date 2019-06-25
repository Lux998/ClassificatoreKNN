#include "DistanzaCos.h"

DistanzaCos::DistanzaCos()
{
    //ctor
}

DistanzaCos::~DistanzaCos()
{
    //dtor
}

double DistanzaCos::getDistanza(Documento d1,Documento d2)
{
    double numerator=0.0;
    double den1=0.0;
    double den2=0.0;
    double result;
    std::cout<< "iniziamo :"<<std::endl;
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
        words=this->GetCommonKeys(d1.getBag(),d2.getBag());
        if(words.size()==0)
        {
          //  return 0;
        }
        for(unsigned int i=0; i<words.size(); ++i)
        {
            numerator+=d1.getBag().at(words[i])*d2.getBag().at(words[i]);
            std::cout<<"NUMERATORE " << numerator<<std::endl;
            den1+=d1.getBag().at(words[i])*d1.getBag().at(words[i]);
            std::cout<<"DEN1 " << den1<<std::endl;
            den2+=d2.getBag().at(words[i])*d2.getBag().at(words[i]);
            std::cout<<"DEN2 " << den2 <<std::endl;
        }


    result =(numerator)/(sqrt(den1)*sqrt(den2));
    //std::cout<< std::endl<<"RISULTATO : "<<result;
    return result;
}

std::vector<std::string> DistanzaCos::GetCommonKeys(std::map<std::string,int> m1,std::map<std::string,int> m2) const
{
    std::map<std::string,int>::iterator iter1=m1.begin();
    std::map<std::string,int>::iterator iter2=m2.begin();
    std::vector<std::string> couples;
    while(iter1!=m1.end())
    {
        iter2=m2.begin();
        while(iter2!=m2.end())
        {
            if(iter1->first.compare(iter2->first)==0)
            {
                couples.push_back(iter1->first);
                break;
            }
            else
                iter2++;
        }
        iter1++;
    }
    return couples;
}
