            #include <iostream>
            #include <iomanip>
            using namespace std;

            void dibujarCuadrado(int lado) {
            for (int i = 0; i < lado; i++) {
            for (int j = 0; j < lado; j++) {




                cout << "* ";
                }
                cout << endl;
                }
                cout << endl;
                }

            void dibujarTrapecio(int base1, int base2, int altura) {
            int espacioInicial = (base1 - base2) / 2;
            for (int i = 0; i < altura; i++) {
            for (int j = 0; j < espacioInicial + i; j++) {
            cout << "  ";
        }
            for (int k = 0; k < base2 + 2 * (altura - i - 1); k++) {
            cout << "* ";
            }
            cout << endl;
            }
            cout << endl;
}

void dibujarTriangulo(int base) {
for (int i = 0; i < base; i++) {
for (int j = 0; j < base - i - 1; j++) {
            cout << "  ";
        }
        for (int k = 0; k < i * 2 + 1; k++) {
            cout << "* ";
        }
        cout << endl;
        }
        cout << endl;
        }

        void dibujarHexagono(int lado) {
        int altura = lado * 2 - 1;
        for (int i = 0; i < altura; i++) {
        for (int j = 0; j < abs(i - lado + 1); j++) {
                        cout << "  ";
                        }
                        for (int k = 0; k < lado * 2 - abs(i - lado + 1) * 2; k++) {
                            cout << "* ";
                        }
                            cout << endl;
                        }
                            cout << endl;
                        }

                void dibujarCirculo(int radio) {
                for (int i = -radio; i <= radio; i++) {
                for (int j = -radio; j <= radio; j++) {
                if (i * i + j * j <= radio * radio) {
                cout << "* ";
            } else {
                cout << "  ";
                    }
                        }
                        cout << endl;
                        }
                cout << endl;
}

void dibujarFigura(char opcion) {
    int lado, base, base1, base2, altura, radio;
    switch (opcion) {
        case 'a':
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            dibujarCuadrado(lado);
            break;
        case 'b':
            cout << "Ingrese la base mayor del trapecio: ";
            cin >> base1;
            cout << "Ingrese la base menor del trapecio: ";
            cin >> base2;
            cout << "Ingrese la altura del trapecio: ";
            cin >> altura;
            dibujarTrapecio(base1, base2, altura);
            break;
        case 'c':
            cout << "Ingrese la base del tri�ngulo: ";
            cin >> base;
            dibujarTriangulo(base);
            break;
        case 'd':
            cout << "Ingrese el lado del hex�gono: ";
            cin >> lado;
            dibujarHexagono(lado);
            break;
        case 'e':
            cout << "Ingrese el radio del c�rculo: ";
            cin >> radio;
            dibujarCirculo(radio);
            break;
        default:
            cout << "Opci�n inv�lida." << endl;
    }
}

int main() {
                char opcion;
                do {
        cout << "Men� de figuras:" << endl;
        cout << "a. Cuadrado" << endl;
        cout << "b. Trapecio" << endl;
        cout << "c. Tri�ngulo" << endl;
        cout << "d. Hex�gono" << endl;
        cout << "e. C�rculo" << endl;
        cout << "f. Combinar figuras" << endl;
        cout << "g. Borrar todo" << endl;
        cout << "h. Salir" << endl;
        cout << "Ingrese una opci�n: ";
        cin >> opcion;





        switch (opcion) {
                    case 'a': case 'b': case 'c': case 'd': case 'e':
                    dibujarFigura(opcion);
                    break;
                case 'f': {
                cout << "Ingrese la figura 1 (a-e): ";
                char figura1, figura2;
                cin >> figura1;
                cout << "Ingrese la figura 2 (a-e): ";
                cin >> figura2;
                dibujarFigura(figura1);
                dibujarFigura(figura2);
                break;
                }
                    case 'g':

                            cout << string(50, '\n');
                            break;
                            case 'h':
                            cout << "Saliendo del programa..." << endl;
                            break;
                            default:
                            cout << "Opci�n inv�lida. Intente de nuevo." << endl;
                            }
                            } while (opcion != 'h');





                return 0;
}
