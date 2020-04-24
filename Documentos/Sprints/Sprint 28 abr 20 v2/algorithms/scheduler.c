//Planificador

getTaskMayorPrioridad(K_listo); // Función del módulo Asignación 
                                                //de prioridad
ejecutarKernels(K_run); //Función Planificador
kernelsSinCompletar(K_run) //Función módulo Planificador

#define SM 2; //Número de SM
#define TSM 2048 //Número de threads por SM

. . .

int tokens_total = SM * TSM;
int tokenAsignados;

Task task;

K_rdy[numKernels] = #todos los kernels; //Set de kernels pendientes
K_run[numKernels] = NULL; //Set de kernels en ejecución
K_jmp[numKernels] = NULL; //Set de kernels saltados de ejecución

while(K_rdy != NULL){
	tokenAsignados = 0;

	while(K_rdy != NULL && tokenAsignados < tokens_total){
		task = getTaskMayorPrioridad(K_rdy); //Obtiene la mayor prioridad
		K_rdy.remove(task);
		if(task.costo + tokenAsignados <= tokens_total){
			K_run.insert(task);	
			tokenAsignados += task.costo;
		}else K_jmp.insert(task); // Si no cabe la tarea, se salta
	}

	if(K_jump != NULL){
		K_rdy.insert(K_jmp); //Se agregan al set todos los kernel saltados
		K_jump = NULL;
	}

	ejecutarKernels(K_run); //Ejecuta los kernel encolados 
	
	/*Espera hasta que todos alcancen su deadline */

	K_rdy.insert(kernelsSinCompletar(K_run)); 
	//Inserta en el set los kernel que aún no se hayan completado.

	. . .
}