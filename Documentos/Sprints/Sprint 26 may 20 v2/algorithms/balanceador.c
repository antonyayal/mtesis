//Balanceador de carga

#define SM 2; //Número de SM
#define TSM 2048 //Número de threads por SM

. . .

int tokens_SM0 = tokens_SM1 = SM * TSM / 2;
int tokenAsignadosSM0, tokenAsignadosSM1;

Task task;

Task K_rdy[]; //Set de kernels pendientes
Task K_rSM0[]; //Set de kernels a ejecutar en SM0
Task K_rSM1[]; //Set de kernels a ejecutar en SM1

while(K_rdy != NULL){
	tokenAsignadosSM0 = tokenAsignadosSM1 = 0;
	

	while(K_rdy != NULL){

		task = getNextTaskMayorPrioridad(K_rdy); //Obtiene la mayor prioridad

		if(task.costo + tokenAsignadosSM0 <= tokens_SM0){
			K_rSM0.insert(task);	
			tokenAsignadosSM0 += task.costo;
		}else if(task.costo + tokenAsignadosSM1 <= tokens_SM1){
			K_rSM1.insert(task);	
			tokenAsignadosSM1 += task.costo;
		}
	}

	. . .
}