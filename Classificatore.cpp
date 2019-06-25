/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Classificatore.cpp
 * Author: lucap
 *
 * Created on 19 giugno 2019, 12.26
 */

#include "Classificatore.h"
#include "Documento.h"
#include<math.h>
//std::string Classificatore::Classify(Documento d)=0;

std::vector<std::string> Classificatore::GetCommonKeys(std::map<std::string,int> m1,std::map<std::string,int> m2) const
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
            }else
            iter2++;
        }
        iter1++;
    }
    return couples;

}

float Classificatore::Distanza(int tipo, Documento d1, Documento d2)
{
    float numerator=0;
    float den1=0;
    float den2=0;
    float result=0;
    std::cout<< "iniziamo :"<<std::endl;
    std::map<std::string,int>::iterator iter1;
    std::map<std::string,int>::iterator iter2;
    std::string word;
    switch(tipo)
    {
    case 0://cos
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
        // d1.stampa();
        try
        {
            for (iter1=d1.getBag().begin(); iter1!=d1.getBag().end(); iter1++)
            {
                for(iter2=d2.getBag().begin(); iter2!=d2.getBag().end(); iter2++)
                {
                    if(iter1->first.compare(iter2->first)==0)
                    {
                        word=iter1->first;
                        std::cout<<"PAROLA "<<word<<std::endl;
                        break;
                    }
                    else
                    {
                        std::cout<<"passo al prossimo"<<std::endl;
                    }
                }
                numerator+=d1.getBag().at(word)*d2.getBag().at(word);
                std::cout<<"NUMERATORE " << numerator<<std::endl;
                den1+=d1.getBag().at(word)*d1.getBag().at(word);
                std::cout<<"DEN1 " << den1<<std::endl;
                den2+=d1.getBag().at(word)*d2.getBag().at(word);
                std::cout<<"DEN2 " << den2 <<std::endl;
            }
        }
        catch(std::exception e)
        {
            std::cerr<<"CIAUZZZ";
        }
    }
    result=(numerator)/(sqrt(den1)*sqrt(den2));
    std::cout<< std::endl<<"RISULTATO : "<<result;
    return result;

}


