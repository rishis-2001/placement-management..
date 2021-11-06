#include "Offer.h"

#ifndef INTERNSHIP_H
#define INTERNSHIP_H

class Internship:public Offer{
    private:
        int program_count;
    public:
        Internship(int _amount, string _location, string _type,int _program_count){
            amount = _amount;
            location = _location;
            type = _type;
            program_count = _program_count;
        }

        void set_program_count(int _program_count){
            program_count = _program_count;
        }

        friend ostream& operator<<(ostream& out, Internship& internship);
};

ostream& operator<<(ostream& out,Internship& internship){
    cout<<"\t|| INTERNSHIP DETAILS ||"<<endl;
    cout<<"Amount: "<<internship.amount<<endl;
    cout<<"Location: "<<internship.location<<endl;
    cout<<"Type: "<<internship.type<<endl;
    cout<<"Program Count: "<<internship.program_count<<endl;
}

#endif
