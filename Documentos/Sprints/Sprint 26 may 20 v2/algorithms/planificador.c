

Task K_req[]; //Set de kernels que solicitan recursos
Task K_rdy[]; //Set de kernels pendientes
Task K_rSM0[]; //Set de kernels a ejecutar en SM0
Task K_rSM1[]; //Set de kernels a ejecutar en SM1

while(K_rdy != NULL){

	K_rdy.insert(K_req[]); //Une solicitudes a la lista a planificar

	asignaPrioridad(K_rdy);

	# balancea carga

	ejecutarKernels(K_rSM0,K_rSM1);

	usleep(quantum_time); //Espera quantum promedio

	kernelsCompletados(K_rSM0,K_rSM1); // Se verifica cuales terminaron y se quitan de la lista

	K_rdy.insert(K_req[]); //Une solicitudes nuevas a la lista a planificar

	asignaPrioridad(K_rdy);

	Eliminar los que tengan baja prioridad en ejecucion para dar luhar a los que tengan ahora mayor

	#balanceo de carga // Si hubo prioridades más alta se va eliminando las tareas de menor prioridad, hasta que quepan las nuevas de mayor prioidad



	ejecutarKernels(K_rSM0,K_rSM1);


	



	

}
