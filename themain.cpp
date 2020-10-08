
//EMAIL: binsaleh.aiman@gmail.com
#include <iostream>
#include "tickets.h"

using namespace std;

int main(){

int numOfTickets, num;
string firstName;
string lastName;
int seatType;
int i;

tickets *t[100];

    cout<< setfill('-')<< setw(50)<<"\n";
   
    cout <<" Number of Order? ";
    cin >> num;
    cout<< setfill('-')<< setw(50)<<"\n";
     
    for(int i=0;i<num;i++){ //open 'for' loop 1
        cout <<"Order " << i+1<<endl;
        cout <<"Premium seats                  -> Press 1"<< endl;
        cout <<"standard seats                 -> Press 2"<< endl;
        cout <<"Exit from System               -> Press 3"<< endl;
        cout<<"Seat Type : ";
        cin >>seatType; 
        
        //seat selection start
           if(seatType==1){
                cout<< setfill('-')<< setw(50)<<"\n";
                cout<<"PREMIUM TICKET!\n RM150 per tickets\n";
                cout<<"Insert customer first Name : ";
                cin >>firstName;
                cout<<endl;
                cout<<"Insert customer last name : ";
                cin>> lastName;
                cout<<endl;
                cout<<"Insert number of tickets : ";
                cin>>numOfTickets;
                cout<<endl;
                cout<< setfill('-')<< setw(50)<<"\n";
                t[i] = new premium (firstName,lastName,numOfTickets);
            continue;
           }


           else if (seatType==2){
                cout<< setfill('-')<< setw(50)<<"\n";
                cout<<"STANDARD TICKET!\n RM150 per tickets\n";
                cout<<"Insert customer first Name : ";
                cin >>firstName;
                cout<<endl;
                cout<<"Insert customer last name : ";
                cin>> lastName;
                cout<<endl;
                cout<<"Insert number of tickets : ";
                cin>>numOfTickets;
                cout<<endl;
                cout<< setfill('-')<< setw(50)<<"\n";
                t[i] = new standard (firstName,lastName,numOfTickets);
                continue;
           }


            else if(seatType == 3){
                system("cls");
                cout << "Have a nice day"<<endl;
                cout<<endl<<endl<<endl;
                
                return 0;
            }

            else {
            
            cout <<"wrong selection \n";
                continue;
              
           }//seat selection stop
        

    }//close 'for' loop 1

    cout <<"Re-display Order :  " <<endl; //pull from class tickets:displayOrder()
    
    for(i=0;i<num;i++){
   
            cout << "Order " <<i+1<<endl;
            t[i] -> displayOrder();
            cout<< endl;
    }
    cout<< endl;

return 0;
};
