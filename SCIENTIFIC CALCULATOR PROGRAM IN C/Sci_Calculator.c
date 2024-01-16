 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <math.h>

void gotoxy(short x, short y){
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	return;
}

int factorial(int num){
	int fact = 1;
	for (int i = 1; i<=num; i++){
		fact *= i;
	}
	return fact;
}
void temperature();
void length();
void mass();
void currency();
void energy();
void speed();
void time();
void compData();
void conv();


int main(){
	int choice;
	float n1,n2,num[10],result;
    char z,x;
    int op,i,k,n3,n4,n5,n,r,nCr,nPr;                 //"n3" is only specified for factorial purposes //"n4,n5" only for mod function
    unsigned long long fact = 1;        //only specified for factorial purposes
    
    system("color 30");
    gotoxy(95,25);
    printf("PROJECT MADE BY : \n");
    gotoxy(95,27);
    printf("22K-4125\n");
    gotoxy(95,29);
    printf("22K-8724\n");
    gotoxy(38,10);
    printf("SCIENTIFIC CALCULATOR PROGRAM\n");
    gotoxy(38,12);
    printf("1. Scientific Calculator\n");
    gotoxy(38,14);
    printf("2. Conversion Calculator\n\n");
    gotoxy(38,16);
    printf("Please select anyone of them : ");
    scanf("%d", &choice);
    
    system("cls");
    system("color cf");
    if (choice==1){
	
    printf("\t\t  SCIENTIFIC CALCULATOR\n");
    printf("\t\t************************\t\n");
    printf("\t\t************************\t\n\n");
    printf("\t1. Addition\t");
    printf("2. Subtraction\t");
    printf("3. Multiplication\n\n");
    printf("\t4. Division\t");
    printf("5. Square x^2\t");
    printf("6. Sqrt(x)\n\n");
    printf("\t7. sin(x)\t");
    printf("8. cos(x)\t");
    printf("9. tan(x)\n\n");
    printf("\t10. x^y\t");
    printf("\t11. e^x\t");
    printf("\t12. n!\t");
    printf("\n\n\t13. a(mod)b");
    printf("\t14. nCr");
    printf("\t\t15. nPr\n\n");
    printf("\t16. ln(n)");
    printf("\t17. arcsin(x)");
    printf("\t18. arccos(x)\n\n");
    printf("\t19. arctan(x)");
    printf("\t20. floor(x) <--> ceil(x)\n\n");
    printf("\t21. log10(x)");
    printf("\t22. cbrt(x)");
    printf("\t23. |x|\n\n");
    printf("\t24. Exit\n");
    
    do{
    
    printf("\nEnter Operation No. : ");
    scanf("%d", &op);
    switch (op){
        case 1 :
        printf("Enter how many digits you want to add : ");
        scanf("%d", &k);
        for (i=0; i<k; i++){
        printf("Enter %d operand : ", i+1);
        scanf("%f", &num[i]);
        }
        float res=0;
        for (i=0; i<k;i++){
           res += num[i];
		}
      printf("Sum = %.1f\n",  res);
        break;
        case 2 :
        printf("Enter how many digits you want to subtract : ");
        scanf("%d", &k);
        for (i=0; i<k; i++){
        printf("Enter %d operand : ", i+1);
        scanf("%f", &num[i]);
        }
        for (i=0; i<k; i++){
           res = num[i] - res;
		}
      printf("Sub = %.1f\n",  res);
        break;
        case 3 :
        printf("Enter how many digits you want to multiply : ");
        scanf("%d", &k);
        for (i=0; i<k; i++){
        printf("Enter %d operand : ", i+1);
        scanf("%f", &num[i]);
        }
        res=1;
        for (i=0; i<k;i++){
           res *= num[i];
		}
      printf("product = %.2f\n",  res);
        break;
        case 4 :
        printf("Enter first operand : ");
        scanf("%f", &n1);
        printf("Enter second operand : ");
        scanf("%f", &n2);
        res = n1 / n2;
        printf("Qoutient = %f\n", res);
        break;
        case 5 :
        printf("Enter operand : ");
        scanf("%f", &n1);
        if (n1){
            res = pow(n1,2);
            printf("Square of %f = %.3f\n", n1,res);
        }
        break;
        case 6 :
        printf("Enter operand : ");
        scanf("%f", &n1);
        if (n1){
            res = sqrt(n1);
            printf("Square root of %f = %.3f\n", n1,res);
        }
        break;
        case 7 :
        printf("Enter operand : ");
        scanf("%f", &n1);
        if (n1){
            n1 = (n1/180)*3.141;
            res = sin(n1);
            printf("sin(%f) = %.3f\n", n1,res);
        }
        break;
        case 8 :
        printf("Enter operand : ");
        scanf("%f", &n1);
        if (n1){
            n1 = (n1/180)*3.141;
            res = cos(n1);
            printf("cos(%f) = %.3f\n", n1,res);
        }
        break;
        case 9 :
        printf("Enter operand : ");
        scanf("%f", &n1);
        if (n1){
            n1 = (n1/180)*3.141;
            res = tan(n1);
            printf("tan(%f) = %.3f\n", n1,res);
        }
        break;
        case 10 : 
        printf("Enter first operand : ");
        scanf("%f", &n1);
        printf("Enter second operand : ");
        scanf("%f", &n2);
        res = pow(n1,n2);
        printf("%f^%f = %.1f", n1,n2,res);
        break;
        case 11 : 
        printf("Enter value of x : ");
        scanf("%f", &n1);
        exp(n1);
        printf("e^(%.0f) = %f\n", n1,exp(n1));
        break;
        case 12 :
        printf("Enter value of n : ");
        scanf("%d", &n3);
        factorial(n3);
        printf("%d! = %llu\n",n3,factorial(n3));
        break;
        case 13 :
        printf("Enter First Operand : ");
        scanf("%d", &n4);
        printf("Enter Second Operand : ");
        scanf("%d", &n5);
        printf("%d mod %d = %d\n", n4,n5,n4%n5);
        break;
        case 14 :
        printf("Enter n and r: ");
        scanf("%d%d", &n,&r);
        if (n >= r){
        nCr = factorial(n) / (factorial(r) * factorial(n - r));
        printf("%dC%d : %d\n", n,r,nCr);
        }
        else {
        	printf("Invalid Math error\n");
		}
        break;
        case 15 :
        printf("Enter n and r: ");
        scanf("%d%d", &n,&r);
        if (n >= r){
        nPr = factorial(n) / factorial(n - r);
        printf("%dC%d : %d\n", n,r,nPr);
        }
        else {
        	printf("Invalid Math error\n");
		}
		break;
		case 16 :
		printf("Enter value of n : ");
		scanf("%f", &n1);
		printf("ln(%.0f) = %f\n", n1,log(n1));
		break;
		case 17 :
		printf("Enter value of x : ");
		scanf("%f", &n1);
		result = asin(n1);
		printf("arcsin(%f) = %f in radians\n", n1,result);
		result = asin(n1)*180/3.1415926;
		printf("arcsin(%f) = %f in degrees\n", n1,result);
		break;
		case 18 :
		printf("Enter value of x : ");
		scanf("%f", &n1);
		result = acos(n1);
		printf("arccos(%f) = %f in radians\n", n1,result);
		result = acos(n1)*180/3.1415926;
		printf("arccos(%f) = %f in degrees\n", n1,result);
		break;
		case 19 :
		printf("Enter value of x : ");
		scanf("%f", &n1);
		result = atan(n1);
		printf("arctan(%f) = %f in radians\n", n1,result);
		result = atan(n1)*180/3.1415926;
		printf("arctan(%f) = %f in degrees\n", n1,result);
		break;
		case 20 :
		printf("Enter value of X : ");
		scanf("%f", &n1);
		printf("floor(%f) = %f\n", n1,floor(n1));
		printf("ceil(%f) = %f\n", n1,ceil(n1));
		break;
		case 21 :
		printf("Enter value of n : ");
		scanf("%f", &n1);
		printf("ln(%.0f) = %f\n", n1,log10(n1));
		break;
		case 22 :
		printf("Enter operand : ");
        scanf("%f", &n1);
        if (n1){
            res = cbrt(n1);
            printf("Cube root of %f = %.3f\n", n1,res);
        }
        break;
        case 23 :
        printf("Enter value of X : ");
        scanf("%f", &n1);
        printf("|%f| = %f\n", n1,fabs(n1));
        break;
        case 24 :
        system("cls");
        main();
        break;
        default :
        printf("Invalid operation inputted\n");
        break;
    }
    fflush(stdin);
    printf("\nIF TOU WANT TO DO MORE OPERATIONS THEN PRESS 'A' TO CONTINUE.....");
    scanf("%c", &z);
}
    while(z=='A');
}
else if(choice==2){
	int in;
	printf("\t\t  CONVERSION CALCULATOR\n");
    printf("\t\t*************************\t\n");
    printf("\t\t*************************\t\n\n");
    printf("\t\t1. MASS\n");
    printf("\t\t2. LENGTH\n");
    printf("\t\t3. TEMPERATURE\n");
    printf("\t\t4. CURRENCY\n");
    printf("\t\t5. TIME\n");
    printf("\t\t6. ENERGY\n");
    printf("\t\t7. SPEED\n");
    printf("\t\t8. DATA\n");
    printf("\t\t9. DATA TYPE\n");
    printf("\t\t10. EXIT\n");
    printf("Enter any one conversion you want to do : ");
    scanf("%d", &in);
    switch (in){
    	case 1 :
    	mass();
    	break;
    	case 2 :
    	length();
    	break;
    	case 3 :
    	temperature();
    	break;
    	case 4 :
    	currency();
    	break;
    	case 5 :
    	time();
    	break;
    	case 6 :
    	energy();
    	break;
    	case 7 :
    	speed();
    	break;
    	case 8 :
    	compData();
    	break;
    	case 9 :
    	conv();
    	break;
    	case 10 :
    	system("cls");
    	main();
    	break;
    	default :
    	printf("Invalid\n");
    	break;
	}
}
 return 0;
}

void mass(){
	system("cls");
	system("color e0");
	float input;
	int a;
	char z;
	printf("\n\t\t1. Centigram to Gram\n");
	printf("\t\t2. Centigram to Kilogram\n");
	printf("\t\t3. Kilogram to Gram\n");
	printf("\t\t4. Gram to Centigram\n");
	printf("\t\t5. Miligram to Gram\n");
	printf("\t\t6. Kilogram to Miligram\n");
	printf("\t\t7. Exit\n");
	do{
		
	printf("Enter given options to continue : ");
	scanf("%d", &a);
	switch (a){
		case 1 :
		printf("Centigram : ");
		scanf("%f", &input);
		printf("%f centigram to gram = %.4f\n", input, input/100);
		break;
		case 2 :
		printf("Centigram : ");
		scanf("%f", &input);
		printf("%f centigram to Kilogram = %.4f\n", input, input/1000);
		break;
		case 3 :
		printf("Kilogram : ");
		scanf("%f", &input);
		printf("%f Kilogram to gram = %.4f\n", input, input*100);
		break;
		case 4 :
		printf("Gram : ");
		scanf("%f", &input);
		printf("%f Gram to Centigram = %.4f\n", input, input*100);
		break;
		case 5 :
		printf("Milligram : ");
		scanf("%f", &input);
		printf("%f milligram to gram = %.4f\n", input, input/1000);
		break;
		case 6 :
		printf("Kilogram : ");
		scanf("%f", &input);
		printf("%f Kilogram to Milligram = %.4f\n", input, input*1000000);
		break;
		case 7 :
		system("cls");
		main();
		default :
		printf("Invalid\n");
		break;
	}
	fflush(stdin);
    printf("\nIF TOU WANT TO DO MORE OPERATIONS THEN PRESS 'A' TO CONTINUE.....");
    scanf("%c", &z);
}
    while (z=='A');
	return;
}

void length(){
	system("cls");
	system("color df");
	float input;
	int a;
	char z;
	printf("\t\t1. Centimetre to Metre\n");
	printf("\t\t2. Centimetre to Millimetre\n");
	printf("\t\t3. Metre to Centimetre\n");
	printf("\t\t4. Kilometre to Metre\n");
	printf("\t\t5. Feet to Inches\n");
	printf("\t\t6. Millimetre to Feet\n");
	printf("\t\t7. Feet to Metre\n");
	printf("\t\t8. Exit\n");
	
	do{
    
	printf("Enter given options to continue : ");
	scanf("%d", &a);
	switch (a){
		case 1 :
		printf("Centimetre : ");
		scanf("%f", &input);
		printf("%f centimetre to meter = %.4f\n", input, input/100);
		break;
		case 2 :
		printf("Centimetre : ");
		scanf("%f", &input);
		printf("%f centimetre to Millimeter = %.4f\n", input, input*100);
		break;
		case 3 :
		printf("Metre : ");
		scanf("%f", &input);
		printf("%f Metre to centimeter = %.4f\n", input, input*100);
		break;
		case 4 :
		printf("Kilometre : ");
		scanf("%f", &input);
		printf("%f Kilometre to Meter = %.4f\n", input, input*1000);
		break;
		case 5 :
		printf("Feet : ");
		scanf("%f", &input);
		printf("%f Feet to Inches = %.4f\n", input, input*12);
		break;
		case 6 :
		printf("Millimetre : ");
		scanf("%f", &input);
		printf("%f Millimetre to Feet = %.4f\n", input, input/305);
		break;
		case 7 :
		printf("Feet : ");
		scanf("%f", &input);
		printf("%f Feet to meter = %.4f\n", input, input/3.281);
		break;
		case 8 :
		system("cls");
		main();
		break;
		default :
		printf("Invalid\n");
		break;
	}
	fflush(stdin);
    printf("\nIF TOU WANT TO DO MORE OPERATIONS THEN PRESS 'A' TO CONTINUE.....");
    scanf("%c", &z);
}
    while(z=='A');
    
    return;
}

void temperature(){
	system("cls");
	system("color f0");
	float input;
	int a;
	char z;
	printf("\t\t1. Centigrade to Fahrenheit\n");
	printf("\t\t2. Centigrade to Kelvin\n");
	printf("\t\t3. Fahrenheit to Centigrade\n");
	printf("\t\t4. Fahrenheit to Kelvin\n");
	printf("\t\t5. Kelvin to Fahrenheit\n");
    printf("\t\t6. Kelvin to Centigrade\n");
	printf("\t\t7. Exit\n");
	
	do {
		printf("Enter given options to continue : ");
	    scanf("%d", &a);
	    switch(a){
	    	case 1 :
	    	printf("Centigrade : ");
	    	scanf("%f", &input);
	    	printf("%f Centigrade to Fahrenheit = %.4f\n", input, (input*1.8)+32);
	    	break;
	    	case 2 :
	    	printf("Centigrade : ");
	    	scanf("%f", &input);
	    	printf("%f Centigrade to Kelvin = %.4f\n", input, input+273.15);
	    	break;
	    	case 3 :
	    	printf("Fahrenheit : ");
	    	scanf("%f", &input);
	    	printf("%f Fahrenheit to Centigrade = %.4f\n", input, (input-32)*0.5556);
	    	break;
	    	case 4 :
	    	printf("Fahrenheit : ");
	    	scanf("%f", &input);
	    	printf("%f Fahrenheit to Kelvin = %.4f\n", input, (input+459.67)*5/9);
	    	break;
	    	case 5 :
	    	printf("Kelvin : ");
	    	scanf("%f", &input);
	    	printf("%f Kelvin to Fahrenheit = %.4f\n", input, (input*9/5)-459.67);
	    	break;
	    	case 6 :
	    	printf("Kelvin : ");
	    	scanf("%f", &input);
	    	printf("%f Kelvin to Centigrade = %.4f\n", input, (input-273.15));
	    	break;
	    	case 7 :
	    	system("cls");
	    	main();
	    	break;
	    	default :
	    	printf("Invalid\n");
	    	break;
		}
		fflush(stdin);
        printf("\nIF TOU WANT TO DO MORE OPERATIONS THEN PRESS 'A' TO CONTINUE.....");
        scanf("%c", &z);
	}
	while (z=='A');
	return ;				 
}

void time(){
	system("cls");
	system("color c0");
	float input;
	int a;
	char z;
	printf("\t\t1. Seconds to Minutes\n");
	printf("\t\t2. Seconds to Hours\n");
	printf("\t\t3. Hours to Minutes\n");
	printf("\t\t4. Minutes to Second\n");
	printf("\t\t5. Hours to Second\n");
	printf("\t\t6. Minutes to Hours\n");
	printf("\t\t7. Exit\n");
	do {
	    printf("Enter given options to continue : ");
	    scanf("%d", &a);
	    switch (a){
	        case 1 :
	        printf("Second(s) : ");
	        scanf("%f", &input);
	        printf("%f Second(s) to Minute(s) = %.4f\n", input, input/60);
	        break;
	        case 2 :
	        printf("Second(s) : ");
	        scanf("%f", &input);
	        printf("%f Second(s) to Hour(s) = %.4f\n", input, input/3600);
	        break;
	        case 3 :
	        printf("Hour(s) : ");
	        scanf("%f", &input);
	        printf("%f Hour(s) to Minute(s) = %.4f\n", input, input*60);
	        break;
	        case 4 :
	        printf("Minute(s) : ");
	        scanf("%f", &input);
	        printf("%f Minute(s) to Second(s) = %.4f\n", input, input*60);
	        break;
	        case 5 :
	        printf("Hour(s) : ");
	        scanf("%f", &input);
	        printf("%f Hour(s) to Second(s) = %.4f\n", input, input*3600);
	        break;
	        case 6 :
	        printf("Minutes(s) : ");
	        scanf("%f", &input);
	        printf("%f Minutes(s) to Hour(s) = %.4f\n", input, input/60);
	        break;
	        case 7 :
	        system("cls");
	        main();
	        break;
	        default :
	        printf("Invalid\n");
	        break;
		}
		fflush(stdin);
        printf("\nIF TOU WANT TO DO MORE OPERATIONS THEN PRESS 'A' TO CONTINUE.....");
        scanf("%c", &z);
	}
	while (z=='A');
	return ;
}
void energy(){
	system("cls");
	system("color 8f");
	float input;
	int a;
	char z;
	printf("\t\t1. Joules to kilowatts\n");
	printf("\t\t2. Joules to kilojoules\n");
	printf("\t\t3. kilojoules to Joules\n");
	printf("\t\t4. kilojoules  to kilowatts\n");
	printf("\t\t5. kilowatts to kilojoules\n");
	printf("\t\t6. kilowatts to joules\n");
	printf("\t\t7. Exit\n");
	
	do {
		printf("Enter given options to continue : ");
	    scanf("%d", &a);
	    switch (a){
	    	case 1 :
	    	printf("Joule : ");
	    	scanf("%f", &input);
	    	printf("%f joules to kilowatts = %.4f\n", input, input/3600000);
	    	break;
	    	case 2 :
	    	printf("Joule : ");
	    	scanf("%f", &input);
	    	printf("%f joules to kilojoules = %.4f\n", input, input/1000);
	    	break;
	    	case 3 :
	    	printf("Kilojoules : ");
	    	scanf("%f", &input);
	    	printf("%f kilojoules to joules = %.4f\n", input, input*1000);
	    	break;
	    	case 4 : 
	    	printf("Kilojoules : ");
	    	scanf("%f", &input);
	    	printf("%f kilojoules to kilowatts = %.4f\n", input, input/3600);
	    	break;
	    	case 5 :
	    	printf("kilowatts : ");
	    	scanf("%f", &input);
	    	printf("%f kilowatts to kilojoules = %.4f\n", input, input*3600);
	    	break;
	    	case 6 :
	    	printf("kilowatts : ");
	    	scanf("%f", &input);
	    	printf("%f kilowatts to joules = %.4f\n", input, input*3600000);
	    	break;
	    	case 7 :
	    	system("cls");
	    	main();
			break;
			default :
			printf("Invalid\n");
			break;		
	    }
	    fflush(stdin);
        printf("\nIF TOU WANT TO DO MORE OPERATIONS THEN PRESS 'A' TO CONTINUE.....");
        scanf("%c", &z);
   }
   while (z=='A');
return;
}

void speed(){
	system("cls");
	system("color e4");
	float input;
	int a;
	char z;
	printf("\t\t1. Miles per hour to kilometer per hour\n");
	printf("\t\t2. Kilometer per hour to Miles per hour\n");
	printf("\t\t3. Foot per second to kilometer per hour\n");
	printf("\t\t4. Metre per second to kilometer per hour\n");
	printf("\t\t5. Miles per hour to Meter per second\n");
	printf("\t\t6. Foot per second to Meter per second\n");
	printf("\t\t7. Meter per second to Foot per second\n");
	printf("\t\t8. Exit\n");
	
	do {
		printf("Enter given options to continue : ");
	    scanf("%d", &a);
	    switch (a){
	    	case 1 :
	    	printf("Miles per hour : ");
	    	scanf("%f", &input);
	    	printf("%f Miles per hour to kilometer per hour = %.4f\n", input , input*1.61);
	    	break;
	    	case 2 :
	    	printf("Kilometre per hour : ");
	    	scanf("%f", &input);
	    	printf("%f Kilometer per hour to Miles per hour = %.4f\n", input , input/1.61);
	    	break;
	    	case 3 :
	    	printf("Foot per second : ");
	    	scanf("%f", &input);
	    	printf("%f Foot per second to kilometer per hour = %.4f\n", input , input*1.097);
	    	break;
	    	case 4 :
	    	printf("Meter per second : ");
	    	scanf("%f", &input);
	    	printf("%f Meter per second to kilometer per hour = %.4f\n", input , input*3.6);
	    	break;
	    	case 5 : 
	    	printf("Miles per hour : ");
	    	scanf("%f", &input);
	    	printf("%f Miles per hour to Meter per second = %.4f\n", input , input/2.237);
	    	break;
	    	case 6 : 
	    	printf("Foot per second : ");
	    	scanf("%f", &input);
	    	printf("%f Foot per second to Meter per second = %.4f\n", input , input/3.281);
	    	break;
	    	case 7 : 
	    	printf("Foot per second : ");
	    	scanf("%f", &input);
	    	printf("%f Foot per second to Meter per second = %.4f\n", input , input*3.281);
	    	break;
	    	case 8 :
	    	system("cls");
	    	main();
	    	break;
	    	default :
	    	printf("Invalid\n");
	    	break;
		}
		fflush(stdin);
        printf("\nIF TOU WANT TO DO MORE OPERATIONS THEN PRESS 'A' TO CONTINUE.....");
        scanf("%c", &z);
	}
	while (z=='A');
	return;
}

void currency(){
	system("cls");
	float input;
	int a;
	char z;
	printf("\t\t1. PKR to USD\n");
	printf("\t\t2. USD to PKR\n");
	printf("\t\t3. INR to USD\n");
	printf("\t\t4. JAP YEN to PKR\n");
	printf("\t\t5. AED to PKR\n");
	printf("\t\t6. CHINESE YUAN to PKR\n");
	printf("\t\t7. TURKISH LIRA to PKR\n");
	printf("\t\t8. Exit\n");
	
	do {
		printf("Enter given options to continue : ");
	    scanf("%d", &a);
	    switch(a){
	    	case 1 :
	    	printf("PKR : \n");
	    	scanf("%f", &input);
	    	printf("%f PKR to USD = %.4f\n", input, input*0.0045);
	    	break;
	    	case 2 : 
	    	printf("USD : \n");
	    	scanf("%f", &input);
	    	printf("%f USD to PKR = %.4f\n", input, input*223.24);
	    	break;
	    	case 3 :
	    	printf("INR : \n");
	    	scanf("%f", &input);
	    	printf("%f INR to USD = %.4f\n", input, input*0.012);
	    	break;
	    	case 4 :
	    	printf("JAP YEN : \n");
	    	scanf("%f", &input);
	    	printf("%f JAP YEN to PKR = %.4f\n", input, input*1.64);
	    	break;
	    	case 5 :
	    	printf("AED : \n");
	    	scanf("%f", &input);
	    	printf("%f AED to PKR = %.4f\n", input, input*59.37);
	    	break;
	    	case 6 : 
	    	printf("CHINESE YUAN : \n");
	    	scanf("%f", &input);
	    	printf("%f CHINESE YUAN to PKR = %.4f\n", input, input*32.08);
	    	break;
	    	case 7 : 
	    	printf("TURKISH LIRA : \n");
	    	scanf("%f", &input);
	    	printf("%f TURKISH LIRA to PKR = %.4f\n", input, input*11.98);
	    	break;
	    	case 8 :
	    	system("cls");
	    	main();
	    	break;
	    	default : 
	    	printf("Invalid\n");
	    	break;
		}
		fflush(stdin);
        printf("\nIF TOU WANT TO DO MORE OPERATIONS THEN PRESS 'A' TO CONTINUE.....");
        scanf("%c", &z);
	}
	while (z=='A');
	return ;
}

void compData(){
	system("cls");
	system("color 87");
	double input;
	int a;
	char z;
	printf("\t\t1. Kilobytes to Megabytes\n");
	printf("\t\t2. Megabytes to Kilobytes\n");
	printf("\t\t3. Kilobytes to Gigabytes\n");
	printf("\t\t4. Megabytes to Gigabytes\n");
	printf("\t\t5. Gigabytes to Terabytes\n");
	printf("\t\t6. Terabytes to Gigabytes\n");
	printf("\t\t7. Kilobytes to Terabytes\n");
	printf("\t\t8. Exit\n");
	
	do {
	printf("Enter given options to continue : ");
	scanf("%d", &a);
	switch (a){
		case 1 :
	    	printf("Kilobytes : \n");
	    	scanf("%lf", &input);
	    	printf("%lf Kilobytes to Megabytes = %lf\n", input, input/1000);
	    	break;
	    	case 2 : 
	    	printf("Megabytes : \n");
	    	scanf("%lf", &input);
	    	printf("%lf Megabytes to Kilobytes = %lf\n", input, input*1000);
	    	break;
	    	case 3 :
	    	printf("Kilobytes : \n");
	    	scanf("%lf", &input);
	    	printf("%lf Kilobytes to Gigabytes = %lf\n", input, input/1000000);
	    	break;
	    	case 4 :
	    	printf("Megabytes : \n");
	    	scanf("%lf", &input);
	    	printf("%lf Megabytes to Gigabytes = %lf\n", input, input/1000);
	    	break;
	    	case 5 :
	    	printf("Gigabytes : \n");
	    	scanf("%lf", &input);
	    	printf("%lf Gigabytes to Terabytes = %lf\n", input, input/1000);
	    	break;
	    	case 6 : 
	    	printf("Terabytes : \n");
	    	scanf("%lf", &input);
	    	printf("%lf Terabytes to Gigabytes = %lf\n", input, input*1000);
	    	break;
	    	case 7 : 
	    	printf("Kilobytes : \n");
	    	scanf("%lf", &input);
	    	printf("%lf Kilobytes to Terabytes = %e\n", input, input/1000000000);
	    	break;
	    	case 8 :
	    	system("cls");
	    	main();
	    	break;
	    	default : 
	    	printf("Invalid\n");
	    	break;
	    }
	    fflush(stdin);
        printf("\nIF TOU WANT TO DO MORE OPERATIONS THEN PRESS 'A' TO CONTINUE.....");
        scanf("%c", &z);
    }
    while (z=='A');
    return;
}

void conv(){
	system("cls");
	system("color 5f");
	int input, a;
	char z;
	printf("\t\t1. Binary to Decimal\n");
	printf("\t\t2. Decimal to Binary\n");
	printf("\t\t3. Decimal to Hexadecimal\n");
	printf("\t\t4. Binary to Octal\n");
	printf("\t\t5. Binary to Hexadecimal\n");
	printf("\t\t6. Exit\n");
	
	do {
	
	printf("Enter given options to continue : ");
	scanf("%d", &a);
	switch (a){
		case 1 :
		printf("Binary : ");
		scanf("%d", &input);
		int dec_num = 0, base = 1, rem;
		while (a>0){
			rem = input % 10;
			dec_num += rem * base;
			input /= 10;
			base *= 2;
		}
		printf("Decimal : %d", dec_num);
		break;
		case 2 :
		printf("Decimal : ");
		scanf("%d", &input);
		int bin_num[32], i=0;
		while (input>0){
			bin_num[i] = input % 2;
			input /= 2;
			i++;
		}
		for (int j = i-1; j>=0; j--){
			printf("%d", bin_num[j]);
		}
		break;
		case 3 : 
		printf("Decimal : ");
		scanf("%d", &input);
		int x, rem1, k, l=0;
		char hexaNum[100];
		x = input;
		while (x != 0){
			rem1 = x % 16;
			if (rem1 <10){
				hexaNum[l++] = 48 + rem1;
			}
			else {
				hexaNum[l++] = 55 + rem1;
				x /= 16;
			}
		}
		for (k = l; k>=0; k--){
			printf("%c", hexaNum[k]);
		}
		break;
		case 4 :
		printf("Binary : ");
		scanf("%d", &input);
		int octNum=0, s=1, rem2;
		while (input != 0){
			rem2 = input % 10;
			octNum = octNum + rem2 * s;
			s = s * 2;
			input /= 10;
		}
		printf("Octal : %d\n", octNum);
		break;
		case 5 : 
		printf("Binary : ");
		scanf("%d", &input);
		long int hexNum = 0, b = 1, rem3;
		while (input != 0){
			rem3 = input % 10;
			hexNum += rem3 * b;
			b *= 2;
			input /= 10;
		}
		printf("Hexadecimal : %lX\n", hexNum);
		break;
		case 6 : 
		system("cls");
		main();
		break;
		default : 
		printf("Invalid\n");
		break;
	}
	fflush(stdin);
        printf("\nIF TOU WANT TO DO MORE OPERATIONS THEN PRESS 'A' TO CONTINUE.....");
        scanf("%c", &z);
	}
	while (z=='A');
	
	
	return ;
}