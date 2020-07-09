//Planificador

#define SM 2; //Número de SM
#define TSM 2048 //Número de threads por SM

. . .

int tokens_SM0 = tokens_SM1 = SM * TSM / 2;
int tokenAsignadosSM0, tokenAsignadosSM1;

Task task;

Task K_rdy[] = kernelsNuevos(); //Set de kernels pendientes
Task K_rSM0[] = NULL; //Set de kernels a ejecutar en SM0
Task K_rSM1[] = NULL; //Set de kernels a ejecutar en SM1
Task K_jmp[] = NULL; //Set de kernels saltados de ejecución

while(K_rdy != NULL){
	tokenAsignadosSM0 = tokenAsignadosSM1 = 0;

	while(K_rdy != NULL){
		task = getTaskMayorPrioridad(K_rdy); //Obtiene la mayor prioridad
		K_rdy.remove(task);

		if(task.costo + tokenAsignadosSM0 <= tokens_SM0){
			K_rSM0.insert(task);	
			tokenAsignadosSM0 += task.costo;
		}else if(task.costo + tokenAsignadosSM1 <= tokens_SM1){
			K_rSM1.insert(task);	
			tokenAsignadosSM1 += task.costo;
		}else K_jmp.insert(task); // Si no cabe, la tarea se salta
	}

	if(K_jump != NULL){
		K_rdy.insert(K_jmp); //Se agregan al set todos los kernel saltados
		K_jump = NULL;
	}

	ejecutarKernels(K_rSM0,K_rSM1); //Ejecuta los kernel encolados 
	
	/*Espera hasta que todos alcancen su deadline */

	K_rdy.insert(kernelsSinCompletar(K_rSM0,K_rSM1)); 
	//Inserta en el set los kernel que aún no se hayan completado.
	K_rdy.insert(kernelsNuevos()); 
	//Inserta en el set los kernel que recien solicitaron recursos de GPU

	. . .
}