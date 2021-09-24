#include "stack.h"

int main(){
    Stack<int> s; 
    cout << s << endl;

    for ( int i=0 ; i<10 ; i++){
        s.push(i);
    }

    cout <<"First Print"<<  s << endl;
   /* int a1 = s.pop();
    cout << "Valore estratto dalla pila = " << a1 << endl;
    
    
    cout << " SECONDA STAMPA " << s << endl;
    int b1 = s.pop();
    cout << "Valore estratto dalla pila = " << b1 << endl;
    
    
    s.push(11);
    cout << s << endl; 

    s.push(12);
    cout << s << endl; */

   
}