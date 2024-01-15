#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int opcionPrincipal, opcionSubMenu1, opcionSubMenu2;
    float lado, radio, altura, base, area, volumen;

    do {
        cout << "==========================================" << endl;
        cout << "         Almacen de Areas y Volumenes      " << endl;
        cout << "==========================================" << endl;
        cout << "1. Calcular Area" << endl;
        cout << "2. Calcular Volumen" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcionPrincipal;

        switch (opcionPrincipal) {
            case 1:
                do {
                    cout << "==========================================" << endl;
                    cout << "         Submenu 1 - Calcular Area        " << endl;
                    cout << "==========================================" << endl;
                    cout << "1. Area de un Cuadrado" << endl;
                    cout << "2. Area de un Circulo" << endl;
                    cout << "3. Area de un Triangulo" << endl;
                    cout << "4. Area de un Rectangulo" << endl;
                    cout << "5. Area de un Rombo" << endl;
                    cout << "6. Area de un Trapecio" << endl;
                    cout << "7. Area de un Pentagono Regular" << endl;
                    cout << "8. Area de un Hexagono Regular" << endl;
                    cout << "9. Area de un Circulo Sector" << endl;
                    cout << "10. Area de un Paralelogramo" << endl;
                    cout << "11. Volver Atras" << endl;
                    cout << "Seleccione una opcion: ";
                    cin >> opcionSubMenu1;

                    switch (opcionSubMenu1) {
                        case 1:
                            cout << "Ingrese el lado del cuadrado: ";
                            cin >> lado;
                            area = lado * lado;
                            cout << "El area del cuadrado es: " << area << " unidades cuadradas" << endl;
                            break;

                        case 2:
                            cout << "Ingrese el radio del circulo: ";
                            cin >> radio;
                            area = M_PI * pow(radio, 2);
                            cout << "El area del circulo es: " << area << " unidades cuadradas" << endl;
                            break;

                        case 3:
                            cout << "Ingrese la base del triángulo: ";
                            cin >> base;
                            cout << "Ingrese la altura del triángulo: ";
                            cin >> altura;
                            area = 0.5 * base * altura;
                            cout << "El area del triángulo es: " << area << " unidades cuadradas" << endl;
                            break;

                        // Agrega más casos para otras fórmulas de áreas aquí...

                        case 11:
                            break;

                        default:
                            cout << "Opcion invalida en Submenu 1" << endl;
                            break;
                    }
                } while (opcionSubMenu1 != 11);
                break;

            case 2:
                do {
                    cout << "==========================================" << endl;
                    cout << "         Submenu 2 - Calcular Volumen     " << endl;
                    cout << "==========================================" << endl;
                    cout << "1. Volumen de un Cubo" << endl;
                    cout << "2. Volumen de un Cilindro" << endl;
                    cout << "3. Volumen de una Esfera" << endl;
                    cout << "4. Volumen de un Cono" << endl;
                    cout << "5. Volumen de un Prisma Rectangular" << endl;
                    cout << "6. Volumen de una Piramide Cuadrangular" << endl;
                    cout << "7. Volumen de un Cilindro Hueco" << endl;
                    cout << "8. Volumen de una Esfera Hueca" << endl;
                    cout << "9. Volumen de una Piramide Triangular" << endl;
                    cout << "10. Volumen de un Cono Truncado" << endl;
                    cout << "11. Volver Atras" << endl;
                    cout << "Seleccione una opcion: ";
                    cin >> opcionSubMenu2;

                    switch (opcionSubMenu2) {
                        case 1:
                            cout << "Ingrese la longitud de la arista del cubo: ";
                            cin >> lado;
                            volumen = pow(lado, 3);
                            cout << "El volumen del cubo es: " << volumen << " unidades cubicas" << endl;
                            break;

                        case 2:
                            cout << "Ingrese el radio del cilindro: ";
                            cin >> radio;
                            cout << "Ingrese la altura del cilindro: ";
                            cin >> altura;
                            volumen = M_PI * pow(radio, 2) * altura;
                            cout << "El volumen del cilindro es: " << volumen << " unidades cubicas" << endl;
                            break;

                        case 3:
                            cout << "Ingrese el radio de la esfera: ";
                            cin >> radio;
                            volumen = (4.0 / 3.0) * M_PI * pow(radio, 3);
                            cout << "El volumen de la esfera es: " << volumen << " unidades cubicas" << endl;
                            break;

                        case 4:
                            // Sin la declaración de nuevas variables aquí
                            cout << "Ingrese el radio de la base del cono: ";
                            cin >> radio;
                            cout << "Ingrese la altura del cono: ";
                            cin >> altura;
                            volumen = (1.0/3) * M_PI * pow(radio, 2) * altura;
                            cout << "El volumen del cono es: " << volumen << endl;
                            break;

                        case 5:
                            double longitud, ancho, altura, volumen;

                            cout << "Ingrese la longitud de la base del prisma: ";
                            cin >> longitud;

                            cout << "Ingrese el ancho de la base del prisma: ";
                            cin >> ancho;

                            cout << "Ingrese la altura del prisma: ";
                            cin >> altura;

                            volumen = longitud * ancho * altura;

                            cout << "El volumen del prisma rectangular es: " << volumen << endl;
                            break;

                        // Agrega más casos para otras fórmulas de volúmenes aquí...

                        case 11:
                            break;

                        default:
                            cout << "Opcion invalida en Submenu 2" << endl;
                            break;
                    }
                } while (opcionSubMenu2 != 11);
                break;

            case 3:
                cout << "Saliendo del programa. ¡Hasta luego!" << endl;
                break;

            default:
                cout << "Opcion invalida en Menu Principal" << endl;
                break;
        }

    } while (opcionPrincipal != 3);

    return 0;
}
