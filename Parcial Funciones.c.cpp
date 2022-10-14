#include <stdio.h>

void Aumento();
void AumentoB();
int main(){
	int sexo;
	printf("Buenas tardes por favor ingrese su su sexo \n1)Si es hombre \n2)si es Mujer\n");
	scanf("%d",&sexo);
	switch(sexo){
		case 1: Aumento();break;
		case 2: AumentoB();break;
		default: printf("Numero invalido");
	}
		
}
void Aumento(){
	int anoserv,c=0,y,increm;
	float sueldo,aumento,nvosueldo,porcentaje;
	printf("Buenas tardes por favor ingrese su codigo de empleado\n");
	scanf("%d",&c);
	printf("Por favor ingrese su sueldo\n");
	scanf("%f",&sueldo);
	printf("Por favor ingrese sus años de servicio\n");
	scanf("%d",&anoserv);
	
	if(anoserv<=10 && sueldo<=1000){
		aumento=sueldo*0.35;

	}else
		aumento=sueldo*0.30;

	nvosueldo=sueldo+aumento;
	increm=nvosueldo-sueldo;
	printf("Colaborador %d\n",c);
	printf("%d Anos de servicio\n",anoserv);
	printf("su aumento fue de :%d\n",increm);
	printf("Sueldo base: %f\n",sueldo);
	printf("Su nuevo sueldo es:  %f",nvosueldo);
	
		
	
}
void AumentoB(){
	int anoserv,c,porc,rest,increm;
	float sueldo,aumento,nvosueldo;
	printf("Buenas tardes por favor ingrese su codigo de empleado\n");
	scanf("%d",&c);
	printf("Por favor ingrese su sueldo");
	scanf("%f",&sueldo);
	printf("Por favor ingrese sus años de servicio");
	scanf("%d",&anoserv);
	
	if(anoserv<=5 && sueldo<=1000){
		aumento=sueldo*0.50;
		porc=50;		
	}else
		aumento=sueldo*0.30;
		porc=30;
		
	nvosueldo=sueldo+aumento;
	increm=nvosueldo-sueldo;
	printf("Colaborador %d\n",c);
	printf("%d Anos de servicio\n",anoserv);
	printf("su aumento fue de :%d\n",increm);
	printf("Sueldo base: %f\n",sueldo);
	printf("Su nuevo sueldo es:  %f",nvosueldo);
		
}	

