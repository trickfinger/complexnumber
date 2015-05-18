typedef float Complexo;
int main () {
    int opcao; //opção desejada do menu 
    char i;
    Complexo num1, num2, result;
    float a, b, c, d;             
            
             scanf ("%f", &a);
             scanf ("%f", &b);
             scanf ("%f", &c);
             scanf ("%f", &d);
             scanf ("%d", &opcao);
             
    switch (opcao) {

    case 0:
        printf(FRASE_OPCAO_INVALIDA);
        scanf ("%d", &opcao);

    case 1:
    num1 = (a+c);
    num2 = (b+d);
        if (num2>0){
            printf("%.2f+%.2fi\n", num1, num2);
            } else
        printf("%.2f%.2fi\n", num1, num2);
        
    break;

    case 2:
    num1 = (a-c);
    num2 = (b-d);
        if (num2>0){
            printf("%.2f+%.2fi\n", num1, num2);
            } else
        printf("%.2f%.2fi\n", num1, num2);
    break;

    case 3:
    num1 = ((a*c)+(b*d));
    num2 = ((a*d)+(b*c));
        if (num2>0){
            printf("%.2f+%.2fi\n", num1, num2);
            } else
        printf("%.2f%.2fi\n", num1, num2);    
    break;

    case 4:
             scanf ("%f", &a);
             scanf ("%f", &b);
             scanf ("%f", &c);
             scanf ("%f", &d);
             scanf ("%d", &opcao);

    case 5:
    return 0;
    break; 
    }       
} 
