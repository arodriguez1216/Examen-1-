
# include <cstdio>

int main() {
    char Nombre[50], Continuar;
    int Cedula, TipoEmpleado, ContOpe = 0, ContTec = 0, ContProfe = 0;
    float AcumuOpe = 0, AcumuTec = 0, AcumuProfe = 0;
    float PromOpe = 0, PromTec = 0, PromProfe = 0;
    float CantHoras, PrecioHora, SalarioOrdinario, AumSalarial, SalarioBruto, DeduccionCCSS, SalarioNeto;

    do {
        printf("Digite Su Numero de Cedula: ");
        scanf("%d", &Cedula);
        printf("Digite su Nombre: ");
        scanf("%s", Nombre);
        printf("Digite la Cantidad de horas trabajadas: ");
        scanf("%f", &CantHoras);
        printf("Digite su salario por hora actual: ");
        scanf("%f", &PrecioHora);
        printf("Digite su Numero de Empleado\n1= Operario\n2=Tecnico\n3=Profesional\n");
        scanf("%d", &TipoEmpleado);

        if (TipoEmpleado == 1) {
            SalarioOrdinario = PrecioHora * CantHoras;
            AumSalarial = SalarioOrdinario * 0.15;
            SalarioBruto = SalarioOrdinario + AumSalarial;
            DeduccionCCSS = SalarioBruto * 0.0917;
            SalarioNeto = SalarioBruto - DeduccionCCSS;
            AcumuOpe += SalarioNeto;
            ContOpe++;
            PromOpe = AcumuOpe / ContOpe;

            printf("Cedula: %d\n", Cedula);
            printf("Nombre: %s\n", Nombre);
            printf("Tipo de Empleado: Operario\n");
            printf("Salario por hora: %.2f\n", PrecioHora);
            printf("Cantidad de horas laboradas: %.2f\n", CantHoras);
            printf("Salario Ordinario: %.2f\n", SalarioOrdinario);
            printf("Aumento: %.2f\n", AumSalarial);
            printf("Salario Bruto: %.2f\n", SalarioBruto);
            printf("Deduccion CCSS: %.2f\n", DeduccionCCSS);
            printf("Salario neto: %.2f\n", SalarioNeto);
        } else if (TipoEmpleado == 2) {
            SalarioOrdinario = PrecioHora * CantHoras;
            AumSalarial = SalarioOrdinario * 0.10;
            SalarioBruto = SalarioOrdinario + AumSalarial;
            DeduccionCCSS = SalarioBruto * 0.0917;
            SalarioNeto = SalarioBruto - DeduccionCCSS;
            AcumuTec += SalarioNeto;
            ContTec++;
            PromTec = AcumuTec / ContTec;

            printf("Cedula: %d\n", Cedula);
            printf("Nombre: %s\n", Nombre);
            printf("Tipo de Empleado: Tecnico\n");
            printf("Salario por hora: %.2f\n", PrecioHora);
            printf("Cantidad de horas laboradas: %.2f\n", CantHoras);
            printf("Salario Ordinario: %.2f\n", SalarioOrdinario);
            printf("Aumento: %.2f\n", AumSalarial);
            printf("Salario Bruto: %.2f\n", SalarioBruto);
            printf("Deduccion CCSS: %.2f\n", DeduccionCCSS);
            printf("Salario neto: %.2f\n", SalarioNeto);
        } else if (TipoEmpleado == 3) {
            SalarioOrdinario = PrecioHora * CantHoras;
            AumSalarial = SalarioOrdinario * 0.05;
            SalarioBruto = SalarioOrdinario + AumSalarial;
            DeduccionCCSS = SalarioBruto * 0.0917;
            SalarioNeto = SalarioBruto - DeduccionCCSS;
            AcumuProfe += SalarioNeto;
            ContProfe++;
            PromProfe = AcumuProfe / ContProfe;

            printf("Cedula: %d\n", Cedula);
            printf("Nombre: %s\n", Nombre);
            printf("Tipo de Empleado: Profesional\n");
            printf("Salario por hora: %.2f\n", PrecioHora);
            printf("Cantidad de horas laboradas: %.2f\n", CantHoras);
            printf("Salario Ordinario: %.2f\n", SalarioOrdinario);
            printf("Aumento: %.2f\n", AumSalarial);
            printf("Salario Bruto: %.2f\n", SalarioBruto);
            printf("Deduccion CCSS: %.2f\n", DeduccionCCSS);
            printf("Salario neto: %.2f\n", SalarioNeto);
        }

        printf("Desea Continuar con otro empleado? Y/N: ");
        scanf(" %c", &Continuar);

    } while (Continuar == 'Y' || Continuar == 'y');

    printf("Cantidad Operarios: %d\n", ContOpe);
    printf("Cantidad Tecnicos: %d\n", ContTec);
    printf("Cantidad Profesionales: %d\n", ContProfe);
    printf("Acumulado de salario Operarios: %.2f\n", AcumuOpe);
    printf("Acumulado de salario Tecnicos: %.2f\n", AcumuTec);
    printf("Acumulado de salario Profesionales: %.2f\n", AcumuProfe);
    printf("Promedio de salario Operarios: %.2f\n", PromOpe);
    printf("Promedio de salario Tecnicos: %.2f\n", PromTec);
    printf("Promedio de salario Profesionales: %.2f\n", PromProfe);

    return 0;
}

