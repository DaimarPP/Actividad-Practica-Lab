#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string nombre;
    string cedula;
    string correo;
    int x = 0;
    int data;

    ifstream input("../data/archivo.txt");
     if(!input.is_open()){
       cout << "No se abrio el archivo" << endl;
       return 0;
     }
     if (input.is_open()){
       cout << "Se abrio el archivo" << endl;
     }
     

    while(input >> data){
        cout << data << endl;
    }

    ofstream output("../data/archivo.txt", ios::out);
    cout << "cuantos usuarios quiere agregar: " << endl;
    cin >> x;
    
    
    for(int i = 0; i < x; i++){
        
        cout << "ingrese el nombre: " << endl;
        cin >> nombre;
        cout << "ingrese la cedula: " << endl;
        cin >> cedula;
        cout << "ingrese el correo: " << endl;
        cin >> correo;
        output << nombre << " " << cedula << " " << correo << " " << endl;
    

        cout << "se guardo exitosamente" << endl;

        cout << "Mi nombre es " << nombre << ", mi cedula es " << cedula << " y mi correo es " << correo << endl;
    }

    input.close();
    output.close();


    return 0;
}