#define SM 2; //Número de SM
#define TSM 2048 //Número de threads por SM

sol[] = NULL //Set de kernels que solicitan recursos
R[] = NULL //Kernels en cola de ejecución
r = NULL //Set de kernels ordenados por prioridad

while(sol != NULL && R != NULL ){
	sol[] = getListaSolRecursos(); 

	R.instert(sol);

	r = asigPrioridad(R);

	balanceoCarga(r);

	detieneTareas(r);

	iniciaTareasFaltantesEjec(r);

	/*Espera quantum de tareas en ejecución*/

	tareasCompletadas(R);
}