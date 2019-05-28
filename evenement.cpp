#include"evenement.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

TIME::Evtlj::Evtlj(const Date &d, const std::string &s):date(d),sujet(s){};
void TIME::Evtlj::afficher()const{
    cout<<"**Evt**"<<"\n"<<"Date : "<<"\nSujet : "<<sujet<<"\n";
}
TIME::EvtljDur::EvtljDur(const Date &d, const std::string &s,const Horaire &sc, const Duree &dur):Evtlj(d,s),schedule(sc),duration(dur){};
void TIME::EvtljDur::afficher()const{

}
