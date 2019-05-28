#ifndef EVENEMENT_H_INCLUDED
#define EVENEMENT_H_INCLUDED
#include<iostream>
#include<string>
#include"timing.h"
#include<fstream>
namespace TIME{
    class Evtlj{
    private:
        Date date;
        std::string sujet;
    public:
        Evtlj(const Date &d, const std::string &s);
        const Date & getDate() const{
            return date;
        };
        const std::string & getDescription() const{
            return sujet;
        };
        void afficher()const;

    };
    class EvtljDur:public Evtlj{
    private:
        Horaire schedule;
        Duree duration;
        EvtljDur(const Date &d, const std::string &s,const Horaire &sc, const Duree &dur);
        void afficher() const;
    };

}


#endif // EVENEMENT_H_INCLUDED
