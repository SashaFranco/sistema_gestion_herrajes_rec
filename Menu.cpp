#include "Menu.h"


void Menu::mostrar()
{
    while (true)
    {
        system("cls");
        int opc;
        cout << left;
        cout << "***********************" << endl;
        cout << "** " << _fechaSitema.toString() << " - " << _fechaSitema.getNombreDia() << " **" << endl;
        cout << "***********************" << endl << endl;
        cout << setw(40) << "SISTEMA DE GESTION PARA LA VENTA DE HERRAJES" << endl;
        cout << setw(40) << "--------------------------------------------" << endl;
        cout << setw(40) << "--------BIENVENDIO AL MENU PRINCIPAL--------" << endl;
        cout << setw(40) << "--------------------------------------------" << endl;
        // Opciones del men� principal
        cout << setw(40) << "1. GESTIONAR COMPRAS - STOCK" << endl;
        cout << setw(40) << "2. REALIZAR VENTA" << endl;
        cout << setw(40) << "3. ABM" << endl;
        cout << setw(40) << "4. EMITIR REPORTES" << endl;
        cout << setw(40) << "5. GRESTION DE USUARIOS" << endl;
        cout << setw(40) << "6. BACKUP DE ARCHIVOS" << endl;
        cout << setw(40) << "--------------------------------------------" << endl;
        cout << setw(40) << "0. SALIR" << endl;
        setConsoleSize(45, 45);
        cin >> opc;

        switch (opc)
        {
        case 1:
            mostrarCompras();
            break;
        case 2:
            mostrarVentas();
            break;
        case 3:
            mostrarABM();
            break;
        case 4:
            mostrarRreportes();
            break;
        case 5:
            mostrarUsuarios();
            break;
        case 6:
            mostrarBk();
            break;
        case 0:
            return;
            break;
        default: 
            cout << "INGRESE UNA OPCION VALIDA" << endl;
            system("pause");
            break;
        }
    }
}

void Menu::mostrarCompras()
{
    while (true)
    {
        system("cls");
        int opc;
        cout << left;
        cout << setw(40) << "SISTEMA DE GESTION PARA LA VENTA DE HERRAJES" << endl;
        cout << setw(40) << "--------------------------------------------" << endl;
        cout << setw(40) << "---------------MENU DE COMPRAS--------------" << endl;
        cout << setw(40) << "--------------------------------------------" << endl;
        // Opciones del men� de compras
        cout << setw(40) << "1. INGRESAR AL STOCK PRODUCTOS COMPRADOS" << endl;
        cout << setw(40) << "2. LISTAR STOCK DE PRODUCTOS" << endl;
        cout << setw(40) << "3. BUSCAR PRODUCTO" << endl;
        cout << setw(40) << "--------------------------------------------" << endl;
        cout << setw(40) << "0. VOLVER AL MENU PRINCIPAL" << endl;
        setConsoleSize(45, 45);
        cin >> opc;

        switch (opc)
        {
        case 1:
            system("pause");
            break;
        case 2:
            break;
        case 3:
            break;
        case 0:
            return;
            break;
        default:
            cout << "INGRESE UNA OPCION VALIDA" << endl;
            system("pause");
            break;
        }
    }
}

void Menu::mostrarVentas()
{
    while (true)
    {
        system("cls");
        int opc;
        cout << left;
        cout << setw(40) << "SISTEMA DE GESTION PARA LA VENTA DE HERRAJES" << endl;
        cout << setw(40) << "--------------------------------------------" << endl;
        cout << setw(40) << "---------------MENU DE VENTAS---------------" << endl;
        cout << setw(40) << "--------------------------------------------" << endl;
        // Opciones del men� de ventas
        cout << setw(40) << "1. INGRESAR VENTA DE UN ARTICULO" << endl;
        cout << setw(40) << "2. INGRESAR VENTA DE VARIOS ARTICULOS" << endl;
        cout << setw(40) << "--------------------------------------------" << endl;
        cout << setw(40) << "0. VOLVER AL MENU PRINCIPAL" << endl;
        setConsoleSize(45, 45);
        cin >> opc;

        switch (opc)
        {
        case 1:
            break;
        case 2:
            break;
        case 0:
            return;
            break;
        default:
            cout << "INGRESE UNA OPCION VALIDA" << endl;
            system("pause");
            break;
        }
    }

}

void Menu::mostrarABM()
{
    while (true)
    {
        system("cls");
        int opc;
        cout << left;
        cout << setw(40) << "SISTEMA DE GESTION PARA LA VENTA DE HERRAJES" << endl;
        cout << setw(40) << "--------------------------------------------" << endl;
        cout << setw(40) << "----------------MENU PARA ABM---------------" << endl;
        cout << setw(40) << "--------------------------------------------" << endl;
        // Opciones del men� de ABM
        cout << setw(40) << "1. ABM DE CLIENTES" << endl;
        cout << setw(40) << "2. ABM DE PROVEEDORES" << endl;
        cout << setw(40) << "3. ABM DE PRODUCTOS" << endl;
        cout << setw(40) << "--------------------------------------------" << endl;
        cout << setw(40) << "0. VOLVER AL MENU PRINCIPAL" << endl;
        setConsoleSize(45, 45);
        cin >> opc;

        switch (opc)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 0:
            return;
            break;
        default:
            cout << "INGRESE UNA OPCION VALIDA" << endl;
            system("pause");
            break;
        }
    }
}

void Menu::mostrarRreportes()
{
    while (true)
    {
        system("cls");
        int opc;
        cout << left;
        cout << setw(40) << "SISTEMA DE GESTION PARA LA VENTA DE HERRAJES" << endl;
        cout << setw(40) << "--------------------------------------------" << endl;
        cout << setw(40) << "----------------MENU REPORTES---------------" << endl;
        cout << setw(40) << "--------------------------------------------" << endl;
        // Opciones del men� de reportes
        cout << setw(40) << "1. LISTAR CLIENTES" << endl;
        cout << setw(40) << "2. LISTAR PROVEEDORES" << endl;
        cout << setw(40) << "3. LISTAR PRODUCTOS" << endl;
        cout << setw(40) << "4. LISTADO DE VENTAS" << endl;
        cout << setw(40) << "5. EMITIR REPORTE DE CAJA" << endl;
        cout << setw(40) << "6. EXPORTAR REPORTES A XLS" << endl; // REVISAR COMO HACER
        cout << setw(40) << "--------------------------------------------" << endl;
        cout << setw(40) << "0. VOLVER AL MENU PRINCIPAL" << endl;
        setConsoleSize(45, 45);
        cin >> opc;

        switch (opc)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            // REVISAR COMO EXPORTAR DE BINARIOS A XLS
            break;
        case 0:
            return;
            break;
        default:
            cout << "INGRESE UNA OPCION VALIDA" << endl;
            system("pause");
            break;
        }
    }
}

void Menu::mostrarUsuarios()
{
    while (true)
    {
        system("cls");
        int opc;
        cout << left;
        cout << setw(40) << "SISTEMA DE GESTION PARA LA VENTA DE HERRAJES" << endl;
        cout << setw(40) << "--------------------------------------------" << endl;
        cout << setw(40) << "----------------MENU USUARIOS---------------" << endl;
        cout << setw(40) << "--------------------------------------------" << endl;
        // Opciones del men� de usuarios del sistema
        cout << setw(40) << "1. LISTAR USUARIOS" << endl;
        cout << setw(40) << "2. CREAR NUEVO USUARIO" << endl;
        cout << setw(40) << "3. MODIFICAR USUARIO" << endl;
        cout << setw(40) << "4. ELIMINAR USUARIO" << endl;
        cout << setw(40) << "--------------------------------------------" << endl;
        cout << setw(40) << "0. VOLVER AL MENU PRINCIPAL" << endl;
        setConsoleSize(45, 45);
        cin >> opc;

        switch (opc)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 0:
            return;
            break;
        default:
            cout << "INGRESE UNA OPCION VALIDA" << endl;
            system("pause");
            break;
        }
    }
}

void Menu::mostrarBk()
{
    while (true)
    {
        system("cls");
        int opc;
        cout << left;
        cout << setw(40) << "SISTEMA DE GESTION PARA LA VENTA DE HERRAJES" << endl;
        cout << setw(40) << "--------------------------------------------" << endl;
        cout << setw(40) << "-----------------MENU BUCKUP----------------" << endl;
        cout << setw(40) << "--------------------------------------------" << endl;
        // Opciones del men� para BK
        cout << setw(40) << "1. BUCKUP CLIENTES" << endl;
        cout << setw(40) << "2. BUCKUP PROVEEDORES" << endl;
        cout << setw(40) << "3. BUCKUP PRODUCTOS" << endl;
        cout << setw(40) << "--------------------------------------------" << endl;
        cout << setw(40) << "0. VOLVER AL MENU PRINCIPAL" << endl;
        setConsoleSize(45, 45);
        cin >> opc;

        switch (opc)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 0:
            return;
            break;
        default:
            cout << "INGRESE UNA OPCION VALIDA" << endl;
            system("pause");
            break;
        }
    }
}