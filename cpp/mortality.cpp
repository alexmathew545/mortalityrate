#include <iostream>
using namespace std;

class Virus
{
public:

    virtual float GetMortalityRate()=0;

};
class Covid :public Virus
{
public:
    float mRate, fcase, fdeath;
    float GetMortalityRate()
    {
        cout << "Enter number of COVID cases : ";
        cin >> fcase;
        cout << "Enter number of COVID deaths : ";
        cin >> fdeath;
        mRate = (fdeath / fcase) * 100;
        cout << "Mortality Rate for COVID is : " << mRate <<" %";
        cout << endl;
        return mRate;
    }
};
class Hiv :public Virus
{
public:
    float mRate, fcase, fdeath;
    float GetMortalityRate()
    {
        cout << "Enter number of HIV cases : ";
        cin >> fcase;
        cout << "Enter number of HIV deaths : ";
        cin >> fdeath;
        mRate = (fdeath / fcase) * 100;
        cout << "Mortality Rate for COVID is : " << mRate << " %";
        cout << endl;
        return mRate;
    }
};
class BirdFlue :public Virus
{
public:
    float mRate, fcase, fdeath;
    float GetMortalityRate()
    {
        cout << "Enter number of BirdFlue cases : ";
        cin >> fcase;
        cout << "Enter number of BirdFlue deaths : ";
        cin >> fdeath;
        mRate = (fdeath / fcase) * 100;
        cout << "Mortality Rate for BirdFlue is : " << mRate << " %";
        cout << endl;
        return mRate;
    }
};

int main()
{
    int i;
    Covid obj1;
    Hiv obj2;
    BirdFlue obj3;
    do{
    cout << "1)COVID virus  " << endl;
    cout << "2)HIV virus  " << endl;
    cout << "3)BirdFlue virus  " << endl;
    cout << "4)exit  " << endl;
    cout<<"enter choice :-";
    cin >> i;
    if (i == 1)
        obj1.GetMortalityRate();
    else if (i == 2)
        obj2.GetMortalityRate();
    else if (i == 3)
        obj3.GetMortalityRate();
        else
        cout<<"thanks";
    }
    while(i!=4);
}