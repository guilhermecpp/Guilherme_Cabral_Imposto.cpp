#include <bits/stdc++.h>
using namespace std;

int main()
{
    double salario;
    double prestacao_de_servico;
    double ganho_de_capital;
    double gastos_medicos;
    double gastos_educacionais;
    double imposto_salario;
    double imposto_prestacao_de_servico;
    double imposto_ganho_de_capital;
    double imposto_total;
    double maximo_dedutivel;
    double gastos_dedutiveis;

    printf("Renda anual com salario: ");
    scanf("%lf", &salario);

    printf("Renda anual com prestacao de servico: ");
    scanf("%lf", &prestacao_de_servico);

    printf("Renda anual com ganho de capital: ");
    scanf("%lf", &ganho_de_capital);

    printf("Gastos medicos: ");
    scanf("%lf", &gastos_medicos);

    printf("Gastos educacionais: ");
    scanf("%lf", &gastos_educacionais);

    if(salario / 12 < 3000.00)
    {
        imposto_salario = salario * 0.00;
    }else if(salario / 12 < 5000.0)
    {
        imposto_salario = salario * 0.10;
    }else
    {
        imposto_salario = salario * 0.20;
    }

    imposto_prestacao_de_servico = prestacao_de_servico * 0.15;

    imposto_ganho_de_capital = ganho_de_capital * 0.20;

    printf("\n");
    printf("CONSOLIDADO DE RENDA:\n");

    printf("Imposto sobre salario: %.2lf\n", imposto_salario);
    printf("Imposto sobre serviços: %.2lf\n", imposto_prestacao_de_servico);
    printf("Imposto sobre ganho de capital: %.2lf\n", imposto_ganho_de_capital);

    imposto_total = imposto_salario + imposto_prestacao_de_servico + imposto_ganho_de_capital;

    maximo_dedutivel = imposto_total * 0.3;
    gastos_dedutiveis = gastos_medicos + gastos_educacionais;

    printf("\n");
    printf("DEDUCOES:\n");

    printf("Maximo dedutivel: %.2lf\n", maximo_dedutivel);
    printf("Gastos dedutiveis: %.2lf\n", gastos_dedutiveis);

    return 0;
}
