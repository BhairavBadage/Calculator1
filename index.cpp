#include <iostream>
#include <cmath>
using namespace std;

class Results {
    public:
    float result;
};

class simplecalc{
    protected:
    float a, b, result;
    public:
       simplecalc(){};
    
       simplecalc(float a, float b):a(a),b(b){};

        void simple_calculations(){
            char c;
            cout<<"Enter the operand :"<<endl;
            cin>>c;
            switch (c){
                case '+':
                    result = a + b;
                    break;
                case '-':
                    result = a - b;
                    break;
                case '/':
                    result = a / b;
                    break;
                case '*':
                    result = a * b;
                    break;
                case '%':
                    result = a % b;
                    break;
            }
       
       cout<<result<<endl;
       }
};

class scientificcalc{
    protected:
    float a, result;

    public:
        scientificcalc(){};
        
        scientificcalc(float a):a(a){};

        void scientific_calculations(){ 
            cout<<"1. sin"<<endl
                <<"2. cos"<<endl
                <<"3. tan"<<endl 
                <<"4. log"<<endl;
            int n;
            cin>>n;
            switch (n){
                case 1:
                    result = sin(a);
                    break;
                case 2:
                    result = cos(a);
                    break;
                case 3:
                    result = tan(a);
                    break;
                case 4:
                    result = log(a);
                    break;
            }
       cout<<result<<endl;
       }
};

class hybridcalc : public simplecalc, public scientificcalc{
    public:
    hybridcalc(){};
    
    hybridcalc(float a, float b): simplecalc (a, b){};
    
    hybridcalc(float a): scientificcalc (a){};
};
int main()
{
    float a, b;
    cin>>a>>b;
    
    hybridcalc x(a, b);
    hybridcalc y(a);
    
    x.simple_calculations();

    y.scientific_calculations();
    
    return 0;
}
