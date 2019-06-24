/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Documento.h
 * Author: lucap
 *
 * Created on 14 giugno 2019, 12.06
 */

#ifndef DOCUMENTO_H
#define DOCUMENTO_H
#include <map>
#include <string>
#include <fstream>
#include <iostream>
class Documento
{
public:
    Documento(const std::string& FILE);
    Documento(const Documento& orig);
    virtual ~Documento();
    void stampa() const;
    std::map<std::string,int> getBag() const;
private:
    std::map<std::string,int> bag;
    std::string categoria;
};

#endif /* DOCUMENTO_H */

