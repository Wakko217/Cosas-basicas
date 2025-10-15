#include <iostream>
using namespace std;

int main() {
    int opcion, num, hasta;
    
    do {
        cout << "\tGENERADOR DE TABLAS" << endl;
        cout << "1. Una tabla especifica" << endl;
        cout << "2. Varias tablas" << endl;
        cout << "3. Tabla personalizada" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        
        switch(opcion) {
            case 1:
                cout << "Numero para la tabla: ";
                cin >> num;
                for (int i = 0; i <= 10; i++) {
                    cout << num << " x " << i << " = " << (num * i) << endl;
                }
                break;
                
            case 2:
                cout<<"\nDesde que tabla le gustaria empezar: ";cin>>num;
                cout<<"Hasta que tabla le gustaria llegar: ";cin>>hasta;
                for (int tabla=num; tabla<=hasta; tabla++){
                    cout<<"\t\nTabla del "<<tabla<<endl;
                    for (int i=0; i<=10; i++){
                        cout<<tabla<<" x "<<i<<"= "<<(tabla*i)<<endl;
                    }
                }
                break;

            case 3:
                cout << "Numero para la tabla: ";cin>>num;
                cout<<"Hasta que numero le gustaria multiplicarla: ";cin>>hasta;
                for(int i=0; i<=hasta; i++){
                    cout<<num<<" x "<<i<<" = "<<(num*i)<<endl;
                }
                break;

            case 0:
                cout << "¡Hasta luego!" << endl;
                break;

                 default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
        }
        
        if (opcion != 0) {
            cout << "\nPresione Enter para continuar...";
            cin.ignore();
            cin.get();
        }
        
    } while (opcion != 0);
    
    return 0;
}
