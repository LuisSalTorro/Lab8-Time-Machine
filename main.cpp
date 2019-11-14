#include <iostream>
#include <vector>
using namespace std;

class CFuture{
public:
    struct fifth_dimension{ //time?
        string name;
        int remaining_life_span; //ask user life span
        int alive;
        int year_in_future;
    };
    void decide_the_future(vector<fifth_dimension> *dimension);
};

class CPresent{
private:
    int currentYear = 2019;
public:
    void biologicalClock(vector<CFuture::fifth_dimension> *dimension);
};

class CTimeMachine{
public:
    void API();
};

void CTimeMachine::API()
{
    CPresent present;
    CFuture future;

    int input;
    cout << "how many time travelers are there" << endl;
    cin >> input;

    vector<CFuture::fifth_dimension> dimension, *dimensionPointer;
    dimensionPointer = &dimension;

    dimensionPointer->reserve(input);

    future.decide_the_future(dimensionPointer);
    present.biologicalClock(dimensionPointer);
}

void CFuture::decide_the_future(vector<fifth_dimension> *dimension)
{
    for (int i = 0; i < dimension->capacity(); i++)
    {
        dimension->push_back(fifth_dimension());

        cout << "What is the time travellers name" << endl;
        cin >> dimension->at(i).name;
        cout << "What is " << dimension->at(i).name << "'s lifespan" << endl;
        cin >> dimension->at(i).remaining_life_span;
        cout << "what is the future year" << endl;
        cin >> dimension->at(i).year_in_future;
        cout << "Does Darth Vader kill or spare " << dimension->at(i).name << " (0/1)" << endl;
        cin >> dimension->at(i).alive;
    }
}

void CPresent::biologicalClock(vector<CFuture::fifth_dimension> *dimension)
{
    while (dimension->size() > 0)
    {
        cout << currentYear << endl;
        for (int i = 0; i < dimension->size(); i++)
        {
            if ((dimension->at(i).year_in_future == currentYear) && dimension->at(i).alive == 0)
            {
                cout << "Darth Vader decided to kill " << dimension->at(i).name << " with "
                     << dimension->at(i).remaining_life_span << " years left" << endl;
                dimension->erase(dimension->begin()+i);
            }
            else if(dimension->at(i).remaining_life_span == 0)
            {
                cout << dimension->at(i).name << " has died peacefully in " << currentYear << endl;
                dimension->erase(dimension->begin()+i);
            }
            else
            {
                cout << "Alive: " << dimension->at(i).name << " has "
                     << dimension->at(i).remaining_life_span << " years left" << endl;
                dimension->at(i).remaining_life_span -= 1;
            }
        }
        currentYear += 1;
        cout << endl;
    }
}

int main() {
    CTimeMachine timeMachine;
    timeMachine.API();
    return 0;
}