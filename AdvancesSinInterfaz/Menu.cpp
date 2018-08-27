//#include "Menu.h"
//
//Menu::Menu()
//{
//    //ctor
//}
//
//Menu::~Menu()
//{
//    //dtor
//}
//
//int Menu::imprimirMenu(){
//
//    int opc;
//
//    cout << "\n\nBienvenido a nuestro juego!\n\nSeleccione su opcion:\n\n1: Iniciar Juego.\n2: Salir\n";
//    cin >> opc;
//        if (std::cin.fail()) {
//            cout << "\n--- Valor invalido! Elegir valores 1 o 2\n\n";
//            std::cin.clear();
//            std::cin.ignore(256,'\n');
//            opc = -1;
//            return opc;
//        }
//        switch(opc){
//    case 1:
//        seleccionColor();
//        break;
//    case 2:
//        opc = 0;
//        break;
//    default:
//        opc = -1;
//        cout << "\n--- Valor invalido! Elegir valores 1 o 2\n\n";
//        break;
//        }
//
//    return opc;
//}
//
//void Menu::seleccionColor(){
//
//    int opc = 0;
//    bool colorAsignado = false;
//
//    do{
//        cout << "\n\nEliga su color para el jugador:\n1:Rojo\n2:Azul\n3:Verde\n4:Amarillo\n" ; //borrar \n y agregar el num de la persona <<
//        cin >> opc;
//        if (std::cin.fail()) {
//                cout << "\nValor invalido! Elegir valores 1,2,3 o 4.\n";
//                std::cin.clear();
//                std::cin.ignore(256,'\n');
//                opc = 0;
//        }
//        switch(opc){
//            case 1:
//                cout << "\n\nEl color del jugador sera: Rojo";
//                //personaje.color(rojo);
//                colorAsignado = true;
//                opc = -1;
//                break;
//            case 2:
//                cout << "\n\nEl color del jugador sera: Azul";
//                colorAsignado = true;
//                opc = -1;
//                break;
//            case 3:
//                cout << "\n\nEl color del jugador sera: Verde";
//                colorAsignado = true;
//                opc = -1;
//                break;
//            case 4:
//                cout << "\n\nEl color del jugador sera: Amarillo";
//                colorAsignado = true;
//                opc = -1;
//                break;
//            default:
//                opc = 0;
//                break;
//        }
//    }while(opc == 0);
//
//    if(opc == -1 && colorAsignado){
//        //Asignar color al segundo jugador
//    }
//
//}
//
