 /* Figura 3.10: fig03_10.c
 /* Figura 3.10: fig03_10.c
 Análise de resultados de exame */
 #include <stdio.h>

 /* função main inicia execução do programa */
 int main( void )
 {
 /* inicializa variáveis nas declarações */
int aprovados = 0; /* número de aprovações */
int reprovados = 0; /* número de reprovações */
int reprovados = 0; /* número de reprovações */
int aluno = 1; /* contador de alunos */
int resultado; /* um resultado de exame */
/* processa 10 alunos usando loop controlado por contador */
while ( aluno <= 10 ) {
/* pede entrada do usuário e lê o valor digitado */
printf( “Forneça resultado ( 1=aprovado,2=reprovado): “ );
scanf( “%d”, &resultado );
/* se resultado 1, incrementa aprovados */
if ( resultado == 1 ) {
aprovados = aprovados + 1;
} /* fim do if */
else {/* senão, incrementa reprovados */
reprovados = reprovados + 1;
} /* fim do else */
aluno = aluno + 1; /* incrementa contador de alunos */
} /* fim do while */
/* fase de finalização; exibe número de aprovados e reprovados */
printf( “Aprovados %d\n”, aprovados );
printf( “Reprovados %d\n”, reprovados );
/* se mais de oito aprovados, imprime 'Bônus ao instrutor!' */
if ( aprovados > 8 ) {
printf( “Bônus ao instrutor!\n” );
} /* fim do if */
return 0; /* indica que o programa foi concluído com sucesso */
} /* fim da função main */