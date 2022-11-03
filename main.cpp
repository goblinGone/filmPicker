#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
#include <cwchar>
#include <ctime>
using namespace std;

vector<string>filmNames;

int main(){

    srand(time(NULL)); //proper random?

    using namespace std::this_thread;     // sleep_for, sleep_until
    using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
    using std::chrono::system_clock;

    string input;

    cout << R"(
	

     ______ _____ _      __  __       _____ _____ _____ _  ________ _____  
    |  ____|_   _| |    |  \/  |     |  __ \_   _/ ____| |/ /  ____|  __ \ 
    | |__    | | | |    | \  / |     | |__) || || |    | ' /| |__  | |__) |
    |  __|   | | | |    | |\/| |     |  ___/ | || |    |  < |  __| |  _  / 
    | |     _| |_| |____| |  | |     | |    _| || |____| . \| |____| | \ \ 
    |_|    |_____|______|_|  |_|     |_|   |_____\_____|_|\_\______|_|  \_\
    )" << endl;

    cout<<"         Film picker program, type one word names, when finished type * \n\n\n\n Enter a film name: \n";

    while(input != "*")
        {
            cin>>input;
            filmNames.push_back(input);
        }
    if(input == "*")
    {
        cout<<"Film list is : ";
        for(int i = 0 ; i<(filmNames.size() -1);i++)
            cout<<filmNames[i]<<", " ;
    }
    cout <<"\n \n"<<"And the winner is \n";
    for(int i=1 ; i<10 ; i++){
        cout<<"*"; //sleep_for(1s);
        
    }

    int max {size(filmNames)}; //upper limit of the randomiser
    string winner;
    winner = filmNames.at(rand()%max);
    cout<<"\n\n\n\n\n\n\n\n\n                                  !!  "<< winner <<"  !!\n\n\n\n\n\n\n\n\n ";



    return 0;

}