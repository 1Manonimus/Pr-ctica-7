#include <stdio.h>
#include <math.h>

int main()
{

    int sum = 0;
    int a = 0;
    int b = 0;
    int n;
    
 
    printf ("escoje una opción;\n");
    printf ("1- suma \n");
    printf ("2- resta \n");
    printf ("3- multiplicación \n");
    printf ("4- división\n");
    printf ("5- exponencial\n");
    printf ("6- raíz\n");
    printf ("7- salir\n");
scanf("%d",&n);

while(n !=7)
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

    printf ("escoje una opción;\n");
    printf ("1- suma \n");
    printf ("2- resta \n");
    printf ("3- multiplicación \n");
    printf ("4- disión\n");
    printf ("5- exponencial\n");
    printf ("6- raiz\n");
    printf ("7- salir\n");
scanf("%d",&n);
}


printf("saliste");


return 0;
}
