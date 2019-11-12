#include <iostream>
using namespace std;

class CFuture{
public:
    struct fifth_dimension{ //time?
        string name;
        int remaining_life_span; //ask user life span
        int alive;
        int year_in_future;
    };
    void decide_the_future();

};

class CPresent{
public:
    struct fifth_dimension{

    };
    void biologicalClock(CFuture::fifth_dimension dimension);
};

class CTimeMachine{
private:

public:
    void API();
};

void CTimeMachine::API() {
    CPresent present, *presentPointer;
    CFuture future, *futurePointer; //the number of future objects depends on how many are alive
    presentPointer = &present;
    futurePointer = &future;
    //pass the *present into future

}

void CFuture::decide_the_future()
{
    fifth_dimension dimension;

    cout << "What is Luke's lifespan" << endl;
    cin >> dimension.remaining_life_span;
    cout << "what is the future year" << endl;
    cin >> dimension.year_in_future;
    cout << "Does Darth Vader kill or spare Luke (0/1)" << endl;
    cin >> dimension.alive;
}

void CPresent::biologicalClock(CFuture::fifth_dimension dimension)
{
    for (int i = 0; i < dimension.remaining_life_span; i++)
    {
        // print
    }
}

int main() {
    CTimeMachine timeMachine;
    timeMachine.API();
    return 0;
}