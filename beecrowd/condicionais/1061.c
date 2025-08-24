// Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de Abril, iniciando e terminando dentro do mês. 
// O problema é que Pedrinho quer calcular o tempo que o evento vai durar, uma vez que ele sabe quando inicia e quando termina o evento.
// Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar Pedrinho a calcular a duração deste evento.

#include <stdio.h>

int main(){
    int dia_inicio, dia_final;
    int hora_inicio, minuto_inicio, segundo_inicio;
    int hora_final, minuto_final, segundo_final;
    int segundos_inicio, segundos_final, diferenca_segundos, resto;
    int dia_total, hora_total, minuto_total, segundo_total;

    scanf("Dia %d", &dia_inicio);
    scanf(" %d : %d : %d", &hora_inicio, &minuto_inicio, &segundo_inicio);
    scanf(" Dia %d", &dia_final);  
    scanf(" %d : %d : %d", &hora_final, &minuto_final, &segundo_final);

    segundos_inicio = (dia_inicio * 86400) + (hora_inicio * 3600) + (minuto_inicio * 60) + segundo_inicio;
    segundos_final = (dia_final * 86400) + (hora_final * 3600) + (minuto_final * 60) + segundo_final;
    diferenca_segundos = segundos_final - segundos_inicio;

    dia_total = diferenca_segundos/86400;
    resto = diferenca_segundos % 86400;
    hora_total = resto/3600;
    resto = resto % 3600;
    minuto_total = resto/60;
    segundo_total = resto%60;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dia_total, hora_total, minuto_total, segundo_total);
    return 0;
}