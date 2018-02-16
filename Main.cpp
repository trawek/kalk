#include <iostream>
#include "Add.cpp"
#include "Min.cpp"
#include "Mul.cpp"
#include "Div.cpp"




using namespace std;



int main()
{
    
	Add add;
	Min min;
	Mul mul;
	Div div;

    char op;
    float num1, num2;
      
    cout << "Wpisz operator działania + lub - lub * lub /: ";
    cin >> op;

    cout << "Wpisz dwie liczby na ktorych chcesz przeprowadzic dzialanie: ";
    cin >> num1 >> num2;

    switch(op)
    {
        case '+':
            cout << add.add(num1,num2);
            break;

        case '-':
            cout << min.min(num1,num2);
            break;

        case '*':
            cout << mul.mul(num1,num2);
            break;

        case '/':
            cout << div.div(num1,num2);
            break;

        default:
            
            cout << "Blad operator nie jest prawidlowy";
            break;
    }

    return 0;
}
