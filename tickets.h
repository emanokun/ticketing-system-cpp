//NAME: MOHAMMAD AIMAN BIN SALEH
//ID : CS0107001
//EMAIL: binsaleh.aiman@gmail.com
#include <string>
#include <iostream>
#include <math.h>
#include <iomanip>

#ifndef TICKETS_H 
#define TICKETS_H


using namespace std;
/*-------------------------------------------------------------------------------------------*/
/*----------------------------------------MAIN ---------------------------------------------------*/
/*---------------------------------------------CLASS----------------------------------------------*/
//main class 

class tickets{

public:

    tickets(string FN, string LN, int NOT){ //class constructor
        firstname    = FN;
        lastname     = LN;
        numOfTickets = NOT;
        //seatType     = ST;

    }

/*-------------------------------------------------------------------------------------------*/

    void displayOrder(){

        calculatetotal();
       
            cout << "Name : " << lastname << " , " <<firstname << " : " <<numOfTickets << " tickets to the Prog 2: The musical \n";
            cout << "Seats : " << seatType <<endl;
            cout << "Total : " <<fixed<<setprecision(2)<< price <<endl;
    

    };
/*-------------------------------------------------------------------------------------------*/
protected:
    string firstname;
    string lastname;
    string seatType;    
    int numOfTickets;
    float price;

    virtual void calculatetotal() = 0; //virtual 

};

/*-------------------------------------------------------------------------------------------*/
/*---------------------------------------CLASSS----------------------------------------------------*/
/*---------------------------------------------PREMIUM----------------------------------------------*/
/*-------------------------------------------------------------------------------------------*/

//class premium
class premium : public tickets{ 

public:
        premium(string FN, string LN, int NOT):tickets(FN,LN,NOT){
            seatType = "Premium";
        }
        
       
      
/*-------------------------------------------------------------------------------------------*/
private:
        void calculatetotal(){
            price = numOfTickets * 150.0 * 150/100;  
            
  }

};


/*-------------------------------------------------------------------------------------------*/
/*----------------------------------CLASS ---------------------------------------------------------*/
/*----------------------------------------STANDARD---------------------------------------------------*/


//class standard 
class standard : public tickets{

public: 
    standard(string FN, string LN, int NOT):tickets(FN,LN,NOT){
        seatType = "Standard";
    }
   
/*-------------------------------------------------------------------------------------------*/
private:
    void calculatetotal(){
        price = numOfTickets * 100.0 * 110/100;
        
    
    }

};
#endif
/*-------------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------*/