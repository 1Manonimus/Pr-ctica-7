#include <stdio.h>
#include <math.h>

int main()
{

    int sum = 0;
    int a = 0;
    int b = 0;
    int n;
    
 
    printf ("escoje una opción;\n");
    printf ("1- SUMA \n");
    printf ("2- RESTA \n");
    printf ("3- MULTIPLICACIÓN \n");
    printf ("4- DIVISIÓN\n");
    printf ("5- EXPONENCIAL\n");
    printf ("6- RAIZ\n");
    printf ("7- SALIR\n");
scanf("%d",&n);
{
if(n !=7)
{
switch(n)
    {
        case 1:
    printf ("ingresa el primer valor;\n");
    scanf ("%d" ,& a);
    printf ("ingrese el segundo valor;\n");
    scanf ("%d" ,& b);
    sum=a+b;
    printf ("El resultado es;%d\n", sum);
    break;
        case 2:
    printf ("ingresa el primer valor;\n");
    scanf ("%d" ,& a);
    printf ("ingrese el segundo valor;\n");
    scanf ("%d" ,& b);
    sum=a-b;
    printf ("El resultado es;%d\n", sum);
    break;
        case 3:
    printf ("ingresa el primer valor;\n");
    scanf ("%d" ,& a);
    printf ("ingrese el segundo valor;\n");
    scanf ("%d" ,& b);
    sum=a*b;
    printf ("El resultado es;%d\n", sum);
    break;
        case 4:
    printf ("ingresa el primer valor;\n");
    scanf ("%d" ,& a);
    printf ("ingrese el segundo valor;\n");
    scanf ("%d" ,& b);
    sum=a/b;
    printf ("El resultado es;%d\n", sum);
    break;
        case 5:
    printf ("ingresa el número que quiere obtener la exponencial;\n");
    scanf ("%d" ,& a);
    printf ("ingrese el valor de la exponecial;\n");
    scanf ("%d" ,& b);    
    sum= pow(a,b);
    printf ("El resultado es;%d\n", sum);
    break;
        case 6:
    printf ("el número que quiera obtener su raiz;\n");
    scanf ("%i" ,& a);
    sum= sqrt(a);
    printf ("El resultado es;%d\n", sum);
        default:
    printf ("no escogiste una operacción valida;\n");
    }
}
    printf ("escoje una opción;\n");
    printf ("1- SUMA \n");
    printf ("2- RESTA \n");
    printf ("3- MULTIPLICACIÓN \n");
    printf ("4- DIVISIÓN\n");
    printf ("5- EXPONENCIAL\n");
    printf ("6- RAIZ\n");
    printf ("7- SALIR\n");
scanf("%d",&n);
}

printf("saliste");


return 0;
}
