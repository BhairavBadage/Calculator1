#include <iostream>
#include <cmath>
using namespace std;

class simplecalc{
    int a, b;
    public:
        void getDatasimple()
        {
            cout<<"a :"<<endl;
            cin>>a;
            cout<<"b :"<<endl;
            cin>>b;
        }

        void simple_calculations(){
            cout<<"The value of a + b is: "<<a + b<<endl;
            cout<<"The value of a - b is: "<<a - b<<endl;
            cout<<"The value of a * b is: "<<a * b<<endl;
            cout<<"The value of a / b is: "<<a / b<<endl;
        }
};

class scientificcalc{
    int a, b;

    public:
        void getDatascientific()
        {
            cout << "a :"<<endl;
            cin >> a;
            cout << "b :"<< endl;
            cin >> b;
        }

        void scientific_calculations()
        { 
            cout << "The value of cos(a) is: " << cos(a) << endl;
            cout << "The value of sin(a) is: " << sin(a) << endl;
            cout << "The value of exp(a) is: " << exp(a) << endl;
            cout << "The value of tan(a) is: " << tan(a) << endl;
        }
};

class hybridcalc : public simplecalc, public scientificcalc{
    
};
int main()
{

    hybridcalc calc;
    calc.getDatasimple();
    calc.simple_calculations();
    calc.getDatascientific();
    calc.scientific_calculations();
    
    return 0;
}
