#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int opcionPrincipal, opcionSubMenu1, opcionSubMenu2;
    float lado, radio, altura, base, area, volumen;

    do {
        cout << "==========================================" << endl;
        cout << "      Almacen de Areas y Volumenes        " << endl;
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
                    cout << "    Submenu 1 - Calcular Area            " << endl;
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
                            cout << "Ingrese la base del tri�ngulo: ";
                            cin >> base;
                            cout << "Ingrese la altura del tri�ngulo: ";
                            cin >> altura;
                            area = 0.5 * base * altura;
                            cout << "El area del tri�ngulo es: " << area << " unidades cuadradas" << endl;
                            break;

                        case 4:
                            cout << "Ingrese la base del rect�ngulo: ";
                            cin >> base;
                            cout << "Ingrese la altura del rect�ngulo: ";
                            cin >> altura;
                            area = base * altura;
                            cout << "El area del rect�ngulo es: " << area << " unidades cuadradas" << endl;
                            break;

                        case 5:
                            cout << "Ingrese la diagonal mayor del rombo: ";
                            cin >> base;
                            cout << "Ingrese la diagonal menor del rombo: ";
                            cin >> altura;
                            area = (base * altura) / 2.0;
                            cout << "El area del rombo es: " << area << " unidades cuadradas" << endl;
                            break;

                        case 6:
                            cout << "Ingrese la base mayor del trapecio: ";
                            cin >> base;
                            cout << "Ingrese la base menor del trapecio: ";
                            cin >> lado;
                            cout << "Ingrese la altura del trapecio: ";
                            cin >> altura;
                            area = ((base + lado) * altura) / 2.0;
                            cout << "El area del trapecio es: " << area << " unidades cuadradas" << endl;
                            break;

                        case 7:
                            cout << "Ingrese el lado del pent�gono regular: ";
                            cin >> lado;
                            area = 1.0 / 4.0 * sqrt(5 * (5 + 2 * sqrt(5))) * pow(lado, 2);
                            cout << "El area del pent�gono regular es: " << area << " unidades cuadradas" << endl;
                            break;

                        case 8:
                            cout << "Ingrese el lado del hex�gono regular: ";
                            cin >> lado;
                            area = 3.0 / 2.0 * sqrt(3) * pow(lado, 2);
                            cout << "El area del hex�gono regular es: " << area << " unidades cuadradas" << endl;
                            break;

                        case 9:
                            cout << "Ingrese el radio del c�rculo sector: ";
                            cin >> radio;
                            cout << "Ingrese el �ngulo en radianes del c�rculo sector: ";
                            cin >> altura;
                            area = 0.5 * pow(radio, 2) * altura;
                            cout << "El area del c�rculo sector es: " << area << " unidades cuadradas" << endl;
                            break;

                        case 10:
                            cout << "Ingrese la base del paralelogramo: ";
                            cin >> base;
                            cout << "Ingrese la altura del paralelogramo: ";
                            cin >> altura;
                            area = base * altura;
                            cout << "El area del paralelogramo es: " << area << " unidades cuadradas" << endl;
                            break;

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
                    cout << "  Submenu 2 - Calcular Volumen           " << endl;
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
                            cout << "Ingrese el radio de la base del cono: ";
                            cin >> radio;
                            cout << "Ingrese la altura del cono: ";
                            cin >> altura;
                            volumen = (1.0/3) * M_PI * pow(radio, 2) * altura;
                            cout << "El volumen del cono es: " << volumen << " unidades cubicas" << endl;
                            break;

                        case 5:
                            cout << "Ingrese la longitud de la base del prisma: ";
                            cin >> base;
                            cout << "Ingrese el ancho de la base del prisma: ";
                            cin >> lado;
                            cout << "Ingrese la altura del prisma: ";
                            cin >> altura;
                            volumen = base * lado * altura;
                            cout << "El volumen del prisma rectangular es: " << volumen << " unidades cubicas" << endl;
                            break;

                        case 6:
                            cout << "Ingrese la longitud de la base de la pir�mide: ";
                            cin >> base;
                            cout << "Ingrese el ancho de la base de la pir�mide: ";
                            cin >> lado;
                            cout << "Ingrese la altura de la pir�mide: ";
                            cin >> altura;
                            volumen = (1.0 / 3.0) * base * lado * altura;
                            cout << "El volumen de la pir�mide cuadrangular es: " << volumen << " unidades cubicas" << endl;
                            break;

                        case 7:
                            cout << "Ingrese el radio interno del cilindro hueco: ";
                            cin >> radio;
                            cout << "Ingrese el radio externo del cilindro hueco: ";
                            cin >> base;
                            cout << "Ingrese la altura del cilindro hueco: ";
                            cin >> altura;
                            volumen = M_PI * (pow(base, 2) - pow(radio, 2)) * altura;
                            cout << "El volumen del cilindro hueco es: " << volumen << " unidades cubicas" << endl;
                            break;

                        case 8:
                            cout << "Ingrese el radio interno de la esfera hueca: ";
                            cin >> radio;
                            cout << "Ingrese el radio externo de la esfera hueca: ";
                            cin >> base;
                            volumen = (4.0 / 3.0) * M_PI * ((pow(base, 3) - pow(radio, 3)) / 3.0);
                            cout << "El volumen de la esfera hueca es: " << volumen << " unidades cubicas" << endl;
                            break;

                        case 9:
                            cout << "Ingrese la longitud de la base de la pir�mide triangular: ";
                            cin >> base;
                            cout << "Ingrese el ancho de la base de la pir�mide triangular: ";
                            cin >> lado;
                            cout << "Ingrese la altura de la pir�mide triangular: ";
                            cin >> altura;
                            volumen = (1.0 / 3.0) * base * lado * altura;
                            cout << "El volumen de la pir�mide triangular es: " << volumen << " unidades cubicas" << endl;
                            break;

                        case 10:
                            cout << "Ingrese el radio mayor del cono truncado: ";
                            cin >> base;
                            cout << "Ingrese el radio menor del cono truncado: ";
                            cin >> radio;
                            cout << "Ingrese la altura del cono truncado: ";
                            cin >> altura;
                            volumen = (1.0 / 3.0) * M_PI * (pow(base, 2) + base * radio + pow(radio, 2)) * altura;
                            cout << "El volumen del cono truncado es: " << volumen << " unidades cubicas" << endl;
                            break;

                        case 11:
                            break;

                        default:
                            cout << "Opcion invalida en Submenu 2" << endl;
                            break;
                    }
                } while (opcionSubMenu2 != 11);
                break;

            case 3:
                cout << "Saliendo del programa. �Hasta luego!" << endl;
                break;

            default:
                cout << "Opcion invalida en Menu Principal" << endl;
                break;
        }

    } while (opcionPrincipal != 3);

    return 0;
}
